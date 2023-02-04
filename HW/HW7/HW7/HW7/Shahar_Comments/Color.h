#pragma once

#include <string>

struct Color
{
private:
	float r, g, b, a;
	
public:
	Color();
	Color(float _r, float _g, float _b, float _a);
	Color(const Color& other);
	~Color();
	
	std::string ToString();
	
	void Set(float _r, float _g, float _b, float _a);
};