#include "Plane.h"
#include <iostream>

Plane::Plane(std::string name, std::vector<Weapon*> weapons) : _name(name), _weapons(weapons)
{
}

Plane::~Plane()
{
}

void Plane::AddWeapon(Weapon& _weapon)
{
}

void Plane::Shoot()
{

}

void Plane::FireStuff()
{
	for (int i = 0; i < _weapons.size(); i++)
	{
		_currentWeapon = _weapons[i];
		_currentWeapon->Shoot();
		_currentWeapon->ToString();
	}
}
