#include "Color.h"
#include <iostream>

Color::Color() : r(0),g(0),b(0),a(0)
{
}

//This is good but you could have done it in the initializer list - see my example below
Color::Color(float _r, float _g, float _b, float _a) : r(_r), g(_g), b(_b),a(_a)
{
    if (r > 1) r = 1;
    if (g > 1) g = 1;
    if (b > 1) b = 1;
    if (a > 1) a = 1;
    if (r < 0) r = 0;
    if (g < 0) g = 0;
    if (b < 0) b = 0;
    if (a < 0) a = 0;
}

//Shahar example

//Color::Color(float _r, float _g, float _b, float _a)
//	: r(_r > 1.0f ? 1.0f : _r < 0.0f ? 0.0f : _r)
//	, g(_g > 1.0f ? 1.0f : _g < 0.0f ? 0.0f : _g)
//	, b(_b > 1.0f ? 1.0f : _b < 0.0f ? 0.0f : _b)
//	, a(_a > 1.0f ? 1.0f : _a < 0.0f ? 0.0f : _a)
//{
//   
//}

Color::Color(const Color& other) : r(other.r), g(other.g), b(other.b), a(other.a)
{
}

Color::~Color()
{
    //std::cout << " ColorDeleted ";
}

std::string Color::ToString()
{
    return "(" + std::to_string(r) + "," + std::to_string(g) + "," + std::to_string(b) + "," + std::to_string(a) + ")";
}

void Color::Set(float _r, float _g, float _b, float _a)
{
    r = _r;
    g = _g;
    b = _b;
    a = _a;

    if (r > 1) r = 1;
    if (g > 1) g = 1;
    if (b > 1) b = 1;
    if (a > 1) a = 1;
    if (r < 0) r = 0;
    if (g < 0) g = 0;
    if (b < 0) b = 0;
    if (a < 0) a = 0;
}