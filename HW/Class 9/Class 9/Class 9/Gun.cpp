#include "Gun.h"
#include <iostream>
#include "Weapon.h"

Gun::Gun()
	: Weapon()
{
	std::cout << "Gun Created!" << std::endl;	
}

Gun::Gun(std::string _name, unsigned _damage, float _range, float _reloadTime, unsigned _ammo)
	: Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
	std::cout << "Gun Created!" << std::endl;
}

Gun::~Gun()
{
	//std::cout << "Cannon Destroyed!" << std::endl;
}

Gun::Gun(const Gun& other)
	: Weapon(other)
{
	std::cout << "Gun Copy Constructed!" << std::endl;
}

Gun& Gun::operator=(const Gun& other)
{
	std::cout << "Gun: " << name << " is now Assigned and has a new Gun: " << other.name << std::endl;
	name = other.name;
	return *this;
}

bool Gun::Shoot()
{
	return Weapon::Shoot();
}
