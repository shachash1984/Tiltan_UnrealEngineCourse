#pragma once
#include "Pickup.h"

// This HW was made with Ron Bandel

std::string Pickup::ToString()
{
	std::string strToReturn = "Name: " + name + ", position: " + position.ToString() + ", value: " + std::to_string(value);
	return strToReturn;
}

Pickup::Pickup(Point pos, std::string name, int value) {
	this->position = pos;
	this->name = name;
	this->value = value;
}