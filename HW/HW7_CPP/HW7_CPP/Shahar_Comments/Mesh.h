#pragma once
#include <vector>

#include "Vertex.h"
#include "Point.h"

class Mesh
{
public:
	Mesh();
	Mesh(std::string _name, std::vector<Vertex*> _vertices, Point _position);

	Point GetPosition() const { return position; }
	void SetPosition();

	Point GetVertexWorldPosition(unsigned int index) const;

	std::string ToString() const;

private:
	std::string name;
	std::vector<Vertex*> vertices;
	Point position;

};