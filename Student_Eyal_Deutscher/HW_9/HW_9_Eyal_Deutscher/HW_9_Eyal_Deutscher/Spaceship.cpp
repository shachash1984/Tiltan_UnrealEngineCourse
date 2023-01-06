#include "Spaceship.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
Spaceship::Spaceship(int worldPos,string name, vector<Weapon*> weapons, unsigned int hp) :Actor(worldPos), _name(name), _weapons(weapons),Hp(hp)
{
	cout << "Creating Spaceship: "<<name << endl;
}

Spaceship::Spaceship(const Spaceship& other) :Actor(other._worldPos), _name(other._name), _weapons(other._weapons), Hp(other.Hp)
{
	cout << "Creating Spaceship Copy: " << _name << endl;
}

Spaceship::~Spaceship()
{
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