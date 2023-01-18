#pragma once
#include <vector>
#include "Weapon.h"
#include "ISpaceVehicle.h"

class Spaceship : ISpaceVehicle
{
public:
	Spaceship(std::string _name, std::vector<Weapon*> _weapons);
	Spaceship(const Spaceship& other);
	Spaceship& operator=(const Spaceship other);
	virtual ~Spaceship();
	void AddWeapon(Weapon& _weapon);
	void SwitchWeapon(Weapon& _weapon);
	void Shoot() override;

private:
	Weapon* currentWeapon;
	std::string name;
	std::vector<Weapon*> weapons;
};

