#include <iostream>

#include "Player.h"

int main()
{
	//-10 item 9 in the exercise says each mesh must have at least 30 different vertices
	Mesh body("Body1", std::vector<Vertex*>(), Point(0, 100, 0));
	Mesh weapon("Weapon1", std::vector<Vertex*>(), Point(25, 100, 0));
	Player p1("Player1", &body, &weapon);

	Mesh* body2 = new Mesh("Body2", std::vector<Vertex*>(), Point(0, 100, 0));
	Mesh* weapon2 = new Mesh("Weapon2", std::vector<Vertex*>(), Point(25, 100, 0));
	Player* p2 = new Player("Player2", body2, weapon2);

	std::cout << p1.ToString() << std::endl;
	std::cout << p2->ToString() << std::endl;

	delete body2;
	delete weapon2;
	delete p2;

	return 0;
}
