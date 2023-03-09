#pragma once
#include "Weapon.h"
#include "vector"

class SpaceShip
{
public:
	SpaceShip(string _name, vector<Weapon*> _weapons);
	~SpaceShip();
	void AddWeapon(Weapon& _weapon);
	void Shoot(); // Calls the weapon's Shoot() function
	void FireEverythingWeGot(); //loops through all weapons and calls their shoot function

private:
	std::string name;
	std::vector<Weapon*> weapons;
	Weapon* currentWeapon;
};