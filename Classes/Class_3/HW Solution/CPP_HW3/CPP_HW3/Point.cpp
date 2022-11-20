#pragma once

#include "Point.h"
#include <string>
#include <sstream>

// This HW was made with Ron Bandel


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
		/*std::ostringstream oss;
		oss << "(" << x << ", " << y << ", " << z << ")";
		std::string strToReturn = oss.str();

		return strToReturn;*/

		std::string strToReturn = "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
		return strToReturn;

	}
