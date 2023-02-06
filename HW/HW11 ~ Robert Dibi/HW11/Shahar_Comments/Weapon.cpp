#include "Weapon.h"

Weapon::Weapon() // -5 These need to be initialized in the constructor initialization list
{
	name = "Unnamed Weapon";
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
	std::cout << "Deleting weapon " << name << std::endl;
}

bool Weapon::Shoot()
{
	std::cout << "Firing weapon " << name << " with damage " << damage << ", range " << range << ", reload time " << reloadTime << " and " << ammo << " ammo" << std::endl;
	return true;
}

Weapon::Weapon(const Weapon& other)
{
	name = other.name;
	damage = other.damage;
	range = other.range;
	reloadTime = other.reloadTime;
	ammo = other.ammo;
}

Weapon& Weapon::operator=(const Weapon& other)
{
	if (this != &other)
	{
		name = other.name;
		damage = other.damage;
		range = other.range;
		reloadTime = other.reloadTime;
		ammo = other.ammo;
	}
	return *this;
}
