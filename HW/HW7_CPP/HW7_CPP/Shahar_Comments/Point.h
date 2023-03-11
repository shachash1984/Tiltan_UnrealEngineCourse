#pragma once
#include <string>

struct Point
{
public:
	Point();
	Point(float _x, float _y, float _z);
	Point(const Point& other);
	~Point();

	float GetX() const { return x; }
	float GetY() const { return y; }
	float GetZ() const { return z; }

	void SetX(float _x);
	void SetY(float _y);
	void SetZ(float _z);

	std::string ToString() const;

private:
	float x;
	float y;
	float z;
};