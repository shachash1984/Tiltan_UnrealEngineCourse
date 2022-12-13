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

	//Player* player = new Player("Sharon", new Mesh("Sharon's Body", new Point()), new Mesh("Sharon's Weapon", new Point());
	//cout << player->ToString();

	//Mesh* sharonsBody = new Mesh("Sharon's Body", new Point());
	//Mesh* sharonsWeapon = new Mesh("Sharon's Weapon", new Point());

	Mesh* sharonsBody = new Mesh();
	Mesh* sharonsWeapon = new Mesh();

	Player* player = new Player("Sharon", sharonsBody, sharonsWeapon);
	cout << player->ToString();

	delete sharonsBody;
	delete sharonsWeapon;
	delete player;

	//cout << sharonsBody->ToString();
	//cout << sharonsWeapon->ToString();
	//cout << player->ToString();
}