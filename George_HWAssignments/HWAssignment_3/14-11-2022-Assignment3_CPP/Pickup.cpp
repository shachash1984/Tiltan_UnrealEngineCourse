#include "Pickup.h"
#include <iostream>


Pickup::Pickup() : position(Point()), name("Unknown"), value(0)
{

}

Pickup::Pickup(int x, int y, int z, std::string itemName, int val)
	: position(Point(x, y, z)), name(itemName), value(val)
{

}