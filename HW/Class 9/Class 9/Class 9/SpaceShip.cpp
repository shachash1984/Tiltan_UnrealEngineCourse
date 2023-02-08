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

