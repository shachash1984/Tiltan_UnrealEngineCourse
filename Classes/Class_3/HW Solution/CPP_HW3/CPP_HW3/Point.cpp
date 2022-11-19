#pragma once

#include "Point.h"
#include <string>

Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

	std::string Point::ToString()
	{
		std::string toReturn;
		toReturn = "($x,$y,$z)";

		return toReturn;
	}
