#include "Vertex.h"
#include <iostream>
using std::cout;
using std::endl;

Vertex::Vertex()
{
	_point = new Point;
	_color = new Color;

	//cout << "Vertex:{ " + ToString() + " }" << endl;
}

Vertex::Vertex(Point* pos, Color* col) : _point(pos), _color(col)
{
	//cout << "Vertex:{ " + ToString() + " }" << endl;
}

Vertex::Vertex(const Vertex& other)
{
	_point = other._point;
	_color = other._color;

	//cout << "Vertex:{ " + ToString() + " }" << endl;
}

Vertex::~Vertex()
{
	delete _point;
	delete _color;
	cout << "Destructing Vertex" << endl;
}

void Vertex::SetPosition(float xVal, float yVal, float zVal)
{
	_point->SetX(xVal);
	_point->SetY(yVal);
	_point->SetZ(zVal);
}

void Vertex::SetColor(float rVal, float gVal, float bVal, float aVal)
{
	_color->SetColor(rVal, gVal, bVal, aVal);
}
