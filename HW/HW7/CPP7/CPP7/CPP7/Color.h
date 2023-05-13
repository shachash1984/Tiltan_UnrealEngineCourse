#pragma once

#include <iostream>
#include <string>
#include <format>

using namespace std;

struct Color
{
private:
	float _r, _g, _b, _a;

public:
	Color();
	Color(float r, float g, float b, float a);
	Color(const Color& other);
	~Color();
	string ToString() { return std::format("({}, {}, {}, {})", _r, _g, _b, _a); }; // nice use of a c++20 feature
	void Set(float r, float g, float b, float a);
};