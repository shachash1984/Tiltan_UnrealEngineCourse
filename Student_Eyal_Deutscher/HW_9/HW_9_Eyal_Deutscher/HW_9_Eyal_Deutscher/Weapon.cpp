#include "Weapon.h"
#include <iostream>
#include <string>
using namespace std;

const string Weapon::DEFAULT_NAME = "Default Name";
Weapon::Weapon()
{
	cout << "Creating Default Weapon:"<< endl;
	_name = DEFAULT_NAME;
	_damage = ONE;
	_range = ONE;
	_reloadTime = ONE;
	_ammo = ONE;
	_critChance = ONE;
}
Weapon::Weapon(string name, unsigned int damage, float range, float reloadTime, unsigned int ammo, unsigned int critChance) :
	_name(name), _damage(damage), _range(range), _reloadTime(reloadTime), _ammo(ammo),_critChance(critChance)
{
	cout << "Creating Weapon:" << name << endl;
}
Weapon::Weapon(const Weapon& other) : _name(other._name), _damage(other._damage), _range(other._range),
_reloadTime(other._reloadTime), _ammo(other._ammo), _critChance(other._critChance)
{
	cout << "Creating copy of Weapon:" << _name << endl;
}
Weapon::~Weapon()
{
	cout << "Destructing Weapon:" << _name << endl;
}

Weapon& Weapon::operator=(const Weapon weapon)
{
	_name = weapon._name;
	_damage = weapon._damage;
	_range = weapon._range;
	_reloadTime = weapon._reloadTime;
	_ammo = weapon._ammo;
	_critChance = weapon._critChance;
	cout << "Copying Values of Weapon:" << _name << endl;
	return *this;
}

bool Weapon::Shoot(unsigned int distanceToTarget,IDamageable target)
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