#include "Vertex.h"
#include <iostream>

using namespace std;

Vertex::Vertex()
{
	_position = *new Point();
	_color = *new Color();
}

Vertex::Vertex(Point pos, Color col)
{
	_position = pos;
	_color = col;
}

Vertex::Vertex(const Vertex& other)
{

	// Ask Shachar about ctor and dctor spam
	_position = other._position;
	_color = other._color;
}

Vertex:: ~Vertex()
{

}

string Vertex:: ToString()
{
	string stringToReturn = "(Position: " + _position.ToString() + "    Color: " + _color.ToString() + " )";
	return stringToReturn;
}

Point Vertex:: GetPosition()
{
	return _position;
}

void Vertex:: SetPosition(float x, float y, float z)
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
