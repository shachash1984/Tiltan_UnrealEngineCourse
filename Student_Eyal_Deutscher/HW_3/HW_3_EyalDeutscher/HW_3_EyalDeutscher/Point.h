#pragma once
#include <string>

class Point
{
public:
	int x, y, z;

	Point();
	Point(int x, int y, int z);

	std::string ToString();
};

