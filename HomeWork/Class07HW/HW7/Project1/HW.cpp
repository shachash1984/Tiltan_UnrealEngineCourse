#include <iostream>
#include <vector>

using namespace std;

struct Point {
	float x, y, z;
public:
	Point() {
		x = 0;
		y = 0;
		z = 0;
	};
	Point(float _x, float _y, float _z) {
		x = _x;
		y = _y;
		z = _z;
	}
	Point(const Point& p1)
	{
		x = p1.x;
		y = p1.y;
		z = p1.z;
	}

	~Point(){};
	string ToString() {
		//return "X: " + x + "\n Y: " + y + "\n Z: " + z;
		return "";
	}
	float GetX() {
		return x;
	}
	float GetY() {
		return y;
	}
	float GetZ() {
		return z;
	}
	void SetX(float _x) {
		x = _x;
	}
	void SetY(float _y) {
		y = _y;
	}
	void SetZ(float _z) {
		z = _z;
	}
};
struct Color {
	float r, g, b, a; //valid values are only between 0.0f and 1.0f
public:
	Color() {
		r = 0;
		g = 0;
		b = 0;
		a = 0;
	};
	Color(float _r, float _g, float _b, float _a) {
		r = _r;
		g = _g;
		b = _b;
		a = _a;
	}
	Color(const Color& c1)
	{
		r = c1.r;
		g = c1.g;
		b = c1.b;
		a = c1.a;
	}

	~Color(){};
	string ToString() {
		//return "R: " + r + "\n G: " + g + "\n B: " + b + "\n A" + a;
		return "";
	}
	void Set(float _r, float _g, float _b, float _a);
};
class Vertex {
	Point position;
	Color color;
public:
	Vertex() {
	position:(0, 0, 0);
	color:(0, 0, 0, 0);
	};
	Vertex(Point _pos, Color _col) {
		position = _pos;
		color = _col;
	}
	Vertex(const Vertex& v1)
	{
		position = v1.position;
		color = v1.color;
	}

	~Vertex(){};
	string ToString() {
		//return "Position: " + position + "\n Color: " + color ;
		return "";
	}
	Point GetPosition() {
		return position;
	}
	void SetPosition(float x, float y, float z) {
		position = *new Point(x, y, z);
	}
	Color GetColor() {
		return color;
	}
	void SetColor(float r, float g, float b, float a) {
		color = *new Color(r, g, b, a);
	}
};
class Mesh {
	string name;
	vector<Vertex> vertices;
	Point position;
public:
	Mesh() {
		name = "";
		vertices = vector<Vertex>();
		position:(0, 0, 0);
	};
	Mesh(string _name, Point _position, vector<Vertex> _vertices) {
		name = _name;
		position = _position;
		vertices = _vertices;
	}

	string ToString() {
		//return "Name:"+name+"\n Position:"+position+" Vertices: Vertex "+vertices.Index+": Position: "+vertices.position+" Color: "+ vertices.color+"\n";
		return "";
	}
};
class Player {
	string name;
	Mesh* PlayerBody;
	Mesh* PlayerWeapon;
public:
	Player() {
		PlayerBody = nullptr;
		PlayerWeapon = nullptr;
	};
	Player(string _name, Mesh* _body, Mesh* _weapon) {
		name = _name;
		PlayerBody = _body;
		PlayerWeapon = _weapon;
	}

	~Player(){};
	string ToString() {
		//return "Player: Name:"+name+"\n Body:"+ PlayerBody +"\n Weapon:"+PlayerWeapon+"\n";
		return "";
	}
};
int main() {
	//Stack
	Point point;
	Color color;
	Vertex vertex;
	Mesh Body;
	Mesh Weapon;
	Player p1;
	p1: ("Nizar", Body, Weapon);
	cout << p1.ToString() << endl;

	//Heap
	Point* hPoint = new Point(0, 0, 0);
	Color* hColor = new Color(0, 0, 0, 1);
	Vertex* hVertex = new Vertex(*hPoint, *hColor);
	constexpr int size = 30;
	vector<Vertex>* hVerteces = new vector<Vertex>(size);
	for (size_t i = 0; i < size; i++)
	{
		hVerteces->emplace_back(Point(static_cast<float>(i), static_cast<float>(i) * 2, static_cast<float>(i) - 3.5f), Color(0.1f, 0.2f, 0.3f, 0.4f));
	}
	Mesh* hBody = new Mesh("Body", *hPoint, *hVerteces);
	Mesh* hWeapon = new Mesh("M4A1", *hPoint, *hVerteces);
	Player* p2 = new Player("Nezo", hBody, hWeapon);
	cout << p2->ToString() << endl;

	delete hPoint;
	delete hColor;
	delete hVertex;
	delete hVerteces;
	delete hBody;
	delete hWeapon;
	delete p2;
}