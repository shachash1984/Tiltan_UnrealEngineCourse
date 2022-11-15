#pragma once
#include <iostream>
#include <string>
#include <format>
#include "Point.h"

using std::string;

class Pickup
{
	private:
		Point position;
		string const name;
		int value;

	public:
		Pickup();
		Pickup(Point newPos, string newName, int newValue);
		Point GetPosition() { return position; }
		string GetName() { return name; }
		int GetValue() { return value; }
		string ToString();
};