#include "Mesh.h"

Mesh::Mesh()
	: name("Default"), vertices(std::vector<Vertex*>()), position(Point(0, 0, 0))
{

}

Mesh::Mesh(std::string _name, std::vector<Vertex*> _vertices, Point _position)
	: name(_name), vertices(_vertices), position(_position)
{

}

Point Mesh::GetVertexWorldPosition(unsigned index) const
{
	Point b = vertices[index]->GetPosition();
	b.SetX(b.GetX() + position.GetX());
	b.SetY(b.GetY() + position.GetY());
	b.SetZ(b.GetZ() + position.GetZ());
	
	return b;
}

std::string Mesh::ToString() const
{
	return "Name: " + name + " Position: " + position.ToString() + " Vertices: " + std::to_string(vertices.size());
}
