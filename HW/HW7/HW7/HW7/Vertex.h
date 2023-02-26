#pragma once

#include <iostream>
#include <string>
#include <format>
#include "Point.h"
#include "Color.h"

using namespace std;

class Vertex
{
	private:
		Point _position;
		Color _color;

	public:
		Vertex();
		Vertex(Point point, Color color);
		Vertex(const Vertex& other);
		~Vertex();
		string ToString() { return std::format("Position: {}, Color: {}", _position.ToString(), _color.ToString()); };
		Point GetPosition() { return _position; }
		void SetPosition(float x, float y, float z);
		Color GetColor() { return _color; }
		void SetColor(float r, float g, float b, float a);
};