#include "Weapon.h"
#include "Spaceship.h"
#include <iostream>
#include <string>
using namespace std;
static const string DEFAULT_NAME = "Default Name";
const unsigned int ONE = 1;
Weapon::Weapon()
{
	cout << "Creating Default Weapon:"<< endl;
	_name = DEFAULT_NAME;
	_damage = ONE;
	_range = ONE;
	_reloadeTime = ONE;
	_ammo = ONE;
	_critChance = ONE;
}

Weapon::Weapon(string name, unsigned int damage, float range, float reloadTime, unsigned int ammo, unsigned int critChance)
{
	cout << "Creating Weapon:" << name << endl;
	_name = name;
	_damage = damage;
	_range = range;
	_reloadeTime = reloadTime;
	_ammo = ammo;
	_critChance = critChance;
}
Weapon::~Weapon()
{
	cout << "Destructing Weapon:" << _name << endl;
}
bool Weapon::Shoot(unsigned int distanceToTarget,Spaceship target)
{
	if (_ammo > 0)
	{
		_ammo--;
		if (distanceToTarget <=_range)
		{

			return true;
		}
	}
	return false;
}