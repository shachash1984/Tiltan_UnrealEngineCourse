#include "Weapon.h"
#include <iostream>

Weapon::Weapon()
{
}

Weapon::Weapon(std::string name, unsigned int damage, float range, float reloadTime, unsigned int ammo)
	: _name(name), _damage(damage), _range(range), _reloadTime(reloadTime), _ammo(ammo)
{
}

Weapon::~Weapon()
{
}

bool Weapon::Shoot()
{
	return false;
}

void Weapon::ToString()
{
	std::cout << _name << " has shot\n";
}
