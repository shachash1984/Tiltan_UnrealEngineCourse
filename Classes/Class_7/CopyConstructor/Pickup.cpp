#include "Pickup.h"

Pickup::Pickup()
	: name("Default"), value(0), model(nullptr)
{

}

Pickup::Pickup(std::string name, int value, Model3D* model)
	: name(name), value(value), model(model)
{
}

Pickup::Pickup(const Pickup& other)
{
	name = other.name;
	value = other.value;
	std::string otherName = other.model->GetName();
	model = new Model3D(otherName);
}

Pickup::~Pickup()
{
	delete model;
}
