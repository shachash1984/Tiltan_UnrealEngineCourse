#include "Vertex.h"
#include <string>
#include <iostream>
using namespace std;

Vertex::Vertex()
{
	std::cout << "Default Constructor Vertex" << std::endl;
	_position =  Point();
	_color = Color();
}
Vertex::Vertex(Point pos, Color col)
{
	std::cout << "Constructor Vertex" << std::endl;
	_position = pos;
	_color = col;
}
Vertex::Vertex(const Vertex& other)
{
	std::cout << "Copy Constructor Vertex" << std::endl;
	_position = other._position;
	_color = other._color;
}
Vertex::~Vertex()
{
	std::cout << "Deconstructing Vertex" << std::endl;
}
string Vertex::ToString()
{
	string stringToReturn = "(Position: " + _position.ToString() + "    Color: " + _color.ToString() + " )";
	return stringToReturn;
}
Point Vertex::GetPosition()
{
	return _position;
}

void Vertex::SetPosition(float x, float y, float z)
{
	_position.SetX(x);
	_position.SetY(y);
	_position.SetZ(z);
}

Color Vertex::GetColor()
{
	return _color;
}

void Vertex::SetColor(float r, float g, float b, float a)
{
	_color.Set(r, g, b, a);
}