#include "Color.h"
#include <string>
#include <iostream>
using namespace std;
const float DEFAULT = 0;
const float MIN = 0;
const float MAX = 1;

Color::Color()
{
	std::cout << "Default Constructor Color" << std::endl;
	_r = DEFAULT;
	_g = DEFAULT;
	_b = DEFAULT;
	_a = DEFAULT;
}
Color::Color(float r, float g, float b, float a)
{
	std::cout << "Constructor Color" << std::endl;
	Set(r, g, b, a);
}
Color::Color(const Color &other)
{
	std::cout << "Copy Constructor Color" << std::endl;

	TryAssignValue(other._r, &_r);
	TryAssignValue(other._g, &_g);
	TryAssignValue(other._b, &_b);
	TryAssignValue(other._a, &_a);
}
Color::~Color()
{
	std::cout << "Deconstructing Color" << std::endl;
}
bool Color::IsInRange(float number)
{
	if (number > MAX || number < MIN)
	{
		return false;
	}
	return true;
}
void Color::TryAssignValue(float input, float *member)
{
	if (IsInRange(input))
	{
		*member = input;
	}
	else
	{
		cout << ("Input value is not in range, replacing with default value")<< endl;
		*member = DEFAULT;
	}
}
string Color::ToString()
{
	string stringToReturn = "(" + to_string(_r) + ", " + to_string(_g) + ", " + to_string(_b) + ", " + to_string(_a) + ")";
	return stringToReturn;
}

void Color::Set(float r, float g, float b, float a)
{
	TryAssignValue(r, &_r);
	TryAssignValue(g, &_g);
	TryAssignValue(b, &_b);
	TryAssignValue(a, &_a);
}
float Color:: GetR()
{
	return _r;
}
float Color::GetG()
{
	return _g;
}
float Color::GetB()
{
	return _b;
}
float Color::GetA()
{
	return _a;
}