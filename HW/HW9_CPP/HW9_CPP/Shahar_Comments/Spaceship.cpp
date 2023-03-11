#include "Spaceship.h"
#include <iostream>
#include "Weapon.h"

Spaceship::Spaceship(std::string _name, std::vector<Weapon*> _weapons)
	: name(_name), weapons(_weapons)
{
}

Spaceship::~Spaceship()
{
	delete currentWeapon; 
	std::cout << "Spaceship " << name << " Destroyed!" << std::endl;
}


void Spaceship::AddWeapon(Weapon& _weapon)
{
	weapons.push_back(&_weapon);
}

void Spaceship::Shoot() const
{
	currentWeapon->Shoot();
}

void Spaceship::FireEverythingWeGot() const
{
	for (Weapon* weapon : weapons)
	{
		weapon->Shoot();
	}
}

