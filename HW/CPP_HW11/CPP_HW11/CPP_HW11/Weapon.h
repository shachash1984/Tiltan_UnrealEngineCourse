#pragma once
#include <string>

using namespace std;

// CPP HW 11, was done with Eyal

class Weapon
{
protected:
	string _name;
	unsigned int _damage;
	float _range;
	float _reloadTime;
	unsigned int _ammo;
	unsigned int _hitChance;


public:
	Weapon();
	Weapon(string name, unsigned int damage, float range, float reloadTime, unsigned int ammo, unsigned int critChance);
	Weapon(const Weapon& other);
	Weapon& operator =(const Weapon other);
	virtual ~Weapon();

	virtual bool Shoot(unsigned int distanceToTarget); 


};

