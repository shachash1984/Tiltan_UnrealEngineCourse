#pragma once

using namespace std;
#include <iostream>
#include "Point.h"



class PickUp
{
private:

	Point Position ;
	string const Name;
	int Value;

public:

	PickUp();
	PickUp(Point position, string name, int value);
		
	Point GetPoint() { return Position; }


	string GetName() { return Name; }


	int GetValue() { return Value; }

	string ToString()		
	{
		return "Pickup: name:" + Name + ", position:" + Position.ToString() + ", value: " + to_string(Value);
	}

};

