#pragma once
#include <string>
#include <vector>

#include "Weapon.h"

class Spaceship
{

public:
	Spaceship(std::string _name, std::vector<Weapon*> _weapons); // -15 did not implement copy constructor, copy assignment operator, 
	~Spaceship();

	void AddWeapon(Weapon& _weapon);
	void Shoot() const;
	void FireEverythingWeGot() const;

private:
	std::string name;
	std::vector<Weapon*> weapons;
	Weapon* currentWeapon;
};
