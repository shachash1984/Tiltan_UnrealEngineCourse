#include <iostream>
#include <string> 

using namespace std;

//All classes need to be separated to header files and cpp files -5

struct Point {
public:
	// Data Members
	// --------------------
	int x;
	int y;
	int z;

	// Constructor
	// --------------------
	/*Point() {
		x = 0;
		y = 0;
		z = 0;
	}*/

	//Should be initialized in ctor initializer list -5
	Point() : x(0), y(0), z(0)
	{
		
	}

	Point(int xVal, int yVal, int zVal) { // Same here -5
		x = xVal;
		y = yVal;
		z = zVal;
	}

	// ToString
	string toString() {
		return "(" + to_string(x) + "," + to_string(y) + "," + to_string(z) + ")";
	}
};