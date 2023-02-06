#include "Weapon.h"
#include <iostream>
using namespace std;

Weapon::Weapon()
{
	name = "";
	damage = 0;
	range = 0.0f;
	reloadTime = 0.0f;
	ammo = 0;
}

Weapon::Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo)
{
	name = _name;
	damage = _damage;
	range = _range;
	reloadTime = _reloadTime;
	ammo = _ammo;
}

Weapon::~Weapon()
{
	// Destructor
	cout << "Weapon" << name << "Desstroyed" << endl;
}

bool Weapon::Shoot()
{
	// Decrement ammo
	if (ammo > 0)
	{
		ammo--;
		std::cout << "Weapon " << name << " with damage " << damage << " and range " << range << " shot. Ammo remaining: " << ammo << std::endl;

		// Return true if there is a hit
		return true;
	}
	cout << ToString();
	return false;
}