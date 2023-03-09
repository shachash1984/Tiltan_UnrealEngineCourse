#include "SpaceShip.h"
#include <iostream>

SpaceShip::SpaceShip(std::string name, std::vector<Weapon*> weapons) : _name(name), _weapons(weapons)
{
}

SpaceShip::~SpaceShip()
{
}

void SpaceShip::AddWeapon(Weapon& _weapon) //-10 not implemented
{
}

void SpaceShip::Shoot() //-10 not implemented
{
	
}

void SpaceShip::FireEverythingWeGot()
{
	for (int i = 0; i < _weapons.size(); i++)
	{
		_currentWeapon = _weapons[i];
		_currentWeapon->Shoot();
		_currentWeapon->ToString();
	}
}
