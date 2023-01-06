#pragma once
#include <string>
#include "IDamageable.h"

using namespace std;

class Weapon
{

public:
	Weapon();
	Weapon(string name, unsigned int damage, float range, float relodTime, unsigned int ammo,unsigned int critChance);
	Weapon(const Weapon& other);
	virtual ~Weapon();
	virtual bool Shoot(unsigned int distanceToTarget,IDamageable target);
	Weapon& operator=(const Weapon weapon);
protected:
	const unsigned int ONE = 1;
	static const string DEFAULT_NAME;
	string _name;
	unsigned int _damage;
	float _range;
	float _reloadTime;
	unsigned int _ammo;
	unsigned int _critChance;
};

