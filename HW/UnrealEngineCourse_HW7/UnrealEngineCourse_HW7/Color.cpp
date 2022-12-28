#include "Color.h"

Color::Color() : _red(1), _green(1), _blue(1), _alpha(1) {}

Color::Color(float red, float green, float blue, float alpha) // -2 Good work on the logic but This can be done in the constructor initialization list - look at my example
	//: _red(red > 1 ? 1 : red < 0 ? 0 : red)
	//, _green(green > 1 ? 1 : green < 0 ? 0 : green)
	//, _blue(blue > 1 ? 1 : blue < 0 ? 0 : blue)
	//, _alpha(alpha > 1 ? 1 : alpha < 0 ? 0 : alpha) 
{
	if (red > 1)
		_red = 1;
	else if (red < 0)
		_red = 0;
	else
		_red = red;

	if (green > 1)
		_green = 1;
	else if (green < 0)
		_green = 0;
	else
		_green = green;

	if (blue > 1)
		_blue = 1;
	else if (blue < 0)
		_blue = 0;
	else
		_blue = blue;

	if (alpha > 1)
		_alpha = 1;
	else if (alpha < 0)
		_alpha = 0;
	else
		_alpha = alpha;
}

Color::Color(const Color& other)
{
	_red = other._red;
	_green = other._green;
	_blue = other._blue;
	_alpha = other._alpha;
}

Color::~Color() {}

void Color::Set(float r, float g, float b, float a)
{
	if (r > 1)
		_red = 1;
	else if (r < 0)
		_red = 0;
	else
		_red = r;

	if (g > 1)
		_green = 1;
	else if (g < 0)
		_green = 0;
	else
		_green = g;

	if (b > 1)
		_blue = 1;
	else if (b < 0)
		_blue = 0;
	else
		_blue = b;

	if (a > 1)
		_alpha = 1;
	else if (a < 0)
		_alpha = 0;
	else
		_alpha = a;
}