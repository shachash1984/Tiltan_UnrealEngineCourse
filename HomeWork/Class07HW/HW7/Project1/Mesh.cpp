#include "Mesh.h"
#include <iostream>

Mesh::Mesh() {
	name = "";
	vertices = vector<Vertex>();
position:(0, 0, 0);
};
Mesh::Mesh(string _name, Point _position, vector<Vertex> _vertices) {
	name = _name;
	position = _position;
	vertices = _vertices;
}