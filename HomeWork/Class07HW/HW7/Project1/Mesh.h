#pragma once
#include <iostream>
#include <vector>
#include "Point.h"
#include "Vertex.h"

using namespace std;
class Mesh {
	string name;
	vector<Vertex> vertices;
	Point position;
public:
	Mesh();
	Mesh(string _name, Point _position, vector<Vertex> _vertices);

	string ToString()const { return "Name: " + name + ", Position: " + position.ToString() + ", Vertices:\n" + PrintAllVertices(); }
private:
	string PrintAllVertices() const;
};