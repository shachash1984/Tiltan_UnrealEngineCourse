#pragma once

#include <format>
#include <string> //Added by Shahar

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
	string ToString() { return std::format("({}, {}, {}, {})", _red, _green, _blue, _alpha); }; // -5 you didnt include string so this doesnt compile, also in order to use std::format you need to set the properties of the project to work with cpp20 (default is cpp14) right click on the "project > properties > C/C++ > C++ Language Standard"
	float GetRed() { return _red; }
	float GetGreen() { return _green; }
	float GetBlue() { return _blue; }
	float GetAlpha() { return _alpha; }
	void Set(float r, float g, float b, float a);
};