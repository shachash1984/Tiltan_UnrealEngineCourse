#include "SpaceShip.h"

SpaceShip::SpaceShip(std::string _name, std::vector<Weapon*> _weapons)
	: name(_name), weapons(_weapons)
{
	if (!weapons.empty())
	{
		currentWeapon = weapons[0];
	}
	else
	{
		currentWeapon = nullptr;
	}
}

SpaceShip::SpaceShip(const SpaceShip& other)
	: name(other.name), weapons(other.weapons)
{
	if (!weapons.empty())
	{
		currentWeapon = weapons[0];
	}
	else
	{
		currentWeapon = nullptr;
	}
}

SpaceShip& SpaceShip::operator=(const SpaceShip& other)
{
	if (this != &other)
	{
		name = other.name;
		weapons = other.weapons; // -2 what about current weapon?
	}
	return *this;
}

SpaceShip::~SpaceShip()
{
	for (auto weapon : weapons)
	{
		delete weapon;
	}
	delete& weapons; // -2 you don't need to delete a vector it is not a pointer, you can call clear() just to make sure it is empty
}

void SpaceShip::AddWeapon(Weapon& _weapon)
{
	weapons.push_back(&_weapon);
}

void SpaceShip::Shoot()
{
	if (currentWeapon != nullptr)
	{
		currentWeapon->Shoot();
	}
}

void SpaceShip::ShootAll()
{
	for (auto weapon : weapons)
	{
		weapon->Shoot();
	}
}