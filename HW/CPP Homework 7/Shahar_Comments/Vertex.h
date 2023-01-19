#pragma once
#include "Point.h"
#include "Color.h"
class Vertex {
public:
    Vertex();
    Vertex(Point _pos, Color _col);
    Vertex(const Vertex& other);
    ~Vertex();

    std::string ToString();

    Point GetPosition();
    void SetPosition(float x, float y, float z);

    Color GetColor();
    void SetColor(float r, float g, float b, float a);

private:
    Point position;
    Color color;
};

