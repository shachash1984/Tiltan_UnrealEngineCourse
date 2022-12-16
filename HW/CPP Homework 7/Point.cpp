#include "Point.h"

Point::Point() :x(0),y(0),z(0)
{
}

Point::Point(float _x, float _y, float _z) :x(_x), y(_y) ,z(_z)
{
}

Point::Point(const Point& other) :x(other.x), y(other.y), z(other.z)
{
}

Point::~Point()
{
    //std::cout << " PointDeleted ";
}

std::string Point::ToString()
{
    return "(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")";
}

float Point::GetX()
{
    return x;
}

float Point::GetY()
{
    return y;
}

float Point::GetZ()
{
    return z;
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