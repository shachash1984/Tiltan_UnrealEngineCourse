#include "Mesh.h"
#include "string"
#include <iostream>
using namespace std;
const string DEFAULT_NAME = "Default Mesh";
Mesh::Mesh()
{
	std::cout << "Default Constructor Mesh" << std::endl;
	_name = DEFAULT_NAME;
	_position = Point();
	_vertices = vector<Vertex>();
	std::cout << "Constructed Default Mesh: " + _name << std::endl;
}
Mesh::Mesh(string name, Point position, vector<Vertex> vertices)
{
	std::cout << "Constructor Mesh" << std::endl;
	_name = name;
	_position = position;
	_vertices = vertices;
	std::cout << "Constructed Mesh: " + _name << std::endl;
}
string Mesh::ToString()
{
	string verticesString;
	for (size_t i = 0; i < _vertices.size(); i++)
	{
		verticesString += _vertices[i].ToString() + "\n";
	}
	string stringToReturn = "Mesh name: " + _name + "\n"
		"Mesh Position:" + _position.ToString() + "\n"
		+ verticesString;
	return stringToReturn;
}
Point Mesh::GetPosition()
{
	return _position;
}
void Mesh::SetPosition(float x, float y ,float z)
{
	_position.SetX(x);
	_position.SetY(y);
	_position.SetZ(z);
}
Point Mesh::GetVertexWorldPosition(unsigned int index)
{
	float xPos = _position.GetX() + _vertices[index].GetPosition().GetX();
	float yPos = _position.GetY() + _vertices[index].GetPosition().GetY();
	float zPos = _position.GetZ() + _vertices[index].GetPosition().GetZ();
	Point point(xPos, yPos, zPos);
	return point;
}