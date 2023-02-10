#include "Spaceship.h"
#include "Weapon.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

// CPP HW 9 was done with Eyal

Spaceship::Spaceship(int worldPos, string name, vector<Weapon*> weapons, unsigned int hp) : Actor(worldPos), IDamageable(hp), _name(name), _weapons(weapons)
{
	cout << "Creating Spaceship: " << _name << endl;
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
	cout << "\n" + _name + " is shooting all weapons!" << endl;
	for (size_t i = 0; i < _weapons.size(); i++)
	{
		_weapons[i]->Shoot(distanceToTarget);
	}
	cout << endl;
}