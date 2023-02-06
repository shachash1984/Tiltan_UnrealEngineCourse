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

SpaceShip::~SpaceShip()
{
	for (auto weapon : weapons)
	{
		delete weapon;
	}
	weapons.clear();
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