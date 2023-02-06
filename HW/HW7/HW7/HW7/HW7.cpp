#include <iostream>
#include "Player.h"
#include "Mesh.h"

int main()
{
	Mesh* body = new Mesh();
	Mesh* weapon = new Mesh();
	
	body->name = "Body";
	weapon->name = "Weapon";
	
	Player stackPlayer("StackPlayer", body, weapon);
	Player* heapPlayer = new Player("HeapPlayer", body, weapon);

	std::cout << "Stack Player: " << stackPlayer.ToString() << std::endl;
	std::cout << "Heap Player: " << heapPlayer->ToString() << std::endl;

	delete heapPlayer;
}