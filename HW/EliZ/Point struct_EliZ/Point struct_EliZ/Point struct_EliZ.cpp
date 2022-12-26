// Point struct_EliZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>


struct Point {
	float x, y, z;

	// Default constructor
	Point() : x(0), y(0), z(0) {}

	Point(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

	Point(const Point& other) : x(other.x), y(other.y), z(other.z) {}

	~Point() {}

	std::string ToString() const {
		return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
	}

	float GetX() const { return x; }
	float GetY() const { return y; }
	float GetZ() const { return z; }

	void SetX(float _x) { x = _x; }
	void SetY(float _y) { y = _y; }
	void SetZ(float _z) { z = _z; }
	Point operator+(const Point& point) const;
};
struct Color {
	float r, g, b, a;

	// default constructor
	Color() : r(0), g(0), b(0), a(0) {}

	Color(float _r, float _g, float _b, float _a) : r(_r), g(_g), b(_b), a(_a) {}

	Color(const Color& other) : r(other.r), g(other.g), b(other.b), a(other.a) {}

	~Color() {}

	std::string ToString() {
		return "(" + std::to_string(r) + ", " + std::to_string(g) + ", " + std::to_string(b) + ", " + std::to_string(a) + ")";
	}

	void Set(float _r, float _g, float _b, float _a) {
		r = _r;
		g = _g;
		b = _b;
		a = _a;
	}
};
class Vertex {
private:
	Point position;
	Color color;

public:
	Vertex() : position(), color() {}

	Vertex(Point _pos, Color _col) : position(_pos), color(_col) {}

	Vertex(const Vertex& other) : position(other.position), color(other.color) {}

	~Vertex() {}

	std::string ToString() {
		return "Position: " + position.ToString() + " Color: " + color.ToString();
	}

	Point GetPosition() {
		return position;
	}

	void SetPosition(float x, float y, float z) {
		position.x = x;
		position.y = y;
		position.z = z;
	}

	Color GetColor() {
		return color;
	}

	void SetColor(float r, float g, float b, float a) {
		color.r = r;
		color.g = g;
		color.b = b;
		color.a = a;
	}


};
class Mesh {
private:
	std::string name;
	std::vector<Vertex> vertices;
	Point position;

public:
	// default constructor
	Mesh() : name(), position(), vertices() {}

	// constructor with arguments
	Mesh(std::string _name, Point _position, std::vector<Vertex> _vertices) : name(_name), position(_position), vertices(_vertices) {}

	std::string ToString() {
		std::string result = "Name: " + name + "\nPosition: " + position.ToString() + " Vertices: \n";
		for (unsigned int i = 0; i < vertices.size(); i++) {
			result += "Vertex " + std::to_string(i) + ": " + vertices[i].ToString() + "\n";
		}
		return result;
	}

	Point GetPosition() {
		return position;
	}

	void SetPosition(float x, float y, float z) {
		position.x = x;
		position.y = y;
		position.z = z;
	}

	Point GetVertexWorldPosition(unsigned int index) {
		Point vertexPos = vertices[index].GetPosition();
		Point worldPos = position + vertexPos;
		return worldPos;
	}


};
class Player {
private:
	std::string name;
	Mesh* body;
	Mesh* weapon;

public:
	Player() : name(), body(nullptr), weapon(nullptr) {}

	Player(std::string _name, Mesh* _body, Mesh* _weapon) : name(_name), body(_body), weapon(_weapon) {}

	~Player() {
		delete body;
		delete weapon;
	}

	std::string ToString() {
		std::string result = "Player: Name: " + name + "\n";
		if (body != nullptr) {
			result += "Body: " + body->ToString() + "\n";
		}
		else {
			result += "Body: nullptr\n";
		}
		if (weapon != nullptr) {
			result += "Weapon: " + weapon->ToString() + "\n";
		}
		else {
			result += "Weapon: nullptr\n";
		}
		return result;
	}
};

int main() {
#pragma region Point
	Point p1;
	std::cout << p1.ToString() << std::endl;

	Point p2(1.2, -15.0, 0.1);
	std::cout << p2.ToString() << std::endl;

	Point p3(p2);
	std::cout << p3.ToString() << std::endl;

	p3.SetX(3.4);
	std::cout << p3.ToString() << std::endl;
#pragma endregion 
#pragma region Color

	Color c1;

	Color c2(0.5, 0.2, 1.0, 1.0);

	Color c3 = c2;

	Vertex v1;

	Vertex v2(Point(1.2, -15.0, 0.1), Color(0.5, 0.2, 1.0, 1.0));

	Vertex v3 = v2;

	std::cout << "c1: " << c1.ToString() << std::endl;
	std::cout << "c2: " << c2.ToString() << std::endl;
	std::cout << "c3: " << c3.ToString() << std::endl;

	std::cout << "v1: " << v1.ToString() << std::endl;
	std::cout << "v2: " << v2.ToString() << std::endl;
	std::cout << "v3: " << v3.ToString() << std::endl;


#pragma endregion 
#pragma region Mesh


	std::vector<Vertex> vertices = {
	  Vertex(Point(1.2, -15.0, 0.1), Color(0.5, 0.2, 1.0, 1.0)),
	  Vertex(Point(2.4, -30.0, 0.2), Color(0.2, 0.5, 1.0, 1.0)),
	  Vertex(Point(3.6, -45.0, 0.3), Color(1.0, 0.5, 0.2, 1.0))
	};

	Mesh mesh("Gun Of The Gods", Point(10.0, 20.0, 30.0), vertices);

	std::cout << mesh.ToString() << std::endl;
#pragma endregion 
#pragma region Player
	std::vector<Vertex> bodyVertices = {
	Vertex(Point(1.2, -15.0, 0.1), Color(0.5, 0.2, 1.0, 1.0)),
	Vertex(Point(2.4, -30.0, 0.2), Color(0.2, 0.5, 1.0, 1.0)),
	Vertex(Point(3.6, -45.0, 0.3), Color(1.0, 0.5, 0.2, 1.0))
	};
	Mesh* body = new Mesh("BODY_NAME", Point(0.0, 0.0, 0.0), bodyVertices);

	std::vector<Vertex> weaponVertices = {
	  Vertex(Point(0.1, -1.5, 0.01), Color(0.5, 0.2, 1.0, 1.0)),
	  Vertex(Point(0.2, -3.0, 0.02), Color(0.2, 0.5, 1.0, 1.0)),
	  Vertex(Point(0.3, -4.5, 0.03), Color(1.0, 0.5, 0.2, 1.0))
	};
	Mesh* weapon = new Mesh("WEAPON_NAME", Point(0.0, 0.0, 0.0), weaponVertices);

	Player player1("PLAYER_NAME", body, weapon);

	Player* player2 = new Player("PLAYER_NAME", body, weapon);

	std::cout << "player1: " << player1.ToString() << std::endl;
	std::cout << "player2: " << player2->ToString() << std::endl;

	delete player2;
#pragma endregion
	return 0;
}