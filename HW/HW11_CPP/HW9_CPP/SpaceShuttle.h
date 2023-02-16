#pragma once
#include <memory>
#include <string>
#include "SpaceVehicle.h"
#include "Sniper.h"


class SpaceShuttle : SpaceVehicle
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
