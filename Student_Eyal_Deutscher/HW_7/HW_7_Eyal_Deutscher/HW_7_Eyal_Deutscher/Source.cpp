#include <iostream>
#include "Vertex.h"
#include "Point.h"
#include "Color.h"
#include "Mesh.h"
#include "Player.h"
Player stackPlayer;
using namespace std;
int main()
{
	cout << "Start" << std::endl;

	Point position1(1, 2, 3);
	cout << position1.ToString() << endl;

	Color color1(0.1f, 0.3f, 0.5f, 0.1f);
	cout << color1.ToString() << endl;

	Vertex vert1(position1, color1);
	cout << vert1.ToString() << endl;

	Point position2(2, 5, 7);
	cout << position2.ToString() << endl;

	Color color2(0.3f, 0.4f, 0.7f, 0.2f);
	cout << color2.ToString() << endl;

	Vertex vert2(position2, color2);
	cout << vert2.ToString() << endl;

	Point position3(4, -2, -10);
	cout << position3.ToString() << endl;

	std::vector<Vertex> vertices1{ vert1 };
	vertices1.push_back(vert2);

	Mesh mesh1("Mesh 1", position3, vertices1);
	cout << mesh1.ToString() << endl;
	cout << mesh1.GetVertexWorldPosition(0).ToString() << endl;

	Mesh mesh2("mesh 2", position3, vertices1);


	Player characterControler("Player", &mesh1, &mesh2);//heap
	stackPlayer =* new Player("Player", &mesh1, &mesh2);//stack
	//"Player", mesh1, mesh2
	cout << characterControler.ToString() << endl;

	//delete &stackPlayer;
	//delete &characterControler;
	return 0;
}