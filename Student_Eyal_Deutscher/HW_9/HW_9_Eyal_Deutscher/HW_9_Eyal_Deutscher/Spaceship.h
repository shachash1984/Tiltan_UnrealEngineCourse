#pragma once
#include "Actor.h"
#include "Weapon.h"
#include<string>
#include <vector>
#include "IDamageable.h"

using namespace std;

class Spaceship :public Actor, public IDamageable
{
private:
	string _name;
	vector<Weapon*> _weapons;
	Weapon* _currentWeapon;
public:
	Spaceship(int worldPos,string name, vector<Weapon*> weapons,unsigned int hp);
	void AddWeapon(Weapon& weapon);
	void TakeDamage(unsigned int damageTaken) override;
	void FireAllWeapons(unsigned int distanceToTarget);
};

