#include <iostream>
#include "Shotgun.h"
#include "Weapon.h"

Shotgun::Shotgun()
	: Weapon()
{
}

Shotgun::Shotgun(std::string _name, unsigned _damage, float _range, float _reloadTime, unsigned _ammo)
	: Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
	std::cout << "Shotgun Created!" << std::endl;
}

Shotgun::~Shotgun()
{

}


bool Shotgun::Shoot()
{
	return Weapon::Shoot();
}
