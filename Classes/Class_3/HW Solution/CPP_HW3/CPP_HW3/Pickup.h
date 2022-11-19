#pragma once
#include <string>
#include "Point.h"
class Pickup{

private:
	Point position;
	std::string const name;
	int value;

public:
	Pickup(); // default ctor
	Pickup(Point pos, std::string name, int value);

	Point GetPosition() { return position; }
	std::string GetName() { return name; }
	int GetValue() { return value; }
	
	std::string ToString();
};


