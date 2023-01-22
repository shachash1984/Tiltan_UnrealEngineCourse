#pragma once
#include <iostream>
#include <string>
#include "Point.h"

using namespace std;
using std::endl;

class PickUp {
private:
	Point position;
	string const name;
	int value;

public:
	PickUp();

	PickUp(Point pos, string name, int value);

	Point GetPosition();
	string GetName();
	int GetValue();

	string ToString();
};