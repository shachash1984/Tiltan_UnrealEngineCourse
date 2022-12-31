#pragma once
#include <vector>
#include "Weapon.h"
#
class Spaceship
{
public:
	Spaceship(std::string _name, std::vector<Weapon*> _weapons);
	~Spaceship();
	void AddWeapon(Weapon& _weapon);
	void SwitchWeapon(Weapon& _weapon);
	Weapon* currentWeapon;

private:
	std::string name;
	std::vector<Weapon*> weapons;
};

