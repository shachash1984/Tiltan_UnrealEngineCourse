#include "Weapon.h"

Weapon::Weapon()
	: name("Bare Handed"), damage(1), range(3), reloadTime(0), ammo(0)
{

}

Weapon::Weapon(string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo) 
	: name(_name), damage(_damage), range(_range), reloadTime(_reloadTime), ammo(_ammo)
{

}

Weapon::~Weapon()
{

}

bool Weapon::Shoot()
{
	return false;
}

void Weapon::ToString()
{
	cout << name << " had fired.\n";
}