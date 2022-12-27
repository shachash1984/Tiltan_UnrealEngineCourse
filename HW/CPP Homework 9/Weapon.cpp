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
{};

Weapon::~Weapon() {};

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
};



