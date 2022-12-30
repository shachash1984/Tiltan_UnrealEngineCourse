#pragma once
#include <string>
#include "Spaceship.h"
using namespace std;

class Weapon
{
public:
	Weapon();
	Weapon(string name, unsigned int damage, float range, float relodeTime, unsigned int ammo,unsigned int critChance);
	virtual ~Weapon();
	virtual bool Shoot(unsigned int distanceToTarget,Spaceship target);
protected:
	string _name;
	unsigned int _damage;
	float _range;
	float _reloadeTime;
	unsigned int _ammo;
	unsigned int _critChance;
};

