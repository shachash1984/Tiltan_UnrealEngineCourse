#include <iostream>
#include "Pickup.h"

using std::to_string;

Pickup::Pickup() : name("Health") // Again, value should be initialized here, as for position, it will be initialized anyway because of its default ctor -1 pts
{
	position = Point();
	value = 0;
}

Pickup::Pickup(Point newPos, string newName, int newValue) : position(newPos), name(newName), value(newValue) // excellent!
{
	position = newPos; //Why do the work twice? You already did it in the initializer list. -1 pt
	value = newValue;
}

string Pickup::ToString()
{
	return std::format("Pickup: name: {}, position:({}, {}, {}), value: {}", name, position.GetX(), position.GetY(), position.GetZ(), value); // std::format is C++20 = did you manage to compile?
}