#include "Color.h"
//#include "stdexcept"
#include "iostream"
#include "string"

Color::Color()
{
	r = 1;
	g = 0;
	b = 1;
	a = 1;
}

Color::Color(float _r, float _g, float _b, float _a) // -5 need to be initialized in the ctor initialization list - see my example 
	: r(_r > 1.0f ? 1.0f : _r < 0.0f ? 0.0f : _r) // this is what i meant
	, g(_g > 1.0f ? 1.0f : _g < 0.0f ? 0.0f : _g)
	, b(_b > 1.0f ? 1.0f : _b < 0.0f ? 0.0f : _b)
	, a(_a > 1.0f ? 1.0f : _a < 0.0f ? 0.0f : _a)
{
	if (0 < _r < 1 && 0 < _g < 1 && 0 < _b < 1 && 0 < _a < 1)
	{
		r = _r;
		g = _g;
		b = _b;
		a = _a;
	}
	else
	{
		throw std::invalid_argument("Color creating failed! One of the RGBA values isn't valid (Between 0 and 1)!"); // we havent learned about exceptions... need to use if statements
	}
}

Color::Color(const Color& other)
{
	r = other.r;
	g = other.g;
	b = other.b;
	a = other.a;
}

Color::~Color()
{
}

std::string Color::ToString()
{
	return std::string("r: " + std::to_string(r) + " g: " + std::to_string(g) + " b: " + std::to_string(b) + " a: " + std::to_string(a));
}

void Color::Set(float _r, float _g, float _b, float _a)
{
	if (0 < _r < 1 && 0 < _g < 1 && 0 < _b < 1 && 0 < _a < 1)
	{
		r = _r;
		g = _g;
		b = _b;
		a = _a;
	}
	else
	{
		std::cout << "Color changing failed! One of the RGBA values isn't valid (Between 0 and 1)!";
	}
}
