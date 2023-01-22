#include <iostream>
#include <vector>
#include "Point.h"
#include "Color.h"
#include "Vertex.h"
#include "Mesh.h"
#include "Player.h"

using namespace std;
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