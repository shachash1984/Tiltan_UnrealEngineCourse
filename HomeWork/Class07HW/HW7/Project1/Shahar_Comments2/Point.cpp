#include "Point.h"
#include <iostream>

Point::Point() 
{
	x = 0;
	y = 0;
	z = 0;
}
Point::Point(float _x, float _y, float _z) {
	x = _x;
	y = _y;
	z = _z;
}
Point::Point(const Point& p1)
{
	x = p1.x;
	y = p1.y;
	z = p1.z;
}

Point::~Point() {};
float Point::GetX() {
	return x;
}
float Point::GetY() {
	return y;
}
float Point::GetZ() {
	return z;
}
void Point::SetX(float _x) {
	x = _x;
}
void Point::SetY(float _y) {
	y = _y;
}
void Point::SetZ(float _z) {
	z = _z;
}