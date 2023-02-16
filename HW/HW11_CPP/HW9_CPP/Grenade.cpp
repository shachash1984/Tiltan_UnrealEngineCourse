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

Grenade::Grenade(const Grenade& other)
	: Weapon(other)
{
	std::cout << "Grenade Copy Constructed!" << std::endl;
}

Grenade& Grenade::operator=(const Grenade& other)
{
	std::cout << "Grenade: " << name << " is now Assigned and has a new Grenade: " << other.name << std::endl;
	name = other.name;
	return *this;
}

bool Grenade::Shoot()
{
	return Weapon::Shoot();
}
