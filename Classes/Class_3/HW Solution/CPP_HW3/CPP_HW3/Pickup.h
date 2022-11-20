#pragma once
#include <string>
#include "Point.h"

// This HW was made with Ron Bandel


class Pickup{

private:
	Point position;
	std::string name; // we removed the const in order to be able to write a ctor for this class
	int value;

public:
	Pickup(); // default ctor
	Pickup(Point pos, std::string name, int value);

	Point GetPosition() { return position; }
	std::string GetName() { return name; }
	int GetValue() { return value; }
	
	std::string ToString();
};


