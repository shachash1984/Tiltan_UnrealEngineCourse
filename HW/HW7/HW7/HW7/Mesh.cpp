#include "Mesh.h"

Mesh::Mesh() : _name("Unkown"), _position(Point())
{
	for (size_t i = 0; i < 30; i++)
	{
		_vertices.push_back(Vertex(Point((float)i, (float)i, (float)i), Color())); // -2 why not use static_cast<float>(i) instead of (float)i?
	}
}

Mesh::Mesh(string name, Point point) : _name(name), _position(point)
{
	for (size_t i = 0; i < 30; i++)
	{
		_vertices.push_back(Vertex(Point((float)i, (float)i, (float)i), Color()));
	}
}

Mesh::Mesh(string name, Point point, vector<Vertex> vertices) : _name(name), _position(point), _vertices(vertices) {}

Mesh::Mesh(const Mesh& other) : _name(other._name), _position(other._position), _vertices(other._vertices) {}

Mesh::~Mesh() {}

string Mesh::ToString()
{
	string allVerticesToString = "";
	allVerticesToString = std::format("Name: {}, \nPosition: {}, \n;", _name, _position.ToString());

	for (size_t i = 0; i < _vertices.size(); i++)
	{
		allVerticesToString += std::format("Vertices: {} \n", _vertices.at(i).ToString());
	}
	
	return allVerticesToString;
}

void Mesh::SetPosition(float x, float y, float z) { _position.SetX(x), _position.SetY(y), _position.SetZ(z); }

Point Mesh::GetVertexWorldPosition(unsigned int index)
{
	Point point;
	point.SetX(_position.GetX() + _vertices.at(index).GetPosition().GetX());
	point.SetY(_position.GetY() + _vertices.at(index).GetPosition().GetY());
	point.SetZ(_position.GetZ() + _vertices.at(index).GetPosition().GetZ());
	return point;
}
