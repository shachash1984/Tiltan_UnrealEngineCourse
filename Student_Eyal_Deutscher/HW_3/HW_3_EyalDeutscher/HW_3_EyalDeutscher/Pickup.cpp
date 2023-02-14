#include "Pickup.h"

string Pickup::ToString()
{
	string string = "Name: " + name + ", position: " + position.ToString() + ", value: " + to_string(amount);
	return string;
}

Pickup::Pickup(Point pos, string name, int amount) { //-5 should be initialized within the ctor initialization list
	this->position = pos;
	this->name = name;
	this->amount = amount;
}