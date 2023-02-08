#include "Weapon.h"

#include <iostream>

Weapon::Weapon()
	: name("Default"), damage(0), range(0), reloadTime(0), ammo(0)
{
}

Weapon::Weapon(std::string _name, unsigned _damage, float _range, float _reloadTime, unsigned _ammo)
	: name(_name), damage(_damage), range(_range), reloadTime(_reloadTime), ammo(_ammo)
{
}

Weapon::~Weapon()
{
	std::cout << "Weapon " << name << " Destroyed!" << std::endl;
}

bool Weapon::Shoot()
{
	std::cout << "Weapon " << name << " Shoot!" << std::endl;
	return true;
}
