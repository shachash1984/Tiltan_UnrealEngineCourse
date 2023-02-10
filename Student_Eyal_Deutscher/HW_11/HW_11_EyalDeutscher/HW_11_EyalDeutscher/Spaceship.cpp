#include "Spaceship.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
Spaceship::Spaceship(int worldPos,string name, vector<Weapon*> weapons, unsigned int hp) :Actor(worldPos), IDamageable(hp), _name(name), _weapons(weapons)
{
	cout << "Creating Spaceship: "<<name << endl;
}

Spaceship::Spaceship(const Spaceship& other) :Actor(other._worldPos), IDamageable(other.Hp),_name(other._name), _weapons(other._weapons)
{
	cout << "Creating Spaceship Copy: " << _name << endl;
}

Spaceship::~Spaceship()
{
	int numberOfWeapons = _weapons.size();
	for (size_t i = 0; i < numberOfWeapons; i++)
	{
		delete _weapons[i];
	}
	cout << "Destructing Spaceship:" << _name << endl;
}
Spaceship& Spaceship::operator=(const Spaceship spaceship)
{
	_worldPos = spaceship._worldPos;
	_name = spaceship._name;
	_weapons = spaceship._weapons;
	Hp = spaceship.Hp;
	cout << "Copying values of spacehip with operator: " << _name << endl;
	return *this;
}

void Spaceship::AddWeapon(Weapon& weapon)
{
	_weapons.push_back(& weapon);
}
void Spaceship::TakeDamage(unsigned int damageTaken)
{
}
void Spaceship::FireAllWeapons(unsigned int distanceToTarget)
{
	for (size_t i = 0; i < _weapons.size(); i++)
	{
		_weapons[i]->Shoot(distanceToTarget);
	}
}

void Spaceship::Shoot(unsigned int distanceToTarget, unsigned int weaponIndex)
{
	if (_weapons.size() >= weaponIndex)
	{
		_weapons[weaponIndex]->Shoot(distanceToTarget);
	}
	else
	{
		cout << "Weapon Received Wrong Index" <<endl;
	}

}
