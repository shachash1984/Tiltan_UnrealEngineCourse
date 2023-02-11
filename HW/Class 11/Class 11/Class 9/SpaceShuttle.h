#pragma once
#include <memory>
#include <string>

#include "ISpaceVehicle.h"
#include "Laser.h"


class SpaceShuttle : ISpaceVehicle
{
public:
	SpaceShuttle();
	SpaceShuttle(std::string _name);
	SpaceShuttle(const SpaceShuttle& other);
	SpaceShuttle& operator=(const SpaceShuttle& other);
	~SpaceShuttle() override;

	void Shoot() override;


private:
	std::unique_ptr<Weapon> weapon_{ nullptr };
	std::string name;
};
