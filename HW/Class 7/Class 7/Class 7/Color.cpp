#include "Color.h"

Color::Color()
	: r(0), g(0), b(0), a(0)
{

}

Color::Color(float _r, float _g, float _b, float _a)
	: r(_r), g(_g), b(_b), a(_a)
{

}

Color::Color(const Color& other)
	: r(other.r), g(other.g), b(other.b), a(other.a)
{

}

Color::~Color()
{
	delete this;
}

std::string Color::ToString() const
{
	return "(" + std::to_string(r) + ", " + std::to_string(g) + ", " + std::to_string(b)+ ", " + std::to_string(a) + ")";
}

void Color::Set(float _r, float _g, float _b, float _a)
{
	r = _r;
	g = _g;
	b = _b;
	a = _a;
}
