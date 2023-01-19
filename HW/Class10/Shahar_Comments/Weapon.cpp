#include "Weapon.h"
#include <ctime>    
#include <iostream>

Weapon::Weapon() : name(""), damage(0), range(0), reloadTime(0), hitChance(0), ammo(0)
{
	std::cout << "Created weapon with no stats, make sure you give stats to all weapons";
}

Weapon::Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo) 
			: name(_name), damage(_damage), range(_range), reloadTime(_reloadTime), hitChance(_hitChance), ammo(_ammo)
{
}

Weapon::Weapon(const Weapon& other)
	: name(other.name), damage(other.damage), range(other.range),
	  hitChance(other.hitChance), reloadTime(other.reloadTime), ammo(other.ammo)
{
	
}

Weapon& Weapon::operator=(const Weapon other)
{
	if (this != &other)
	{
		name = other.name;
		damage = other.damage;
		range = other.range;
		hitChance = other.hitChance;
		reloadTime = other.reloadTime;
		ammo = other.ammo;
	}
	return *this;
}

Weapon::~Weapon()
{
}

bool Weapon::Shoot()
{
	if (ammo <= 0)
	{
		std::cout << name << "is out of ammo!\n\n";
		return false;
	}


	if (hitChance > 100)
	{
		std::cout << name << "'s hit chance was too high and reduced to 100\n\n";
		hitChance = 100;
	}
	else if (hitChance < 0)
	{
		std::cout << name << "'s hit chance was too low and increased to 0\n\n";
		hitChance = 0;
	}
	std::srand(time(0));

	int r = std::rand() % 100 + 1;

	if (r <= hitChance)
	{
		std::cout << "HIT!!!\n" << "Weapon: " << name << ", Damage: " << std::to_string(damage) << ", Range: " <<
			std::to_string(range) << ", Reload Time: " << std::to_string(reloadTime) <<
			", Hit Chance: " << std::to_string(hitChance) << "%" << ", Ammo: " << std::to_string(ammo) << "\n\n";
		ammo--;
		return true;
	}
	else
	{
		std::cout << "MISS!!!\n" << "Weapon: " << name << ", Damage: " << std::to_string(damage) << ", Range: " <<
			std::to_string(range) << ", Reload Time: " << std::to_string(reloadTime) <<
			", Hit Chance: " << std::to_string(hitChance) << "%" << ", Ammo: " << std::to_string(ammo) << "\n\n";
		ammo--;
		return true;
	}
}
