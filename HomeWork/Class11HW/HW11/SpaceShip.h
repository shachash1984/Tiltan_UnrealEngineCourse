#pragma once
#include <string>
#include <vector>
#include "Weapon.h"
#include "ISpaceVehicle.h"

class SpaceShip : public ISpaceVehicle
{
public:
	SpaceShip(std::string _name, std::vector<std::unique_ptr<Weapon>> _weapons);
	SpaceShip(const SpaceShip& other);
	SpaceShip& operator=(const SpaceShip& other);
	~SpaceShip();
	void AddWeapon(std::unique_ptr<Weapon> _weapon);
	void Shoot();// Calls the weapon's Shoot() function
	void FireEverythingWeGot(); //loops through all weapons and calls their shoot function

private:
	std::string name;
	std::vector<std::unique_ptr<Weapon>> weapons;
	Weapon* currentWeapon;
};