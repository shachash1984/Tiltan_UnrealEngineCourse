#pragma once
#include<string>

using namespace std;
struct Color
{
private:
	float _r, _g, _b, _a;
	bool IsInRange(float number);
	void TryAssignValue(float input, float *member);
public:
	struct Color();
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

