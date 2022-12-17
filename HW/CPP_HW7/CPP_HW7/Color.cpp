#include "Color.h"
#include <string>
#include<iostream>

using namespace std;

const float DEFAULT_VALUE = 0;
const float MIN_VALUE = 0;
const float MAX_VALUE = 1;

bool Color:: IsInRange(float number)
{
	if (number > MAX_VALUE || number < MIN_VALUE)
	{
		return false;
	}
	return true;
}

void Color:: TryAssignValue(float input, float *member)
{
	if (IsInRange(input))
	{
		*member = input;

	}
	else
	{
		
		cout << ("Input value is not in range. Replacing with default value") << endl;
		*member = DEFAULT_VALUE;
	}
}

Color::Color()
{
	_r = DEFAULT_VALUE;
	_g = DEFAULT_VALUE;
	_b = DEFAULT_VALUE;
	_a = DEFAULT_VALUE;
}

Color::Color(float r, float g, float b, float a)
{
	Set(r, g, b, a);
}


Color::Color(const Color& other)
{
	TryAssignValue(other._r, &_r);
	TryAssignValue(other._g, &_g);
	TryAssignValue(other._b, &_b);
	TryAssignValue(other._a, &_a);
}

Color:: ~Color()
{
	// print?
}

string Color:: ToString()
{
	string stringToReturn = "(" + to_string(_r) + ", " + to_string(_g) + ", " + to_string(_b) + ", " + to_string(_a) + ")";
	return stringToReturn;
}

float Color::GetR()
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

void Color::Set(float r, float g, float b, float a)
{
	TryAssignValue(r, &_r);
	TryAssignValue(g, &_g);
	TryAssignValue(b, &_b);
	TryAssignValue(a, &_a);
}