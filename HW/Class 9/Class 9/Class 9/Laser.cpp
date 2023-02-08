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

}

Laser::~Laser()
{
	//std::cout << "Laser Destroyed!" << std::endl;
}

bool Laser::Shoot()
{
	return Weapon::Shoot();
}
