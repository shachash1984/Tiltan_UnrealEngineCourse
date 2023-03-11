#include <iostream>
#include "Grenade.h"
#include "Weapon.h"

Grenade::Grenade()
	: Weapon()
{
}

Grenade::Grenade(std::string _name, unsigned _damage, float _range, float _reloadTime, unsigned _ammo)
	: Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
	std::cout << "Grenade Created!" << std::endl;
}

Grenade::~Grenade()
{

}


bool Grenade::Shoot()
{
	return Weapon::Shoot();
}
