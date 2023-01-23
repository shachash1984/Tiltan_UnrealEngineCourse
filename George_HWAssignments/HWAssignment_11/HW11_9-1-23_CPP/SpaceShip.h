#pragma once
#include <string>
#include <vector>
#include "Weapon.h"
#include "ISpaceVehicle.h"

class SpaceShip : public ISpaceVehicle
{
public:
	SpaceShip(std::string _name, std::vector<Weapon*> _weapons);
	SpaceShip(const SpaceShip& other);
	SpaceShip& operator=(const SpaceShip& other);
	virtual ~SpaceShip();
	void AddWeapon(Weapon& _weapon);
	void Shoot();
	void FireEverythingWeGot();

	void SetCurrentWeapon(int slot);

	std::string ToString() {
		return "SpaceShip: " + name + " Was Created!\n" + "Equipped Weapon: " + currentWeapon->GetName() + "\n";
	}

private:
	std::string name;
	std::vector<Weapon*> weapons;
	Weapon* currentWeapon;
};
