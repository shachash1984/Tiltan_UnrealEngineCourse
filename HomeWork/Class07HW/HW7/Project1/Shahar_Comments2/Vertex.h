#pragma once
#include <iostream>
#include <vector>
#include "Point.h"
#include "Color.h"

using namespace std;
class Vertex {
	Point position;
	Color color;
public:
	Vertex();
	Vertex(Point _pos, Color _col);
	Vertex(const Vertex& v1);

	~Vertex() {};
	string ToString()const { return "Position: " + position.ToString() + ", Color: " + color.ToString(); }
	Point GetPosition();
	void SetPosition(float x, float y, float z);
	Color GetColor();
	void SetColor(float r, float g, float b, float a);
};