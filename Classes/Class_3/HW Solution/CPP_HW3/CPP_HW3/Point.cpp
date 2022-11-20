#pragma once

#include "Point.h"
#include <string>
#include <sstream>

Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
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
