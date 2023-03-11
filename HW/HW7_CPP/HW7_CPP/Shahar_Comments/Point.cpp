#include "Point.h"

Point::Point()
	: x(0), y(0), z(0)
{

}

Point::Point(float _x, float _y, float _z)
	: x(_x), y(_y), z(_z)
{

}

Point::Point(const Point& other)
	: x(other.x), y(other.y), z(other.z)
{

}

Point::~Point()
{

}

void Point::SetX(float _x)
{
	x = _x;
}

void Point::SetY(float _y)
{
	y = _y;
}

void Point::SetZ(float _z)
{
	z = _z;
}

std::string Point::ToString() const
{
	return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
}
