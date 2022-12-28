#pragma once
#include <string>
using namespace std;

struct Point
{
private:
	float _x, _y, _z;
public:
	struct Point(); // -5 The word "struct" is not needed here the compiler doesn't know that you are declaring a constructor
	struct Point(float x, float y, float z); // Same here
	struct Point(const Point& other); // Same here
	~Point();
	string ToString();
	float GetX();
	float GetY();
	float GetZ();
	void SetX(float x);
	void SetY(float y);
	void SetZ(float z);
};

