#pragma once
#include "ISpaceVehicle.h"
#include "Weapon.h"
#include <string>
#include <iostream>

class SpaceShuttle : ISpaceVehicle
{
public:
	SpaceShuttle();
	SpaceShuttle(std::string name, WeaponType weaponType);
	SpaceShuttle(const SpaceShuttle& other);
	SpaceShuttle& operator=(const SpaceShuttle& other);
	~SpaceShuttle();

	void Shoot() override;
	void ChangeWeapon(WeaponType weaponType);
	std::string GetName();
	
private:
	std::string _name;
	std::unique_ptr<Weapon> _weapon;
};