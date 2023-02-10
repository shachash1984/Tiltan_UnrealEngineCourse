#include "Spaceship.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
Spaceship::Spaceship(int worldPos,string name, vector<Weapon*> weapons, unsigned int hp) :Actor(worldPos), IDamageable(hp), _name(name), _weapons(weapons)
{
	cout << "Creating Spaceship: "<<name << endl;
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