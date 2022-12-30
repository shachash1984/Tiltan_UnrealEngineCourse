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

		//This is the line that is causing the error
		//Spaceship includes Weapon.h and Weapon includes Spaceship.h
		//this is a circular dependency.
		//Spaceship needs to know weapon but Weapon DOES NOT need to know Spaceship
		//virtual bool Shoot(unsigned int distanceToTarget, Spaceship* target);

		virtual bool Shoot(); //This the correct signature


};

