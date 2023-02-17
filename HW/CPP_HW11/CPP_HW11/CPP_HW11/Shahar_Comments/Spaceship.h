#pragma once
#include "Actor.h"
#include "Weapon.h"
#include "IDamageable.h"
#include "ISpaceVehicle.h"
#include <vector>

using namespace std;

// CPP HW 11 was done with Eyal

class Spaceship : public Actor, public IDamageable, public ISpaceVehicle
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
		void Shoot(unsigned int distanceToTarget, int weaponNumber = 0) override;

};

