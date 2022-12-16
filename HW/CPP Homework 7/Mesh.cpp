#include "Mesh.h"
#include <iostream>
Mesh::Mesh() : name("") , position(Point())
{
	for (int i = 0; i < 30; i++)
	{
		vertices.push_back(Vertex(Point(i,0,0),Color()));
	}
}

Mesh::Mesh(std::string _name, Point _position, std::vector<Vertex> _vertices) : name(_name) , position(_position)
{
	if (_vertices.size() < 30) {
		for (int i = 0; i < 30; i++)
		{
			vertices.push_back(Vertex(Point(i, 0, 0),Color()));
		}
	}
	else
	{
		vertices = _vertices;
	}
}

std::string Mesh::ToString()
{
	std::string output;
	output += "Name:[" + name + "]\nPosition:[" + position.ToString() +
		"]\nVertices:\n";
	for (int i = 0; i < vertices.size(); i++)
	{
		output += "Vertex ["+ std::to_string(i) +"]:" + vertices[i].ToString() + "\n";
	}
	return output;
}

Point Mesh::GetPosition()
{
	return position;
}

void Mesh::SetPosition(float x, float y, float z)
{
	position.SetX(x);
	position.SetY(y);
	position.SetX(z);
}

Point Mesh::GetVertexWorldPosition(unsigned int index)
{
	Point p;
	p.SetX(vertices[index].GetPosition().GetX() + position.GetX());
	p.SetY(vertices[index].GetPosition().GetY() + position.GetY());
	p.SetZ(vertices[index].GetPosition().GetZ() + position.GetZ());
	return p;
}
