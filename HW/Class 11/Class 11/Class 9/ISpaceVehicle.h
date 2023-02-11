#pragma once
#include <string>

class ISpaceVehicle
{
public:
	ISpaceVehicle();
	ISpaceVehicle(std::string _name);
	ISpaceVehicle(const ISpaceVehicle& other);
	ISpaceVehicle& operator=(const ISpaceVehicle& other);
	virtual ~ISpaceVehicle();
	virtual void Shoot() = 0;

protected:
	std::string name;
};
