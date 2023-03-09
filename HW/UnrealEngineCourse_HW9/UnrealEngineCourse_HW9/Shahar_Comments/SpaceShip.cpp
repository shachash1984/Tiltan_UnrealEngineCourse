#include "SpaceShip.h"

SpaceShip::SpaceShip(string _name, vector<Weapon*> _weapons) : name(_name), weapons(_weapons)
{

}

SpaceShip::~SpaceShip()
{

}

void SpaceShip::AddWeapon(Weapon& _weapon) // -10 not implemented
{

}

void SpaceShip::Shoot() // -10 not implemented
{

}

void SpaceShip::FireEverythingWeGot()
{
	if (weapons.size() > 0)
	{
		for (int i = 0; i < weapons.size(); i++)
		{
			currentWeapon = weapons[i];
			currentWeapon->ToString();
		}
	}
}
