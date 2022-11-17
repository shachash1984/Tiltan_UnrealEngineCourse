// HomeWork3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Point
{
	int x;
	int y;
	int z;
	Point()
	{
		x = 0;
		y = 0;
		z = 0;
	}
};

class Pickup
{
	Point position;
	string const name;
	int value;

public:
	Pickup() : name("default")
	{
		position.x = 0;
		position.y = 0;
		position.z = 0;
		value = 0;
	}
	
	Pickup(Point pos, string n, int v) : name(n)
	{
		position.x = pos.x;
		position.y = pos.y;
		position.z = pos.z;
		value = v;
	}
	
	Point getPosition()
	{
		return position;
	}
	
	string getName()
	{
		return name;
	}
	
	int getValue()
	{
		return value;
	}
	
	void toString()
	{
		cout << "Name: " << name << endl;
		cout << "Position:( " << position.x << ", " << position.y << ", " << position.z << " )" << endl;
		cout << "Value: " << value << endl;
	}
};


int main()
{
	Point pos;
	pos.x = 1;
	pos.y = 2;
	pos.z = 3;
	Pickup p1(pos, "p1", 10);
	p1.toString();
}