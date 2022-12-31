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

Spaceship::~Spaceship()
{
	for (auto wep : weapons)
	{
		delete wep;
	}
	delete& weapons;
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
