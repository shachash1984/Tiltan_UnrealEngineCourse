#include <iostream>
#include "Spaceship.h"

Spaceship::Spaceship(std::string _name, std::vector<Weapon*> _weapons): name(_name), weapons(_weapons)
{
	if (!weapons.empty())
	{
		currentWeapon = weapons[0];
	}
	else
	{
		currentWeapon = nullptr;
	}
}

Spaceship::Spaceship(const Spaceship& other) : name(other.name), weapons(other.weapons)
{
	if (!weapons.empty())
	{
		currentWeapon = weapons[0];
	}
	else
	{
		currentWeapon = nullptr;
	}
}

Spaceship& Spaceship::operator=(const Spaceship other)
{
	if (this != &other)
	{
		name = other.name;
		weapons = other.weapons;
	}
	return* this;
}

Spaceship::~Spaceship()
{
	for (auto wep : weapons)
	{
		delete wep;
	}
	delete& weapons; // -5 weapons is a vector not a pointer to a vector. you are not supposed to delete it
}

void Spaceship::AddWeapon(Weapon& _weapon)
{
	weapons.push_back(&_weapon);
	currentWeapon = &_weapon;
}

void Spaceship::SwitchWeapon(Weapon& _weapon)
{
	if (std::count(weapons.begin(), weapons.end(), &_weapon)) {
		currentWeapon = &_weapon;
	}
	else {
		std::cout << "This weapon is not in the spaceship's arsenal";
	}
}

void Spaceship::FireWeapon()
{
	currentWeapon->Shoot();
}
