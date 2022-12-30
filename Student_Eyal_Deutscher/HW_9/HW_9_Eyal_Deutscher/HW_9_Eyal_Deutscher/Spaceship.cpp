#include "Spaceship.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
Spaceship::Spaceship(string name, vector<Weapon*> weapons)
{
	cout << "Creating Spaceship:"<<name << endl;
	_name = name;
	_weapons = weapons;
}
Spaceship::~Spaceship()
{
	cout << "Destructing Spaceship:" << _name << endl;
}
void Spaceship::AddWeapon(Weapon& weapon)
{
	_weapons.push_back(& weapon);
}
void Spaceship::TakeDamage(unsigned int damage)
{
	
}