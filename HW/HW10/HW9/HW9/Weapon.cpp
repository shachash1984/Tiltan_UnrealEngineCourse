#include "Weapon.h"
#include <iostream>
#include <ctime>

Weapon::Weapon() : name(""), damage(0), range(0), reloadTime(0), hitChance(0), ammo(0)
{
	std::cout << "Weapon default constructor called";
}

Weapon::Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo)
	:name(_name), damage(_damage), range(_range), reloadTime(_reloadTime), hitChance(_hitChance), ammo(_ammo)
{
}

Weapon::Weapon(const Weapon& other) 
	: name(other.name), damage(other.damage), range(other.range), reloadTime(other.reloadTime), hitChance(other.hitChance), ammo(other.ammo)
{
}
	
Weapon& Weapon::operator=(const Weapon& other)
{
	if (this != &other)
	{
		name = other.name;
		damage = other.damage;
		range = other.range;
		reloadTime = other.reloadTime;
		hitChance = other.hitChance;
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
		std::cout << "Out of ammo!" << std::endl;
		return false;
	}
	
	if (hitChance > 100)
	{
		hitChance = 100;
	}
	else if (hitChance < 0)
	{
		hitChance = 0;
	}

	srand(time(0));
	int random = std::rand() % 101;

	if (random < hitChance)
	{
		std::cout << "Hit!" << std::endl;
		std::cout << "Damage: " << damage << std::endl;
		std::cout << "Range: " << range << std::endl;
		std::cout << "Reload Time: " << reloadTime << std::endl;
		std::cout << "Hit Chance: " << hitChance << std::endl;
		std::cout << "Ammo: " << ammo << "\n" << std::endl;
		ammo--;
		return true;
	}
	else if (random > hitChance)
	{
		std::cout << "Miss!" << std::endl;
		std::cout << "Damage: " << damage << std::endl;
		std::cout << "Range: " << range << std::endl;
		std::cout << "Reload Time: " << reloadTime << std::endl;
		std::cout << "Hit Chance: " << hitChance << std::endl;
		std::cout << "Ammo: " << ammo << "\n" << std::endl;
		ammo--;
		return false;
	}
}