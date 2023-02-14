#pragma once
#include "Pickup.h"

// This HW was made with Shay Sedaka 

std::string Pickup::ToString()
{
	std::string strToReturn = "Name: " + name + ", position: " + position.ToString() + ", value: " + std::to_string(value);
	return strToReturn;
}

Pickup::Pickup(Point pos, std::string name, int value) { // -5 should be initialized in the ctor initialization list ( : name(name), value(value))
	this->position = pos;
	this->name = name;
	this->value = value;
}