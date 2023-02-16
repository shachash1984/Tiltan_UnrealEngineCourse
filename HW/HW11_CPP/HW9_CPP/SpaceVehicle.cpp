#include "SpaceVehicle.h"
#include <iostream>

SpaceVehicle::SpaceVehicle()
{
	std::cout << "SpaceVehicle created" << std::endl;
}

SpaceVehicle::SpaceVehicle(std::string _name)
	: name(_name)
{
	std::cout << "SpaceVehicle " << name << " created" << std::endl;
}

SpaceVehicle::SpaceVehicle(const SpaceVehicle& other)
	: name(other.name)
{
	std::cout << "ISpaceVehicle copy created" << std::endl;
}

SpaceVehicle& SpaceVehicle::operator=(const SpaceVehicle& other)
{
	name = other.name;
	std::cout << name << "SpaceVehicle is now assigned as " << other.name << std::endl;
	return *this;
}

SpaceVehicle::~SpaceVehicle()
{
	std::cout << "SpaceVehicle destroyed" << std::endl;
}
