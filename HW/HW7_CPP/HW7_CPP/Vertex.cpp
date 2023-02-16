#include "Vertex.h"

Vertex::Vertex()
	: position(Point()), color(Color())
{

}

Vertex::Vertex(const Point& _pos, const Color& _col)
	: position(_pos), color(_col)
{

}

Vertex::Vertex(const Vertex& other)
{
	position = other.position;
	color = other.color;
}


std::string Vertex::ToString() const
{
	return "Position: " + position.ToString() + " Color: " + color.ToString();
}

Point Vertex::GetPosition() const
{
	return position;
}

Color Vertex::GetColor() const
{
	return color;
}

void Vertex::SetPosition(float x, float y, float z)
{
	position.SetX(x);
	position.SetY(y);
	position.SetZ(z);
}

void Vertex::SetColor(float r, float g, float b, float a)
{
	color.Set(r, g, b, a);
}
