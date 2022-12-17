#pragma once
#include <string>
#include "Point.h"
#include "Color.h"

class Vertex
{
public:
	Vertex();
	Vertex(Point* pos, Color* col);

	Vertex(const Vertex& other);

	~Vertex();

	std::string ToString() const { return "Position: " + _point->ToString() + ", Color: " + _color->ToString(); }

	Point* GetPosition()  const { return _point; }
	Color* GetColor()  const { return _color; }

	void SetPosition(float xVal, float yVal, float zVal);
	void SetColor(float rVal, float gVal, float bVal, float aVal);

private:
	Point* _point;
	Color* _color;
};