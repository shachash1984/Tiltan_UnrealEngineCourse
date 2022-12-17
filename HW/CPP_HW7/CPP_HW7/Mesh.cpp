#include "Mesh.h"
#include <string>
#include <vector>
#include "Point.h"

using namespace std;

const string DEFAULT_NAME = "default";

Mesh::Mesh()
{
	_name = DEFAULT_NAME;
	_position = Point();
	_vertices = vector<Vertex>();
}

Mesh::Mesh(string name, Point position, vector<Vertex> vertices)
{
	_name = name;
	_position = position;
	_vertices = vertices;
}

string Mesh:: ToString()
{
	string verticesString = "";

	for (int i = 0; i < _vertices.size(); i++)
	{
		verticesString += "Vertex[" + to_string(i) + "]: " + _vertices[i].ToString() + "\n";
	}

	string stringToReturn = "Mesh Name: " + _name + "\n" +
		"Mesh Position: " + _position.ToString() + "\n" + verticesString;

	return stringToReturn;

}

Point Mesh::GetPosition()
{
	return _position;
}

void Mesh::SetPosition(float x, float y, float z)
{
	_position.SetX(x);
	_position.SetY(y);
	_position.SetZ(z);
}

Point Mesh:: GetVertexWorldPosition(unsigned int index)
{
	float newX = _position.GetX() + _vertices[index].GetPosition().GetX();
	float newY = _position.GetY() + _vertices[index].GetPosition().GetY();
	float newZ = _position.GetZ() + _vertices[index].GetPosition().GetZ();

	Point pointToReturn(newX, newY, newZ);

	return pointToReturn;
	
	
}
