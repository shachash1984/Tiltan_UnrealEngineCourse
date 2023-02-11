#include "Color.h"
#include <iostream>

Color::Color() {
	r = 0;
	g = 0;
	b = 0;
	a = 0;
};
Color::Color(float _r, float _g, float _b, float _a) {
	r = _r;
	g = _g;
	b = _b;
	a = _a;
}
Color::Color(const Color& c1)
{
	r = c1.r;
	g = c1.g;
	b = c1.b;
	a = c1.a;
}

Color::~Color() {};
void Color::Set(float _r, float _g, float _b, float _a) 
{
	r = _r;
	g = _g;
	b = _b;
	a = _a;
}