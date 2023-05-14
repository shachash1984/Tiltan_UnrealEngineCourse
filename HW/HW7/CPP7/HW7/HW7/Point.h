#pragma once

#include <iostream>
#include <string>
#include <format>

using namespace std;

struct Point
{
private:
	float _x, _y, _z;

public:
	Point();
	Point(float x, float y, float z);
	Point(const Point& other);
	~Point();
	string ToString() { return std::format("({}, {}, {})", _x, _y, _z); };
	float GetX() { return _x; }
	float GetY() { return _y; }
	float GetZ() { return _z; }
	void SetX(float x);
	void SetY(float y);
	void SetZ(float z);
};