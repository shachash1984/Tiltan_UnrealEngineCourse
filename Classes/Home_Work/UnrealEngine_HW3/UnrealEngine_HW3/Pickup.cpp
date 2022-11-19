#include <iostream>
#include "Pickup.h"

using std::to_string;

Pickup::Pickup() : name("Health")
{
	position = Point(); // No need for this line, the default ctor will do it for you
	value = 0; //Again, should be initialized in the ctor's initialization list -1 pt
}

Pickup::Pickup(Point newPos, string newName, int newValue) : position(newPos), name(newName), value(newValue) //This is good! although we have not learned copy ctor yet (for Point)
{
	position = newPos; //Why do it again? -1 pt
	value = newValue;	//Why do it again?
}

string Pickup::ToString()
{
	return std::format("Pickup: name: {}, position:({}, {}, {}), value: {}", name, position.GetX(), position.GetY(), position.GetZ(), value); //We haven't learned this yet, but it's good to see you're trying to use it.
																																				//it is in a more modern version of CPP - did it compile for you?
}