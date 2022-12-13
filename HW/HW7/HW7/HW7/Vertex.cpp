#include "Vertex.h"

Vertex::Vertex() : _position(Point()), _color(Color()) {}

Vertex::Vertex(Point point, Color color) : _position(point), _color(color) {}

Vertex::Vertex(const Vertex& other) : _position(other._position), _color(other._color) {}

Vertex::~Vertex() {}

void Vertex::SetPosition(float x, float y, float z) { _position.SetX(x), _position.SetX(y) , _position.SetX(z); }

void Vertex::SetColor(float r, float g, float b, float a) { _color.Set(r, g, b, a); }
