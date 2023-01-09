#include "Weapon.h"
#include <iostream>
#include <random>
using std::cout;
using std::endl;

Weapon::Weapon() : name("New Weapon"), damage(1), range(1), reloadTime(1), ammo(1), maxAmmo(ammo)
{
}

Weapon::Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo)
	: name(_name), damage(_damage), range(_range), reloadTime(_reloadTime), ammo(_ammo), maxAmmo(ammo)
{
}

Weapon::~Weapon()
{
	cout << "Weapon " << name << " Destroyed!" << endl;
}

bool Weapon::Shoot()
{
	if (ammo > 0)
	{
		ammo--;

		float chance = range / 100;
		float randNum = ((float)rand() / RAND_MAX) * (1 - 0) + 0;
		if (chance >= randNum)
		{
			cout << ToString();
			return true;
		}
	}
	cout << ToString();
	return false;
}
