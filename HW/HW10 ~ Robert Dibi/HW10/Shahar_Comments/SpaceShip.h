#pragma once
#include <string>
#include <vector>
#include "Weapon.h"

class SpaceShip // -20 did not add copy constructor and copy assignment operator,
{
public:
	SpaceShip(std::string _name, std::vector<Weapon*> _weapons);
	~SpaceShip();
	void AddWeapon(Weapon& _weapon);
	void Shoot();// Calls the weapon's Shoot() function
	void FireEverythingWeGot(); //loops through all weapons and calls their shoot function

private:
	std::string name;
	std::vector<Weapon*> weapons;
	Weapon* currentWeapon;
};
