#pragma once
#include "Weapon.h"
#include "string"
#include "Vector"

class Plane
{
public:
	Plane(std::string _name, std::vector<Weapon*> _weapons);
	~Plane();
	void AddWeapon(Weapon& _weapon);
	void Shoot(); // Calls Shoot() function
	void FireStuff(); //loops through all weapons and calls their shoot function

private:
	std::string _name;
	std::vector<Weapon*> _weapons;
	Weapon* _currentWeapon;
};

