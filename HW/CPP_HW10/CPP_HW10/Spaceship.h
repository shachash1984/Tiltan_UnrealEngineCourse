#pragma once
#include "Actor.h"
#include "Weapon.h"
#include "IDamageable.h"
#include <vector>

using namespace std;

// CPP HW 10 was done with Eyal

class Spaceship : public Actor, public IDamageable
{
	private:
		string _name;
		vector<Weapon*> _weapons;
		Weapon* _currentWeapon;

	public:
		Spaceship(int worldPos, string name, vector<Weapon*> weapons, unsigned int hp);
		Spaceship(const Spaceship& other);
		virtual ~Spaceship();
		Spaceship& operator =(const Spaceship otherSpaceship);
		void AddWeapon(Weapon& _weapon);
		void TakeDamage(unsigned int damageReceived) override;
		void FireAllWeapons(unsigned int distanceToTarget);

};

