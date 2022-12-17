#include "Mesh.h"
#include <iostream>
using std::cout;
using std::endl;

Mesh::Mesh()
{
	name = "NewMesh";
	position = Point();
	vertices = std::vector<Vertex>();
	InitVerts(30);

	//cout << "Mesh:{ " + ToString() + " }" << endl;
}

Mesh::Mesh(std::string nameVal, Point pos, std::vector<Vertex> verts)
	: name(name), position(pos), vertices(verts)
{
	//cout << "Mesh:{ " + ToString() + " }" << endl;
}

void Mesh::SetPosition(float xVal, float yVal, float zVal)
{
	position.SetPos(xVal, yVal, zVal);
}

void Mesh::ChangeName(std::string nameVal)
{
	name = nameVal;
}

Point Mesh::GetVertexWorldPosition(unsigned int index)
{
	Point vertWorld;
	vertWorld.SetX(position.GetX() + vertices[index].GetPosition().GetX());
	vertWorld.SetY(position.GetY() + vertices[index].GetPosition().GetY());
	vertWorld.SetZ(position.GetZ() + vertices[index].GetPosition().GetZ());
	return vertWorld;
}

std::string Mesh::PrintAllVertices() const
{
	std::string tempStr = "";
	for (int i = 0; i < vertices.size(); i++)
	{
		tempStr += "Vertex[" + std::to_string(i) + "]:{ " + vertices[i].ToString() + " }\n";
	}
	return tempStr;
}

void Mesh::InitVerts(int amount)
{
	for (size_t i = 0; i < amount; i++)
	{
		Vertex tempVer = Vertex();
		tempVer.SetPosition(i, 0, 0);
		vertices.push_back(tempVer);
	}
}
