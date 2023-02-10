#include "Weapon.h"
#include <iostream>
#include <string>
#include "IDamageable.h"
using namespace std;

const string Weapon::DEFAULT_NAME = "Default Name";
Weapon::Weapon() : _name(DEFAULT_NAME), _damage(ONE), _range(ONE), _reloadTime(ONE), _ammo(ONE), _hitChance(ONE)
{
	cout << "Creating Default Weapon:"<< endl;
}
Weapon::Weapon(string name, unsigned int damage, float range, float reloadTime, unsigned int ammo, unsigned int critChance) :
	_name(name), _damage(damage), _range(range), _reloadTime(reloadTime), _ammo(ammo),_hitChance(critChance)
{
	cout << "Creating Weapon:" << name << endl;
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
			cout << "Random is: " << random << endl;
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