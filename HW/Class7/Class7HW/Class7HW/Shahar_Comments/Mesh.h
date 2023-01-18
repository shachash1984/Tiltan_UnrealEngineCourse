#pragma once
#include "string"
#include "Vertex.h"
#include "Point.h"
#include <vector>

class Mesh
{
public:
	std::string name;

	Mesh();
	Mesh(const std::string _name, const Point _pos, const std::vector<Vertex> _verts);

	std::string ToString();
	Point GetPos();
	void SetPos(const Point other);
	void SetPos(const float x, const float y, const float z);
	Point GetVertexWorldPosition(unsigned int index);
	
private:
	std::vector<Vertex> vertices;
	Point position;

};

