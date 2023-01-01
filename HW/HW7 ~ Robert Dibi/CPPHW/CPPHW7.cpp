#include <iostream>
#include <vector>

using namespace std;
 // -10 this should be separated to a header file and a source file
struct Point {
	float x, y, z;
public:
	Point();
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

	~Point();
	string ToString() {
		//return "X: " + x + "\n Y: " + y + "\n Z: " + z;
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
	Color();
	Color(float _r, float _g, float _b, float _a) { // -5 you are not checking if the values are valid
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

	~Color();
	string ToString() {
		//return "R: " + r + "\n G: " + g + "\n B: " + b + "\n A" + a;
	}
	void Set(float _r, float _g, float _b, float _a);
};
class Vertex {
	Point position;
	Color color;
public:
	Vertex();
	Vertex(Point _pos, Color _col) {
		position = _pos;
		color = _col;
	}
	Vertex(const Vertex& v1)
	{
		position = v1.position;
		color = v1.color;
	}

	~Vertex();
	string ToString() {
		//return "Position: " + position + "\n Color: " + color ;
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
	Mesh();
	Mesh(string _name, Point _position, vector<Vertex> _vertices) {
		name = _name;
		position = _position;
		vertices = _vertices;
	}

	string ToString() { // -5 should use a for loop to print all vertices
		//return "Name:"+name+"\n Position:"+position+" Vertices: Vertex "+vertices.Index+": Position: "+vertices.position+" Color: "+ vertices.color+"\n";
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

	~Player();
	string ToString() { // -5 doesnt return a string
		return "Player: Name:"+name+"\n Body:"+PlayerBody +"\n Weapon:"+PlayerWeapon+"\n";
	}

	//This is the correct answer
	/*string ToString()
	{ 
		return "Player: Name:"+name+"\n Body:"+PlayerBody->ToString() +"\n Weapon:"+PlayerWeapon->ToString()+"\n";
	}*/
};


//does not compile -5
int main()
{
	//Stack
	Point point;
	Color color;
	Vertex vertex;
	Mesh Body;
	Mesh Weapon;
	Player p1;
    p1 : ("Robert", Body, Weapon);
	cout<<p1.ToString();



	//Heap
	Point* hPoint = new Point(0, 0, 0);
	Color* hColor = new Color(0, 0, 0, 1);
	Vertex* hVertex = new Vertex(*hPoint, *hColor);
	vector<Vertex>* hVerteces = new vector<Vertex>; // -5 hVerteces is a local object, "new" returns a pointer
	for (size_t i = 0; i < hVerteces->size(); i++) //-5 instead of "length" did you mean hVerteces.size()?
{																														//-5 the "5" in the Point constructor is redundant... Point only takes 3 parameters
		hVerteces->emplace_back(Point(static_cast<float>(i), static_cast<float>(i) * 2, static_cast<float>(i) - 3/*, 5*/), Color(0.1f, 0.2f, 0.3f, 0.4f));
	}
	Mesh* hBody = new Mesh("Mohammad Abul The Third", *hPoint, *hVerteces); // -5 I assume instead of *hVertex you meant *hVerteces
	Mesh* hWeapon = new Mesh();
	Player* p2 = new Player("Mohammad Abul The Third" ,hBody, hWeapon);
	cout << p2->ToString() << endl;
	delete hPoint;
	delete hColor;
	delete hVertex;
	delete hBody;
	delete hBody;
	delete hWeapon;
	delete p2;
	
}

