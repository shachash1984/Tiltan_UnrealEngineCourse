#include "Pickup.h"
#include <iostream>


Pickup::Pickup() : position(Point()), name("Unknown"), value(0)
{

}

Pickup::Pickup(int x, int y, int z, std::string itemName, int val)
	: position(Point(x, y, z)), name(itemName), value(val) //-1 you can initialize position just with x y and z no need to pass a point because it calls copy ctor
																// look at my example below
{

}

//Pickup::Pickup(int x, int y, int z, std::string itemName, int val)
//	: position(x, y, z), name(itemName), value(val)
//{
//
//}