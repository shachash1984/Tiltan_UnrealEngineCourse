#include "Weapon.h"

#include <iostream>

Weapon::Weapon()
{
	std::cout << "Weapon Created" << std::endl;
}

Weapon::Weapon(std::string _name, unsigned _damage, float _range, float _reloadTime, unsigned _ammo)
	: name(_name), damage(_damage), range(_range), reloadTime(_reloadTime), ammo(_ammo)
{
	std::cout << "Weapon " << name << " Created!" << std::endl;
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

