#pragma once
#include <iostream>
#include <string>

using namespace std;
using std::endl;
class Point
{
public:
	int x;
	int y;
	int z;
	Point();
	Point(int x, int y, int z);

	std::string ToString() { return "(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")"; }
};