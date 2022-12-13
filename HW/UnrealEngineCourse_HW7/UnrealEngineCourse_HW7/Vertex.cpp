#include "Vertex.h"

Vertex::Vertex() : _position(), _color() {}

Vertex::Vertex(Point pos, Color col)
{
	_position = pos;
	_color.Set(col.GetRed(), col.GetGreen(), col.GetBlue(), col.GetAlpha());
}

Vertex::Vertex(const Vertex& other)
{
	_position = other._position;
	_color = other._color;
}

Vertex::~Vertex() {}

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