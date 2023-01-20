#pragma once
#include <string>
#include <vector>
#include "Weapon.h"

class SpaceShip
{
public:
	SpaceShip(std::string _name, std::vector<Weapon*> _weapons);
	~SpaceShip();
	void AddWeapon(Weapon& _weapon);
	void Shoot();
	void FireEverythingWeGot();

	void SetCurrentWeapon(int slot);

private:
	std::string name;
	std::vector<Weapon*> weapons;
	Weapon* currentWeapon;
};
