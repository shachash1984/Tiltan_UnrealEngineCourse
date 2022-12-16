#include "Color.h"
#include <iostream>

Color::Color() : r(0),g(0),b(0),a(0)
{
}

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