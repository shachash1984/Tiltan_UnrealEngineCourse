#include "Color.h"
#include <iostream>
using std::cout;
using std::endl;

Color::Color() : r(1), g(1), b(1), a(1)
{
	//cout << "Color: " << ToString() << endl;
}

Color::Color(float rVal, float gVal, float bVal, float aVal)
{
	r = ValidateColorRange(rVal);
	g = ValidateColorRange(gVal);
	b = ValidateColorRange(bVal);
	a = ValidateColorRange(aVal);

	//cout << "Color: " << ToString() << endl;
}

Color::Color(const Color& other)
{
	r = other.r;
	g = other.g;
	b = other.b;
	a = other.a;

	//cout << "Color: " << ToString() << endl;
}

Color::~Color()
{
	//cout << "Destructing Color" << endl;
}

void Color::SetColor(float rVal, float gVal, float bVal, float aVal)
{
	r = ValidateColorRange(rVal);
	g = ValidateColorRange(gVal);
	b = ValidateColorRange(bVal);
	a = ValidateColorRange(aVal);
}

float Color::ValidateColorRange(float val)
{
	float tempVal;
	if (val > 1)
	{
		tempVal = 1;
	}
	else if (val < 0) 
	{
		tempVal = 0;
	}
	else
	{
		tempVal = val;
	}
	return tempVal;
}
