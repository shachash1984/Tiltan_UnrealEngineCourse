#pragma once
#include "string"

struct Point
{
public:
	Point();
	Point(float _x, float _y, float _z);
	Point(const Point& other);
	~Point();
	float GetX();
	float GetY();
	float GetZ();
	void SetX(float _x);
	void SetY(float _y);
	void SetZ(float _z);
	std::string ToString();
private:
	float x, y, z;
};