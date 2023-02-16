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

Shotgun::Shotgun(const Shotgun& other)
	: Weapon(other)
{
	std::cout << "Shotgun Copy Constructed!" << std::endl;
}

Shotgun& Shotgun::operator=(const Shotgun& other)
{
	std::cout << "Shotgun: " << name << " is now Assigned and has a new Shotgun: " << other.name << std::endl;
	name = other.name;
	return *this;
}

bool Shotgun::Shoot()
{
	return Weapon::Shoot();
}
