#pragma once
#include <string>
#include "Model3D.h"


class Pickup
{
public:
	Pickup();
	Pickup(std::string name, int value, Model3D* model);
	Pickup(const Pickup& other);
	~Pickup();

	Model3D* GetModel() const { return model; }

private:
	std::string name;
	int value;
	Model3D* model;
};

