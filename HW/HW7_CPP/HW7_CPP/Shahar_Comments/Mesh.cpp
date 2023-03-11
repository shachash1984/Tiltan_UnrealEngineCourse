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
	Point p = vertices[index]->GetPosition();
	p.SetX(p.GetX() + position.GetX());
	p.SetY(p.GetY() + position.GetY());
	p.SetZ(p.GetZ() + position.GetZ());

	return p;
}

std::string Mesh::ToString() const
{
	return "Name: " + name + " Position: " + position.ToString() + " Vertices: " + std::to_string(vertices.size());
}
