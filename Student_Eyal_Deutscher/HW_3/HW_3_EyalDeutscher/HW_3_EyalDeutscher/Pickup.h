#pragma once
#include <string>
#include "Point.h"
using namespace std;

class Pickup
{
private:
	Point position;
	int amount;
	string name;

public:
	Pickup();
	Pickup(Point pos, string name, int amount);

	Point GetPosition() { return position; }
	int GetAmount() { return amount; }
	std::string GetName() { return name; }

	std::string ToString();
};

