#include "Pickup.h"

string Pickup::ToString()
{
	string string = "Name: " + name + ", position: " + position.ToString() + ", value: " + to_string(amount);
	return string;
}

Pickup::Pickup(Point pos, string name, int amount) {
	this->position = pos;
	this->name = name;
	this->amount = amount;
}