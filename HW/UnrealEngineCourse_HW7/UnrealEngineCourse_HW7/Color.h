#pragma once

#include <format>

using namespace std;

struct Color
{
private:
	float _red, _green, _blue, _alpha;

public:
	Color();
	Color(float red, float green, float blue, float alpha);
	Color(const Color& other);
	~Color();
	string ToString() { return std::format("({}, {}, {}, {})", _red, _green, _blue, _alpha); };
	float GetRed() { return _red; }
	float GetGreen() { return _green; }
	float GetBlue() { return _blue; }
	float GetAlpha() { return _alpha; }
	void Set(float r, float g, float b, float a);
};