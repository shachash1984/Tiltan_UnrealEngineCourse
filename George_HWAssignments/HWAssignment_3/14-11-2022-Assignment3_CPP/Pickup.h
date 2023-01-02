#pragma once
#include <string> 
#include "Point.h"


class Pickup
{
public:
	Pickup();

	Pickup(int x, int y, int z, std::string itemName, int val);

	Point getPosition() { return position; }
	std::string getName() { return name; }
	int getValue() { return value; }

	std::string ToString() { return "Pickup:{ Name:" + name + " , Position:" + position.ToString() + " , Value:" + std::to_string(value) + " }"; }

private:
	Point position;
	std::string const name;
	int value;
};