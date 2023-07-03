#include "Vertex.h"

Vertex::Vertex()
{
	_position = Point(); // -5 no  need to call the constructor, it will be called automatically
	_color = Color();
}


Vertex::Vertex(Point point, Color color)
{
	_position = point;
	_color = color;
}

Vertex::Vertex(const Vertex& other)
{
	_position = other._position;
	_color = other._color;
}

Vertex::~Vertex()
{
}

void Vertex::SetPosition(float x, float y, float z)
{
	_position.SetX(x);
	_position.SetY(y);
	_position.SetZ(z);
}

void Vertex::SetColor(float r, float g, float b, float a)
{
	_color.Set(r, g, b, a);
}
