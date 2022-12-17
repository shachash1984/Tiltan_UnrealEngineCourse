#pragma once
#include <string>

using namespace std;

struct Point
{
private:
	float _x, _y, _z;

public:
	struct Point();
	struct Point(float x, float y, float z);
	struct Point(const Point& other);
	~Point();
	string ToString();
	float GetX();
	float GetY();
	float GetZ();
	void SetX(float x);
	void SetY(float y);
	void SetZ(float z);
};