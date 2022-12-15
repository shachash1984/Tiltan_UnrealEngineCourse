#include "Vertex.h"

Vertex::Vertex()
{
	position = Point();
	color = Color();
}

Vertex::Vertex(Point _position, Color _color)
{
	position = _position;
	color = _color;
}

Vertex::Vertex(const Vertex& other)
{
	position = other.position;
	color = other.color;
}

Vertex::~Vertex()
{
}

std::string Vertex::ToString()
{
	return std::string("Position: " + position.ToString() + " Color: " + color.ToString());
}

Point Vertex::GetPosition()
{
	return position;
}

void Vertex::SetPosition(const float x, const float y, const float z)
{
	position.SetX(x);
	position.SetY(y);
	position.SetZ(z);
}

Color Vertex::GetColor()
{
	return color;
}

void Vertex::SetColor(float r, float g, float b, float a)
{
	color.Set(r, g, b, a);
}