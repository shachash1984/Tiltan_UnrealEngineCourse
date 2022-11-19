#include <iostream>
#include <string> 
#include "Point.cpp"


using namespace std;

class Pickup {
private:
	// Data Members
	// --------------------
	Point position;
	string name;
	int value;

public:
	// Constructor
	// --------------------
	Pickup() {
		Point pos;
		position = pos;
		name = "Unknown";
		value = 0;
	}

	Pickup(int x, int y, int z, string itemName, int val) {
		Point pos(x, y, z);
		position = pos;
		name = itemName;
		value = val;
	}

	// Getter Methods
	// --------------------
	Point getPosition() {
		return position;
	}

	string getName() {
		return name;
	}

	int getValue() {
		return value;
	}

	// ToString Method
	// --------------------
	string toString() {
		string s = "Pickup:{ Name:" + name + " , Position:" + position.toString() + " , Value:" + to_string(value) + " }";
		return s;
	}
};