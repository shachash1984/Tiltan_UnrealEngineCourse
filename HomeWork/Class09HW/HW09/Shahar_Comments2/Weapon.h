#pragma once

#include <string>
using namespace std;
class Weapon
{
public:
	Weapon();
	Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	virtual ~Weapon();
	virtual bool Shoot(); //returns true if there is a hit, ALSO, needs to print the weapon's members and their values

	string ToString() { //-2 won't compile, forgot std::
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