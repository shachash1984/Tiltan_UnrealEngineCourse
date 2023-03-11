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

Weapon::Weapon(const Weapon& other)
	: name(other.name), damage(other.damage), range(other.range), reloadTime(other.reloadTime), ammo(other.ammo)
{
	std::cout << "Weapon " << name << " Copy Constructed!" << std::endl;
}

Weapon& Weapon::operator=(const Weapon& other) // -10 not implementing the copying of other relevant fields
{
	std::cout << "Weapon: " << name << " is now Assigned and has a new name: " << other.name << std::endl;
	return *this;
}

bool Weapon::Shoot()
{
	std::cout << "Weapon " << name << " Shoot!" << std::endl;
	return true;
}

