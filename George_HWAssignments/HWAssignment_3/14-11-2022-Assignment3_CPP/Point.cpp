#include <iostream>
#include <string> 

using namespace std;

struct Point {
public:
	// Data Members
	// --------------------
	int x;
	int y;
	int z;

	// Constructor
	// --------------------
	Point() {
		x = 0;
		y = 0;
		z = 0;
	}

	Point(int xVal, int yVal, int zVal) {
		x = xVal;
		y = yVal;
		z = zVal;
	}

	// ToString
	string toString() {
		return "(" + to_string(x) + "," + to_string(y) + "," + to_string(z) + ")";
	}
};