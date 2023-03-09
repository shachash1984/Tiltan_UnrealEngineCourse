#pragma once
#include "Weapon.h"
#include "string"
#include "Vector"

class SpaceShip
{
public:
	SpaceShip(std::string _name, std::vector<Weapon*> _weapons);
	~SpaceShip();
	void AddWeapon(Weapon& _weapon);
	void Shoot(); // Calls the weapon's Shoot() function
	void FireEverythingWeGot(); //loops through all weapons and calls their shoot function

private:
	std::string _name;
	std::vector<Weapon*> _weapons;
	Weapon* _currentWeapon;
};

