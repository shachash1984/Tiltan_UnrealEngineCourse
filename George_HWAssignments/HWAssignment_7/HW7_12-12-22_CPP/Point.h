#pragma once
#include <string>

struct Point
{
public:
	Point();
	Point(float xVal, float yVal, float zVal);

	Point(const Point& other);

	~Point();


	std::string ToString() const { return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")"; }

	float GetX() const { return x; }
	float GetY() const { return y; }
	float GetZ() const { return z; }

	void SetX(float xVal);
	void SetY(float yVal);
	void SetZ(float zVal);
	void SetPos(float xVal, float yVal, float zVal);


private:
	float x;
	float y;
	float z;
};