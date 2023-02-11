#pragma once
#include "Actor.h"
#include "Weapon.h"
#include<string>
#include <vector>
#include "IDamageable.h"
//#include "ISpaceVehicle.h" // -2 forgot to remove this from exercise 10

using namespace std;
class Spaceship :public Actor, public IDamageable//, public ISpaceVehicle
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
};

