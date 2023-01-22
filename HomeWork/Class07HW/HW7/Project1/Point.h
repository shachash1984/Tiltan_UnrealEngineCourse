#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Point {
	float x, y, z;
public:
	Point();
	Point(float _x, float _y, float _z);
	Point(const Point& p1);
	~Point() {};
	string ToString()const { return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")"; }
	float GetX();
	float GetY();
	float GetZ();
	void SetX(float _x);
	void SetY(float _y);
	void SetZ(float _z);
};