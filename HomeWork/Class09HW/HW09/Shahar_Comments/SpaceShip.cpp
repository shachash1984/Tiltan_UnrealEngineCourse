#include "SpaceShip.h"

SpaceShip::SpaceShip(std::string _name, std::vector<Weapon*> _weapons) // -5 should be initialized in ctor initialization list
{
	name = _name;
	weapons = _weapons;
}

SpaceShip::~SpaceShip()
{
	// Destructor
}

void SpaceShip::AddWeapon(Weapon& _weapon)
{
	weapons.push_back(&_weapon);
}

void SpaceShip::Shoot()
{
	if (currentWeapon)
	{
		currentWeapon->Shoot();
	}
}

void SpaceShip::FireEverythingWeGot()
{
	for (auto weapon : weapons)
	{
		weapon->Shoot();
	}
}