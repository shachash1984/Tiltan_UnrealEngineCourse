#pragma once
#include "Actor.h"
#include "Weapon.h"
#include<string>
#include <vector>
#include "IDamageable.h"
#include "ISpaceVehicle.h"

using namespace std;

class Spaceship :public Actor, IDamageable, ISpaceVehicle
{
private:
	string _name;
	vector<Weapon*> _weapons;
	Weapon* _currentWeapon;
public:
	Spaceship(int worldPos,string name, vector<Weapon*> weapons,unsigned int hp);
	Spaceship(const Spaceship& other);
	virtual ~Spaceship();
	Spaceship& operator=(const Spaceship spaceship);
	void AddWeapon(Weapon& weapon);
	void TakeDamage(unsigned int damageTaken) override;
	void FireAllWeapons(unsigned int distanceToTarget);
	void Shoot(unsigned int distanceToTarget, unsigned int WeaponIndex) override;
};

