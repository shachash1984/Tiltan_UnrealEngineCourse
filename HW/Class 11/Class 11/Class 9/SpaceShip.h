#pragma once
#include <string>
#include <vector>

#include "ISpaceVehicle.h"
#include "Weapon.h"

class SpaceShip : public ISpaceVehicle
{
public:
	SpaceShip(std::string _name, std::vector<Weapon*> _weapons);
	~SpaceShip() override;

	SpaceShip(const SpaceShip& other);
	SpaceShip& operator=(const SpaceShip& other);

	void AddWeapon(Weapon& _weapon);
	void Shoot() override;
	void FireEverythingWeGot() const;

private:
	std::string name;
	std::vector<Weapon*> weapons;
	Weapon* currentWeapon{};
};
