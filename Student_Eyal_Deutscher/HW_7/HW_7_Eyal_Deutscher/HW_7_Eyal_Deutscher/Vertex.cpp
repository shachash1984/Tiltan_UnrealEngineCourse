#include "Vertex.h"
#include <string>
#include <iostream>
using namespace std;

Vertex::Vertex() // need to initialize variables in initialization list
{
	std::cout << "Default Constructor Vertex" << std::endl;
	_position = Point(); //-5 you don't need this line and the next because _position and _color will automatically be initialized 
	_color = Color();	// also when you write it this way it is not a copy constructor, it is an "Assignment Operator". You are creating an anonymous point and then calling the '=' operator (which you didn't implement because we haven't learned it yet)
}
Vertex::Vertex(Point pos, Color col) // need to initialize variables in initialization list
{
	std::cout << "Constructor Vertex" << std::endl;
	_position = pos; // -5 the correct way is _position(col) - that is a copy constructor and not use '='
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