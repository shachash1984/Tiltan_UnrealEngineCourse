#pragma once
#include "Weapon.h"
#include "Spaceship.h"
#include <string>
#include <iostream>

Weapon::Weapon()
{
	_name = "default";
	_damage = 1;
	_range = 5;
	_reloadTime = 1;
	_ammo = 15;
	_critChance = 10;
}

Weapon::Weapon(string name, unsigned int damage, float range, float reloadTime, unsigned int ammo, unsigned int critChance)
{
	_name = name;
	_damage = damage;
	_range = range;
	_reloadTime = reloadTime;
	_ammo = ammo;
	_critChance = critChance;
}

Weapon::~Weapon()
{
	cout << "Weapon " + _name + " destroyed!" << endl;
}

bool Weapon::Shoot(unsigned int distanceToTarget, Spaceship* target)
{
	if (_ammo > 0)
	{
		_ammo--;
		if (_range >= distanceToTarget)
		{
			return true;
		}
	}
	
	return false;
}
