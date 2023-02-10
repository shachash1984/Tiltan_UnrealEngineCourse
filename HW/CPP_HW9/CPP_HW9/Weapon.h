#pragma once
#include <string>

using namespace std;

// CPP HW 9 was done with Eyal

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

		//This is the line that is causing the error
		//Spaceship includes Weapon.h and Weapon includes Spaceship.h
		//this is a circular dependency.
		//Spaceship needs to know weapon but Weapon DOES NOT need to know Spaceship
		//virtual bool Shoot(unsigned int distanceToTarget, IDamageable* target);

		virtual bool Shoot(unsigned int distanceToTarget); //This the correct signature


};

