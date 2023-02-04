#include <iostream>
#include "Color.h"

Color::Color()
{
	r = 1.0f;
	g = 0.0f;
	b = 1.0f;
	a = 1.0f;
}

Color::Color(float _r, float _g, float _b, float _a)
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
		throw std::invalid_argument("The numbers you entered were not between 0 and 1");
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
		std::cout << "The numbers you entered were not between 0 and 1";
	}
}