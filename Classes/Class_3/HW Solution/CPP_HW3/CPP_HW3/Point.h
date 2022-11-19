#pragma once
#include <string>

struct Point
{
public:
	int x, y, z;

	 Point(); // default ctor;
	 std::string ToString();
};