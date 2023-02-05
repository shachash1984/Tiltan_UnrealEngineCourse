#pragma once
#include <string>

struct Color
{
public:
	Color();
	Color(float _r, float _g, float _b, float _a);
	Color(const Color& other);
	~Color();

	std::string ToString() const;

	void Set(float _r, float _g, float _b, float _a);

private:
	float r;
	float g;
	float b;
	float a;
};
