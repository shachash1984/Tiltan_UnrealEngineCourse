#include "Laser.h"
#include <iostream>
#include "Weapon.h"

Laser::Laser()
	: Weapon()
{
}

Laser::Laser(std::string _name, unsigned _damage, float _range, float _reloadTime, unsigned _ammo)
	: Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
	std::cout << "Laser Created!" << std::endl;
}

Laser::~Laser()
{
	//std::cout << "Laser Destroyed!" << std::endl;
}

Laser::Laser(const Laser& other)
	: Weapon(other)
{
	std::cout << "Laser Copy Constructed!" << std::endl;
}

Laser& Laser::operator=(const Laser& other)
{
	std::cout << "Laser: " << name << " is now Assigned and has a new Laser: " << other.name << std::endl;
	name = other.name;
	return *this;
}

bool Laser::Shoot()
{
	return Weapon::Shoot();
}
