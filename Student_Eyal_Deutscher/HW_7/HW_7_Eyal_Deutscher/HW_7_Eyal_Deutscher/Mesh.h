#pragma once
#include "Vertex.h"
#include <string>
#include <vector>
#include "Point.h"
//missing an include here (Vertex.h) instead of Point.h
using namespace std;
class Mesh
{
private:
	string _name;
	vector<Vertex> _vertices;
	Point _position;
public:
	Mesh();
	Mesh(string name, Point position, vector<Vertex> vertices);
	string ToString();
	Point GetPosition();
	void SetPosition(float x, float y, float z);
	Point GetVertexWorldPosition(unsigned int index);
};