#pragma once

#include <string>
#include "Weapon.h"
#include "ISpaceVehicle.h"

class SpaceShuttle : public ISpaceVehicle
{
public:
	SpaceShuttle(std::string _name, std::unique_ptr<Weapon> _weapon);
	SpaceShuttle(const SpaceShuttle& other);
	SpaceShuttle& operator= (const SpaceShuttle& other);
	~SpaceShuttle();
	void ReplaceWeapon(std::unique_ptr<Weapon> _weapon);
	void Shoot() override;

private:
	std::string name;
	std::unique_ptr<Weapon> weapon;
};

