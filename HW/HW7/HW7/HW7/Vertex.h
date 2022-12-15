#pragma once

#include "Point.h"
#include "Color.h"

class Vertex
{
private:
	Point position;
	Color color;
	
public:
	Vertex();
	Vertex(Point _position, Color _color);
	Vertex(const Vertex& other);
	~Vertex();
	
	std::string ToString();
	
	Point GetPosition();
	void SetPosition(const float x, const float y, const float z);
	
	Color GetColor();
	void SetColor(float r, float g, float b, float a);
};