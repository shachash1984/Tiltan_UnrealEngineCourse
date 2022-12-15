#include "Vertex.h"

Vertex::Vertex()
{
	position = Point();
	/*position.SetX(0);
	position.SetY(0);
	position.SetZ(0);*/

	color = Color();
}

Vertex::Vertex(Point _pos, Color _col)
{
	position = _pos;

	color = _col;
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

Point Vertex::GetPos()
{
	return position;
}

void Vertex::SetPos(const float x, const float y, const float z)
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
