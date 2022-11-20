#pragma once
#include "Pickup.h"

std::string Pickup::ToString()
{
	std::string strToReturn = "Name: " + name + ", position :" + position.ToString() + ", value :" + std::to_string(value);
	return strToReturn;
}