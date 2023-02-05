#pragma once
#include "Color.h"
#include "Point.h"

class Vertex
{
public:
	Vertex();
	Vertex(const Point& _pos,const Color& _col);
	Vertex(const Vertex& other);
	~Vertex();

	std::string ToString() const;

	Point GetPosition() const;
	Color GetColor() const;

	void SetPosition(float  x, float y, float z);
	void SetColor(float r, float g, float b, float a);

private:
	Point position;
	Color color;
};

