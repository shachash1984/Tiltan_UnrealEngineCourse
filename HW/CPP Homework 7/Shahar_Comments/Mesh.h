#pragma once
#include <string>
#include <vector>
#include "Point.h"
#include "Color.h"
#include "Vertex.h"

class Mesh
{
public:
	Mesh();
	Mesh(std::string _name, Point _position, std::vector<Vertex> _vertices);

	std::string ToString();

	Point GetPosition();
	void SetPosition(float x, float y, float z);
	Point GetVertexWorldPosition(unsigned int index);

private:
	const std::string name;
	std::vector <Vertex> vertices;
	Point position;
};

