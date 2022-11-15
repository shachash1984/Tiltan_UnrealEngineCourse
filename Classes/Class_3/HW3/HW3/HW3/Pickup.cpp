#include <iostream>
#include "Pickup.h"

using std::to_string;

Pickup::Pickup() : name("Health")
{
	position = Point();
	value = 0;
}

Pickup::Pickup(Point newPos, string newName, int newValue) : position(newPos), name(newName), value(newValue)
{
	position = newPos;
	value = newValue;
}

string Pickup::ToString()
{
	return std::format("Pickup: name: {}, position:({}, {}, {}), value: {}", name, position.GetX(), position.GetY(), position.GetZ(), value);
}