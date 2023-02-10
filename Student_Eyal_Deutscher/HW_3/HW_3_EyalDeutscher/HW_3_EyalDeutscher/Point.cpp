#include "Point.h"
#include <string>
#include <iostream>

Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

Point::Point(int x, int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

std::string Point::ToString()
{
	std::string strToReturn = "[" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + "]";
	return strToReturn;

}
