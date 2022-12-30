#pragma once
#include "Actor.h"
#include "Weapon.h"
#include <vector>

using namespace std;

class Spaceship : public Actor
{
	private:
		string _name;
		/*vector<Weapon*> _weapons;
		Weapon* _currentWeapon;*/

	public:
		unsigned int HP;
		/*Spaceship(string name, vector<Weapon*> weapons);*/
		~Spaceship();
		/*void AddWeapon(Weapon& _weapon);*/
};

