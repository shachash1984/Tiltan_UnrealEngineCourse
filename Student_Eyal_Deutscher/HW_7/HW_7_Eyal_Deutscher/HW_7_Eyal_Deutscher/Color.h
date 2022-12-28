#pragma once
#include <string>
using namespace std;
struct Color
{
private:
	float _r, _g, _b, _a;
	bool IsInRange(float number);
	void TryAssignValue(float input,float *member);
public:
	struct Color(); // * 5 points deducted from Point.h * The word "struct" is not needed here the compiler doesn't know that you are declaring a constructor
	struct Color(float r, float g, float b, float a);
	struct Color(const Color& other);
	~Color();
	string ToString();
	void Set(float r, float g, float b, float a);
	float GetR();
	float GetG();
	float GetB();
	float GetA();
};

