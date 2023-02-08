#include "Gun.h"
#include <iostream>
#include "Weapon.h"

Gun::Gun()
	: Weapon()
{
}

Gun::Gun(std::string _name, unsigned _damage, float _range, float _reloadTime, unsigned _ammo)
	: Weapon(_name, _damage, _range, _reloadTime, _ammo)
{

}

Gun::~Gun()
{
	//std::cout << "Cannon Destroyed!" << std::endl;
}

bool Gun::Shoot()
{
	return Weapon::Shoot();
}