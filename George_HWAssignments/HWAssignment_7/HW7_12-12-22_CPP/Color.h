#pragma once
#include <string>

struct Color
{
public:
	Color();
	Color(float rVal, float gVal, float bVal, float aVal);

	Color(const Color& other);

	~Color();


	std::string ToString() const { return "(" + std::to_string(r) + ", " + std::to_string(g) + ", " + std::to_string(b) + ", " + std::to_string(a) + ")"; }

	float GetR() const { return r; }
	float GetG() const { return g; }
	float GetB() const { return b; }
	float GetA() const { return a; }

	void SetColor(float rVal, float gVal, float bVal, float aVal);


private:
	float r;
	float g;
	float b;
	float a;

	float ValidateColorRange(float val);
};