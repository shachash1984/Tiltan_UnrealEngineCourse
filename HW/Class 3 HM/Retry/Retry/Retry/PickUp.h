#pragma once
#include "Main.cpp"


class PickUp
{
private:

	Point Position;
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
		return "Pickup: name:Health, position:(10, -5, 0), value: 100";
	}

};

