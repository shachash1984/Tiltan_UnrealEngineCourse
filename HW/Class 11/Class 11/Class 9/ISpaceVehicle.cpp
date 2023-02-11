#include "ISpaceVehicle.h"

#include <iostream>

ISpaceVehicle::ISpaceVehicle()
{
	std::cout << "ISpaceVehicle created" << std::endl;
}

ISpaceVehicle::ISpaceVehicle(std::string _name)
	: name(_name)
{
	std::cout << "ISpaceVehicle " << name << " created" << std::endl;
}

ISpaceVehicle::ISpaceVehicle(const ISpaceVehicle& other)
	: name(other.name)
{
	std::cout << "ISpaceVehicle copy created" << std::endl;
}

ISpaceVehicle& ISpaceVehicle::operator=(const ISpaceVehicle& other)
{
	name = other.name;
	std::cout << name << "ISpaceVehicle is now assigned as " << other.name << std::endl;
	return *this;
}

ISpaceVehicle::~ISpaceVehicle()
{
	std::cout << "ISpaceVehicle destroyed" << std::endl;
}
