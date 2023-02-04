#include <iostream>
#include "Player.h"
#include "Mesh.h"

int main()
{
	Mesh* body = new Mesh();
	Mesh* weapon = new Mesh();
	
	body->name = "Body";
	weapon->name = "Weapon";
	
	Player stackPlayer; //why not initialize the stackPlayer here?
	
	Player* heapPlayer = new Player();
	
	stackPlayer.name = "Stack Player";
	stackPlayer.PlayerBody = body;
	stackPlayer.PlayerWeapon = weapon;
	
	heapPlayer->name = "Heap Player";
	heapPlayer->PlayerBody = body;
	heapPlayer->PlayerWeapon = weapon; // -5 all every vertex should have a different value (item 9 in the assignment)

	std::cout << "Stack Player: " << stackPlayer.ToString() << std::endl;
	std::cout << "Heap Player: " << heapPlayer->ToString() << std::endl;

	// -5 memory leak - forgot to delete heapPlayer (item 10 in the assignment)
}