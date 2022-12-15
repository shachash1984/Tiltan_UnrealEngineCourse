#pragma once

#include <vector>
#include <string>
#include "Vertex.h"
#include "Point.h"

class Mesh
{
private:
    std::vector<Vertex> vertices;
    Point position;
    
public:
    std::string name;

    Mesh();
    Mesh(const std::string _name, const Point _position, const std::vector<Vertex> _verts);

    std::string ToString();
    Point GetPos();
    void SetPos(const Point other);
    void SetPos(const float x, const float y, const float z);
    Point GetVertexWorldPosition(unsigned int index);
};