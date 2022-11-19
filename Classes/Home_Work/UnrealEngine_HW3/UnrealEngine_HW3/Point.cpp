#include <iostream>
#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
	z = 0;
}

//Point::Point() : x(0), y(0), z(0)		// This is how the default ctor should look like
//										// You need to initialize the variables and not assign them. -5 pts
//{
//}