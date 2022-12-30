#pragma once
#include "Actor.h"
#include "Weapon.h"
#include<string>
#include <vector>

using namespace std;

class Spaceship :public Actor
{
private:
	string _name;
	unsigned int _hp;
	vector<Weapon*> _weapons;
	Weapon* _currentWeapon;
public:
	Spaceship(string name, vector<Weapon*> weapons);
	~Spaceship();
	void AddWeapon(Weapon& weapon);
	void TakeDamage(unsigned int damage);

};

