#include "Point.h"
#include <iostream>
#include <string>
using namespace std;
const float DEFAULT = 0; // -5 it is ok to create a default const variable, but not on the global scope - it should be a class member
Point::Point() //Variables should be initialized in constructor initializer list
{
	std::cout << "Default Constructor Point" << std::endl;
	_x = DEFAULT;
	_y = DEFAULT;
	_z = DEFAULT;
}
Point::Point(float x, float y, float z)
{
	std::cout << "Constructor Point" << std::endl;
	_x = x;
	_y = y;
	_z = z;
}
Point::Point(const Point& other)
{
	std::cout << "Copy Constructor Point" << std::endl;
	_x = other._x;
	_y = other._y;
	_z = other._z;
}
Point::~Point()
{
	std::cout << "Deconstructing Point" << std::endl;
}
string Point:: ToString()
{
	string point = "(" + to_string(_x) + ", " + to_string(_y) + ", " + to_string(_z) + ")"; //you can narrow it down to one line
	return point;
}

float Point:: GetX()
{
	return _x;
}
float Point:: GetY()
{
	return _y;
}
float Point:: GetZ()
{
	return _z;
}
void Point:: SetX(float x)
{
	_x = x;
}
void Point:: SetY(float y)
{
	_y = y;
}
void Point:: SetZ(float z)
{
	_z = z;
}
