#include "Point.h"

Point::Point() : _x(0), _y(0), _z(0)
{

}

Point::Point(float x, float y, float z) : _x(x), _y(y), _z(z)
{

}

Point::Point(const Point& other) : _x(other._x), _y(other._y), _z(other._z)
{

}

Point::~Point()
{

}

std::string Point::ToString()
{
	return "(" + std::to_string(_x) + ", " + std::to_string(_y) + ", " + std::to_string(_z) + ")";
}

void Point::SetX(float x)
{
	_x = x;
}

void Point::SetY(float y)
{
	_y = y;
}

void Point::SetZ(float z)
{
	_z = z;
}
