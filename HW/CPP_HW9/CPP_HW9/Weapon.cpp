#pragma once
#include "Weapon.h"
#include "Spaceship.h"
#include <string>
#include <iostream>

Weapon::Weapon() : _name("default"), _damage(1), _range(5), _reloadTime(1), _ammo(15), _critChance(10)
{
	cout << "Creating Weapon: " << _name << endl;
}

Weapon::Weapon(string name, unsigned int damage, float range, float reloadTime, unsigned int ammo, unsigned int critChance) 
	: _name(name), _damage(damage), _range(range), _reloadTime(reloadTime), _ammo(ammo), _critChance(critChance)
{
	cout << "Creating Weapon: " << _name << endl;
}

Weapon::Weapon(const Weapon& other) 
	: _name(other._name), _damage(other._damage), _range(other._range), _reloadTime(other._reloadTime), _ammo(other._ammo), _critChance(other._critChance)
{
	cout << "Copying Weapon: " << _name << endl;
}

Weapon& Weapon:: operator =(const Weapon other)
{
	_name = other._name;
	_damage = other._damage;
	_range = other._range;
	_reloadTime = other._reloadTime;
	_ammo = other._ammo;
	_critChance = other._critChance;
	cout << "Copying Values of Weapon: " << _name << endl;
	return *this;
}

Weapon::~Weapon()
{
	cout << "Destroing Weapon: " << _name << endl;
}
bool Weapon::Shoot(unsigned int distanceToTarget)
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
