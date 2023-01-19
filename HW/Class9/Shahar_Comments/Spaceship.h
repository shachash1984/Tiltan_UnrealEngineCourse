#pragma once
#include <vector>
#include "Weapon.h"
#
class Spaceship
{
public:
	Spaceship(std::string _name, std::vector<Weapon*> _weapons);
	Spaceship(const Spaceship& other);
	Spaceship& operator=(const Spaceship other);
	virtual ~Spaceship();
	void AddWeapon(Weapon& _weapon);
	void SwitchWeapon(Weapon& _weapon);
	void FireWeapon();

private:
	Weapon* currentWeapon;
	std::string name;
	std::vector<Weapon*> weapons;
};

