#pragma once
#include <string>

struct Point
{
public:
	int x;
	int y;
	int z;

	Point();
	Point(int _x, int _y, int _z);

	std::string ToString()
	{
		return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
	}
};
