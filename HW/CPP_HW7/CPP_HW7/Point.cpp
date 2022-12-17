#include "Point.h"

using namespace std;

Point::Point()
{
	_x = 0;
	_y = 0;
	_z = 0;
}

Point::Point(float x, float y, float z)
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

Point:: ~Point()
{
	// Print "destroyed Point Bla Bla"
}

string Point:: ToString()
{
	string result = "(" + to_string(_x) + ", " + to_string(_y) + ", " + to_string(_z) + ")";
	return  result;
}

float Point::GetX()
{
	return _x;
}

float Point::GetY()
{
	return _y;
}

float Point::GetZ()
{
	return _z;
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