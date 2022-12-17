#pragma once
#include "Point.h"
#include "Color.h"

using namespace std;

class Vertex
{
private:
	Point _position;
	Color _color;
public:
	Vertex();
	Vertex(Point pos, Color col);
	Vertex(const Vertex& other);
	~Vertex();
	string ToString();
	Point GetPosition();
	void SetPosition(float x, float y, float z);
	Color GetColor();
	void SetColor(float r, float g, float b, float a);
};

