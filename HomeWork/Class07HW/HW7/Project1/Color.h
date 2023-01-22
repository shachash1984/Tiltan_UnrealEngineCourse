#pragma once
#include <iostream>
#include <vector>

using namespace std;
struct Color {
	float r, g, b, a; //valid values are only between 0.0f and 1.0f
public:
	Color();
	Color(float _r, float _g, float _b, float _a);
	Color(const Color& c1);

	~Color() {};
	string ToString();
	void Set(float _r, float _g, float _b, float _a);
};