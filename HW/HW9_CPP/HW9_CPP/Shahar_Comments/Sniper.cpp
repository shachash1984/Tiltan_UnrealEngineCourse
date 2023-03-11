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


bool Sniper::Shoot()
{
	return Weapon::Shoot();
}
