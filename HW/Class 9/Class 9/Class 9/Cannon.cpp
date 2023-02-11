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


bool Cannon::Shoot()
{
	return Weapon::Shoot();
}
