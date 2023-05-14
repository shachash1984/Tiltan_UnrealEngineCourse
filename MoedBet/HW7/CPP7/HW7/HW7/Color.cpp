#include "Color.h"
#include <vector>

Color::Color()
{
	_r = 0;
	_g = 0;
	_b = 0;
	_a = 0;
}
Color::Color(float r, float g, float b, float a)
{
	float const min = 0;
	vector<float> rgba;

	rgba.push_back(r);
	rgba.push_back(g);
	rgba.push_back(b);
	rgba.push_back(a);

	for (size_t i = 0; i < rgba.size(); i++)
	{
		if (rgba.at(i) > 1)
		{
			rgba.at(i) = 1;
		}
		else if (rgba.at(i) < 0)
		{
			rgba.at(i) = 0;
		}
		else
		{
			switch (i)
			{
			case 0:
				rgba.at(i) = r;
				break;
			case 1:
				rgba.at(i) = g;
				break;
			case 2:
				rgba.at(i) = b;
				break;
			case 3:
				rgba.at(i) = a;
				break;
			default:
				break;
			}
		}
	}

	_r = rgba.at(0);
	_g = rgba.at(1);
	_b = rgba.at(2);
	_a = rgba.at(3);


}

Color::Color(const Color& other)
{
	_r = other._r;
	_g = other._g;
	_b = other._b;
	_a = other._a;
}

Color::~Color()
{
	
}

void Color::Set(float r, float g, float b, float a)
{
	_r = r;
	_g = g;
	_b = b;
	_a = a;
}
