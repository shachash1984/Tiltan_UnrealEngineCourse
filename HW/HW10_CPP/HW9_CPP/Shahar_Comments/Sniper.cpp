#include <iostream>
#include "Sniper.h"
#include "Weapon.h"

Sniper::Sniper()
	: Weapon()
{
}

Sniper::Sniper(std::string _name, unsigned _damage, float _range, float _reloadTime, unsigned _ammo)
	: Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
	std::cout << "Sniper Created!" << std::endl;
}

Sniper::~Sniper()
{

}

Sniper::Sniper(const Sniper& other)
	: Weapon(other)
{
	std::cout << "Sniper Copy Constructed!" << std::endl;
}

Sniper& Sniper::operator=(const Sniper& other)
{
	std::cout << "Sniper: " << name << " is now Assigned and has a new Sniper: " << other.name << std::endl;
	name = other.name;
	return *this;
}


bool Sniper::Shoot()
{
	return Weapon::Shoot();
}
