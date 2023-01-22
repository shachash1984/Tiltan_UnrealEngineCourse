#include "Vertex.h"
#include <iostream>

Vertex::Vertex() {
position:(0, 0, 0);
color:(0, 0, 0, 0);
};
Vertex::Vertex(Point _pos, Color _col) {
	position = _pos;
	color = _col;
}
Vertex::Vertex(const Vertex& v1)
{
	position = v1.position;
	color = v1.color;
}

Vertex::~Vertex() {};
string Vertex::ToString() {
	//return "Position: " + position + "\n Color: " + color ;
	return "";
}
Point Vertex::GetPosition() {
	return position;
}
void Vertex::SetPosition(float x, float y, float z) {
	position = *new Point(x, y, z);
}
Color Vertex::GetColor() {
	return color;
}
void Vertex::SetColor(float r, float g, float b, float a) {
	color = *new Color(r, g, b, a);
}