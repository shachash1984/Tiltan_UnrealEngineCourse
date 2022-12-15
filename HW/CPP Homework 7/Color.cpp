#include "Color.h"
#include <iostream>

Color::Color()
{
    r = 0; g = 0; b = 0; a = 0;
}

Color::Color(float _r, float _g, float _b, float _a)
{
    if (_r > 1) _r = 1;
    if (_g > 1) _g = 1;
    if (_b > 1) _b = 1;
    if (_a > 1) _a = 1;
    if (_r < 0) _r = 0;
    if (_g < 0) _g = 0;
    if (_b < 0) _b = 0;
    if (_a < 0) _a = 0;
    r = _r;
    g = _g;
    b = _b;
    a = _a;
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
    //std::cout << " ColorDeleted ";
}

std::string Color::ToString()
{
    return "(" + std::to_string(r) + "," + std::to_string(g) + "," + std::to_string(b) + "," + std::to_string(a) + ")";
}

void Color::Set(float _r, float _g, float _b, float _a)
{
    if (_r > 1) _r = 1;
    if (_g > 1) _g = 1;
    if (_b > 1) _b = 1;
    if (_a > 1) _a = 1;
    if (_r < 0) _r = 0;
    if (_g < 0) _g = 0;
    if (_b < 0) _b = 0;
    if (_a < 0) _a = 0;
    r = _r;
    g = _g;
    b = _b;
    a = _a;
}