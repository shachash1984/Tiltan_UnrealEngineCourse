#pragma once
#include <string>
#include "Spaceship.h"

using namespace std;

class Weapon
{
	protected:
		string _name;
		unsigned int _damage;
		float _range;
		float _reloadTime;
		unsigned int _ammo;
		unsigned int _critChance;


	public:
		Weapon();
		Weapon(string name, unsigned int damage, float range, float reloadTime, unsigned int ammo, unsigned int critChance);
		virtual ~Weapon();
		virtual bool Shoot(unsigned int distanceToTarget, Spaceship* target);


};

