#include "Weapon.h"

Weapon::Weapon()
	: name("")
	, damage(0)
	, range(0)
	, reloadTime(0)
	, ammo(0)
{};

Weapon::Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo)
	: name(_name)
	, damage(_damage)
	, range(_range)
	, reloadTime(_reloadTime)
	, ammo(_ammo)
{}
Weapon::Weapon(const Weapon & other)
	: name(other.name)
	, damage(other.damage)
	, range(other.range)
	, reloadTime(other.reloadTime)
	, ammo(other.ammo)
{}
Weapon& Weapon::operator=(const Weapon & other)
{
	std::cout << "Weapon Operator Worked!\n\n";
	if (this == &other) { return *this; } 
	
	name = other.name;
	damage = other.damage;
	range = other.range;
	reloadTime = other.reloadTime;
	ammo = other.ammo;
	return *this;
}
;

Weapon::~Weapon() { /*std::cout << "\noups\n";*/ };

bool Weapon::Shoot()
{


	if (ammo > 0)
	{
		std::string txt = name + " shoot a shot of "
			+ std::to_string(damage) + " damage!\nRange of "
			+ std::to_string(range) + " Meters\nThe Reload Time is "
			+ std::to_string(reloadTime) + "s\nwe had "
			+ std::to_string(ammo) + " and now we have "
			+ std::to_string(ammo-1) + " ammo\n\n";
		ammo--;
		std::cout << txt;
		return true;
	}
	else
	{
		std::string txt = name + " is out of ammo!\nThe gun Has "
			+ std::to_string(damage) + " damage!\nRange of "
			+ std::to_string(range) + " Meters\nwill have ammo again in "
			+ std::to_string(reloadTime) + "s\n\n";

		std::cout << txt;
		return false;
	}
}
Weapon* Weapon::Clone()
{
	return new Weapon(*this);
}
;



