#include "Mesh.h"

Mesh::Mesh()
{
	vertices.assign(30, Vertex());
	position = Point();
}

Mesh::Mesh(const std::string _name, const Point _pos, const std::vector<Vertex> _verts)
{
	name = _name;
	position = _pos;
	vertices = _verts;
}

std::string Mesh::ToString()
{
	std::string allVerts;
	int i = 0;
	for (Vertex ver : vertices)
	{
		allVerts += "Vertex [" + std::to_string(i) + "]: " + ver.ToString() + "\n";
		i++;
	}

	return std::string("Name: " + name + " Position: " + position.ToString() + " Vertices: " + allVerts);
}

Point Mesh::GetPos()
{
	return position;
}

void Mesh::SetPos(const Point other)
{
	position = other;
}

void Mesh::SetPos(const float x, const float y, const float z)
{
	position.SetX(x);
	position.SetY(y);
	position.SetZ(z);
}

Point Mesh::GetVertexWorldPosition(unsigned int index)
{
	Point res;
	res.SetX(position.GetX() + vertices[index].GetPos().GetX());
	res.SetY(position.GetY() + vertices[index].GetPos().GetY());
	res.SetZ(position.GetZ() + vertices[index].GetPos().GetZ());
	return res;
}
