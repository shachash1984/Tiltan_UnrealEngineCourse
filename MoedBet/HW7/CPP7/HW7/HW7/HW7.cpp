#include <iostream>
#include "Point.h"
#include "Vertex.h"
#include "Mesh.h"
#include "Player.h"

using std::cout;

int main()
{
	//Point* point = new Point();
	//cout << point->ToString();

	//Color* color = new Color(0.4f, 0.4f, 0.4f, 0.4f);
	//cout << color->ToString() + "\n";
	//delete color;
	//color = new Color(5, 0.2f, -4, 1.2f);
	//cout << color->ToString();

	//Vertex* vertex = new Vertex();
	//cout << vertex->GetPosition().ToString();

	//Mesh* mesh = new Mesh();
	//cout << mesh->ToString();

	//Mesh* mesh = new Mesh();
	//cout << mesh->GetVertexWorldPosition(4).ToString();

	//Player* player = new Player("Ben", new Mesh("Body", new Point()), new Mesh("Weapon", new Point());
	//cout << player->ToString();

	//Mesh* Body = new Mesh("Body", new Point());
	//Mesh* Weapon = new Mesh("Weapon", new Point());

	Mesh* Body = new Mesh();
	Mesh* Weapon = new Mesh();

	Player* player = new Player("Ben", Body, Weapon);
	cout << player->ToString();

	delete Body;
	delete Weapon;
	delete player;

	//Vertex v;
	//v.SetPosition(1, 2, 3); // This code was added by me, try uncommenting and see what the values. this is because you used commas and not semicolons in the SetPosition function
	//cout << v.ToString();

	//cout << Body->ToString();
	//cout << Weapon->ToString();
	//cout << player->ToString();
}