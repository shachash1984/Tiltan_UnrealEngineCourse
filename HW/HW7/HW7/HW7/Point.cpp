#include "Point.h"

//using namespace std;

Point::Point() : _x(0), _y(0), _z(0)
{

}

Point::Point(float x, float y, float z) : _x(x), _y(y), _z(z)
{

}

Point::Point(const Point& other)
{
	_x = other._x;
	_y = other._y;
	_z = other._z;
}

Point::~Point()
{

}

//string Point::ToString()
//{
//	return std::format("({}, {}, {})", _x, _y, _z);
//}

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
