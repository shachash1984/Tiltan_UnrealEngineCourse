#pragma once

#include <string>
#include <iostream>
struct Point
{
public:
    Point();
    Point(float _x, float _y, float _z);
    Point(const Point& other);
    ~Point();

    std::string ToString();

    float GetX();
    float GetY();
    float GetZ();

    void SetX(float _x);
    void SetY(float _y);
    void SetZ(float _z);

private:
    float x, y, z;
};

