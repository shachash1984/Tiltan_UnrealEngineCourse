#include <iostream>
#include "Point.h"
#include "Color.h"
#include "Vertex.h"
#include "Mesh.h"
#include "Player.h"
#include <string>

using namespace std;

int main()
{

	Point pt(1, 2, 4);
	Point pt2(3, 2, 11);
	Color col(0.2f, 0.3f, 0.4f, 0.5f);
	Color col2(1, 1, 1, 1);

	Vertex vert(pt, col);
	Vertex vert2(pt2, col2);

	vector<Vertex> vertices;
	vertices.push_back(vert);
	vertices.push_back(vert2);

	Point meshPT1(5, 4, 33);
	Point meshPT2(15, 2, 7);
	Mesh weaponMesh("Ron Weapon Mesh", meshPT1, vertices);
	Mesh bodyMesh("Ron Body Mesh", meshPT2, vertices);

	string playerName = "Ron";
	Player player(playerName, &bodyMesh, &weaponMesh); // Stack
	Player* heapPlayer = new Player("heapPlayer", &bodyMesh, &weaponMesh); // Heap

	cout << pt.ToString() << endl;
	cout << col.ToString() << endl;
	cout << vert.ToString() << endl;
	cout << weaponMesh.ToString() << endl;
	cout << weaponMesh.GetVertexWorldPosition(0).ToString() << endl;
	cout << player.ToString() << endl;

	delete heapPlayer; // have to delete pointer to prevent memory leak
	return 0;
}