#pragma once

#include <vector>
#include "Point.h"
#include "Color.h"
#include "Vertex.h"

using namespace std;

class Mesh
{
private:
    string _name;
    vector<Vertex> _vertices;
    Point _position;

public:
    Mesh();
    Mesh(string name, Point point);
    Mesh(string name, Point point, vector<Vertex> vertices);
    Mesh(const Mesh& other);
    ~Mesh();
    string ToString();
    Point GetPosition() { return _position; }
    void SetPosition(float x, float y, float z);
    Point GetVertexWorldPosition(unsigned int index);
};