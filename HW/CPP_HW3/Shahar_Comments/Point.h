#pragma once
#include <string>

// This HW was made with Shay Sedaka 


struct Point
{
public:
	int x, y, z;

	 Point(); // default ctor
	 Point(int x, int y, int z); // we added an EXTRA ctor for testing

	 std::string ToString();
};