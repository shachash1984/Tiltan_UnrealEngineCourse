#pragma once
#include <string>

class SpaceVehicle
{
public:
	SpaceVehicle();
	SpaceVehicle(std::string _name);
	SpaceVehicle(const SpaceVehicle& other);
	SpaceVehicle& operator=(const SpaceVehicle& other);
	virtual ~SpaceVehicle();
	virtual void Shoot() = 0;

protected:
	std::string name;
};
