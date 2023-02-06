#pragma once

#include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	virtual ~Weapon();
	virtual bool Shoot(); //returns true if there is a hit, ALSO, needs to print the weapon's members and their values

	string ToString() {
		return "Weapon: " + name + "Damage: " + to_string(damage)
			+ "Range: " + to_string(range) + "ReloadTime: " + to_string(reloadTime)
			+ "Amoo: " + to_string(ammo) + "\n";
	}
protected:
	std::string name;
	unsigned int damage;
	float range;
	float reloadTime;
	unsigned int ammo;
};