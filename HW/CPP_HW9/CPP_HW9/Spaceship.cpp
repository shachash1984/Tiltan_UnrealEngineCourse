#pragma once // no need to have this in a .cpp file because cpp files are not being included in other files
#include "Spaceship.h"
#include "Weapon.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Spaceship::Spaceship(int worldPos, string name, vector<Weapon*> weapons, unsigned int hp) : Actor(worldPos), IDamageable(hp), _name(name), _weapons(weapons)
{
	cout << "Creating Spaceship: " << _name << endl;
}

Spaceship::Spaceship(const Spaceship& other) : Actor(other._worldPos), IDamageable(other.HP), _name(other._name), _weapons(other._weapons)
{
	cout << "Creating Spaceship Copy of: " << _name << endl;
}

Spaceship::~Spaceship()
{
	cout << "Destroying Spaceship: " << _name << endl;
	/*for (size_t i = 0; i < _weapons.size(); i++)
	{
		delete _weapons[i];
	}*/
}

Spaceship& Spaceship:: operator =(const Spaceship otherSpaceship)
{
	_worldPos = otherSpaceship._worldPos;
	_name = otherSpaceship._name;
	_weapons = otherSpaceship._weapons;
	HP = otherSpaceship.HP;
	cout << "Copying Values of Spaceship: " << _name << endl;
	return *this;
}

void Spaceship::AddWeapon(Weapon& weapon)
{
	_weapons.push_back(&weapon);
}

void Spaceship::TakeDamage(unsigned int damageReceived)
{

}

void Spaceship::FireAllWeapons(unsigned int distanceToTarget)
{
	for (size_t i = 0; i < _weapons.size(); i++)
	{
		_weapons[i]->Shoot(distanceToTarget);
	}
}