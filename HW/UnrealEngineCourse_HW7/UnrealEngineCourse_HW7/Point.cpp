#include "Point.h"

Point::Point() : _x(0), _y(0), _z(0) {}

Point::Point(float x, float y, float z) //Again this should be initialized in the constructor initialization list
//: _x(x), _y(y), _z(z)
{
	_x = x;
	_y = y;
	_z = z;
}


Point::Point(const Point& other) 
{
	_x = other._x;
	_y = other._y;
	_z = other._z;
}

Point::~Point() {}

void Point::SetX(float x) { _x = x; }

void Point::SetY(float y) { _y = y; }

void Point::SetZ(float z) { _z = z; }