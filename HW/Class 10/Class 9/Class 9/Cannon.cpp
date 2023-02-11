#include "Cannon.h"
#include <iostream>
#include "Weapon.h"

Cannon::Cannon()
	: Weapon()
{
	std::cout << "Cannon Created!" << std::endl;
}

Cannon::Cannon(std::string _name, unsigned _damage, float _range, float _reloadTime, unsigned _ammo)
	: Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
	std::cout << "Cannon Created!" << std::endl;
}

Cannon::~Cannon()
{
	//std::cout << "Cannon Destroyed!" << std::endl;
}

Cannon::Cannon(const Cannon& other)
	: Weapon(other)
{
	std::cout << "Cannon Copy Constructed!" << std::endl;
}

Cannon& Cannon::operator=(const Cannon& other)
{
	std::cout << "Cannon: " << name << " is now Assigned and has a new Cannon: " << other.name << std::endl;
	name = other.name;
	return *this;
}

bool Cannon::Shoot()
{
	return Weapon::Shoot();
}
