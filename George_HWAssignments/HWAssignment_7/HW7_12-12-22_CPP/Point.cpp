#include "Point.h"
#include <iostream>
using std::cout;
using std::endl;

Point::Point() : x(0), y(0), z(0)
{
	//cout << "Point: " << ToString() << endl;
}

Point::Point(float xVal, float yVal, float zVal)
	: x(xVal), y(yVal), z(zVal)
{
	//cout << "Point: " << ToString() << endl;
}

Point::Point(const Point& other)
{
	x = other.x;
	y = other.y;
	z = other.z;

	//cout << "Point: " << ToString() << endl;
}

Point::~Point()
{
	cout << "Destructing Point" << endl;
}

void Point::SetX(float xVal)
{
	x = xVal;
}

void Point::SetY(float yVal)
{
	y = yVal;
}

void Point::SetZ(float zVal)
{
	z = zVal;
}
