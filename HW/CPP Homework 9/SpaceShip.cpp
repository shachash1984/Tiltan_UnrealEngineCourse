#include "SpaceShip.h"

SpaceShip::SpaceShip(std::string _name, std::vector<Weapon*> _weapons)
	: name(_name)
	, weapons(_weapons)
	, currentWeapon(nullptr)
	, currentItemSlot(0)
{
	if (weapons.size() > 0) { currentWeapon = weapons[0]; }
}
SpaceShip::~SpaceShip()
{
}
void SpaceShip::AddWeapon(Weapon& _weapon)
{
	weapons.push_back(&_weapon);
	if (currentWeapon == nullptr) { currentWeapon = weapons[0]; }
}
void SpaceShip::ChangeWeapon(bool Forward)
{
	if (weapons.size() > 1) 
	{
		if (Forward)
		{
			if (currentItemSlot < weapons.size() - 1)
			{
				currentItemSlot++;
			}
			else
			{
				currentItemSlot = 0;
			}
		}
		else
		{
			if (0 < currentItemSlot)
			{
				currentItemSlot--;
			}
			else
			{
				currentItemSlot = weapons.size()-1;
			}
		}
		currentWeapon = weapons[currentItemSlot];
	}
}
void SpaceShip::Shoot()
{
	currentWeapon->Shoot();
}
;
