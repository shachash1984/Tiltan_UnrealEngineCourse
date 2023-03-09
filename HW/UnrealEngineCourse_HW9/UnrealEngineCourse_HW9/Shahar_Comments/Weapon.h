#pragma once
#include <string>
#include <iostream>

using namespace std;

class Weapon
{
public:
	Weapon();
	Weapon(string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	virtual ~Weapon();
	virtual bool Shoot(); //returns true if there is a hit, ALSO, needs to print the weapon's members and their values // -20 not printing as instructed
	void ToString();

protected:
	string name;
	unsigned int damage;
	float range;
	float reloadTime;
	unsigned int ammo;
};