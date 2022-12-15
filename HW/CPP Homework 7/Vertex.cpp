#include "Vertex.h"
Vertex::Vertex()
{
    position = Point();
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
   // std::cout << position.GetX() << " ";
}

std::string Vertex::ToString()
{
    return "Position: " + position.ToString() + " Color: " + color.ToString();
}

Point Vertex::GetPosition()
{
    return Point();
}

void Vertex::SetPosition(float x, float y, float z)
{
    position.SetX(x);
    position.SetY(y);
    position.SetZ(z);
}

Color Vertex::GetColor()
{
    return Color();
}

void Vertex::SetColor(float r, float g, float b, float a)
{
    color.Set(r, g, b, a);
}
