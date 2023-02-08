#include "SpaceShip.h"
#include <iostream>
#include "Weapon.h"

SpaceShip::SpaceShip(std::string _name, std::vector<Weapon*> _weapons)
	: name(_name), weapons(_weapons)
{
}

SpaceShip::~SpaceShip()
{
	delete currentWeapon;
	std::cout << "SpaceShip " << name << " Destroyed!" << std::endl;
}

SpaceShip::SpaceShip(const SpaceShip& other)
	: name(other.name), weapons(other.weapons)
{
	std::cout << "SpaceShip " << name << " Copy Constructed!" << std::endl;
}

SpaceShip& SpaceShip::operator=(const SpaceShip& other)
{
	std::cout << "SpaceShip " << name << " is now Assigned and has a new name: " << other.name << std::endl;
	name = other.name;
	return *this;
}

void SpaceShip::AddWeapon(Weapon& _weapon)
{
	weapons.push_back(&_weapon);
}

void SpaceShip::Shoot() const
{
	currentWeapon->Shoot();
}

void SpaceShip::FireEverythingWeGot() const
{
	//for (unsigned i = 0; i < weapons.size(); i++)
	//{
	//	weapons[i]->shoot();
	//}

	for (Weapon* weapon : weapons)
	{
		weapon->Shoot();
	}
}

