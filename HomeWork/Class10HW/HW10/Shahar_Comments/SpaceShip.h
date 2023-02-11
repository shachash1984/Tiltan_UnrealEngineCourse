#pragma once
#include <string>
#include <vector>
#include "Weapon.h"

class SpaceShip
{
public:
	SpaceShip(std::string _name, std::vector<Weapon*> _weapons); //-10 no copy constructor and no copy assignment operator overload
	~SpaceShip();
	void AddWeapon(Weapon& _weapon);
	void Shoot();// Calls the weapon's Shoot() function
    void FireEverythingWeGot(); //loops through all weapons and calls their shoot function

private:
	std::string name;
	std::vector<Weapon*> weapons;
	Weapon* currentWeapon;
};