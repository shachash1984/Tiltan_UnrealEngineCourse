#include "Weapon.h"
#include <iostream>
#include <string>
#include "IDamageable.h"
using namespace std;

const string Weapon::DEFAULT_NAME = "Default Name";
Weapon::Weapon() // -5 these should be initialized int the constructor initializer list (like the following ctor you created)
{
	cout << "Creating Default Weapon:"<< endl;
	_name = DEFAULT_NAME;
	_damage = ONE;
	_range = ONE;
	_reloadTime = ONE;
	_ammo = ONE;
	_hitChance = ONE;
}
Weapon::Weapon(string name, unsigned int damage, float range, float reloadTime, unsigned int ammo, unsigned int critChance) :
	_name(name), _damage(damage), _range(range), _reloadTime(reloadTime), _ammo(ammo),_hitChance(critChance)
{
	cout << "Creating Weapon:" << name << endl;
}
Weapon::Weapon(const Weapon& other) : _name(other._name), _damage(other._damage), _range(other._range),
_reloadTime(other._reloadTime), _ammo(other._ammo), _hitChance(other._hitChance)
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
	_hitChance = weapon._hitChance;
	cout << "Copying Values of Weapon:" << _name << endl;
	return *this;
}

bool Weapon::Shoot(unsigned int distanceToTarget)
{
	cout << "Shooting: "<< _name << endl;

	if (_ammo > 0)
	{
		_ammo--;
		if (distanceToTarget <=_range)
		{
			srand(time(0));
			int random = (rand()%(100+1)-0);
			cout << "Random is: " << random << endl; // +5 bonus for using random
			if (_hitChance > random)
			{
				cout << "Hit Target"<<endl;
				return true;
			}
			else
			{
				cout << "Missed Target"<<endl;
			}
		}
		else
		{
			cout << "Target is out of range"<<endl;
		}
	}
	else
	{
		cout << "Out of Ammo"<<endl;
	}
	return false;
}