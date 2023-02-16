#include "SpaceShuttle.h"
#include <iostream>
#include "Sniper.h"

SpaceShuttle::SpaceShuttle() : SpaceVehicle(), name("SpaceShuttle")
{
	weapon_ = std::make_unique<Sniper>();
	std::cout << "SpaceShuttle created" << std::endl;
}

SpaceShuttle::SpaceShuttle(std::string _name) : SpaceVehicle(), name(_name)
{
	weapon_ = std::make_unique<Sniper>();
	std::cout << "SpaceShuttle created" << ", ID: " << _name << std::endl;
}

SpaceShuttle::SpaceShuttle(const SpaceShuttle& other) : SpaceVehicle(), name(other.name)
{
	weapon_ = std::make_unique<Sniper>();
	std::cout << "SpaceShuttle Copy Constructed!" << std::endl;
}

SpaceShuttle& SpaceShuttle::operator=(const SpaceShuttle& other)
{
	name = other.name;
	weapon_ = std::make_unique<Sniper>();
	std::cout << "SpaceShuttle: " << name << " is now Assigned and has a new name: " << other.name << std::endl;
	return *this;
}

SpaceShuttle::~SpaceShuttle()
{
	std::cout << "SpaceShuttle destroyed" << std::endl;
}

void SpaceShuttle::Shoot()
{
	std::cout << "SpaceShuttle Shoot!" << std::endl;
	weapon_->Shoot();
}
