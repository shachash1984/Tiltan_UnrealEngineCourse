#pragma once
#include <string>
#include <vector>
#include "Vertex.h"

class Mesh
{
public:
	Mesh();
	Mesh(std::string nameVal, Point pos, std::vector<Vertex> verts);

	std::string ToString() const { return "Mesh => Name: " + name + ", Position: " + position.ToString() + ", Vertices:\n" + PrintAllVertices(); }

	Point GetPosition()  const { return position; }

	void SetPosition(float xVal, float yVal, float zVal);

	Point GetVertexWorldPosition(unsigned int index);


private:
	std::string name;
	Point position;
	std::vector<Vertex> vertices;

	std::string PrintAllVertices() const;

	void InitVerts(int amount);
};