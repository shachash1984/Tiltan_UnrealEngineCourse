#include <iostream>
#include "Player.h"
#include "Mesh.h"

int main()
{
	Mesh* body = new Mesh();
	Mesh* weapon = new Mesh();
	
	body->name = "Body";
	weapon->name = "Weapon";
	
	Player stackPlayer;
	
	Player* heapPlayer = new Player();
	
	stackPlayer.name = "Stack Player";
	stackPlayer.PlayerBody = body;
	stackPlayer.PlayerWeapon = weapon;
	
	heapPlayer->name = "Heap Player";
	heapPlayer->PlayerBody = body;
	heapPlayer->PlayerWeapon = weapon;

	std::cout << "Stack Player: " << stackPlayer.ToString() << std::endl;
	std::cout << "Heap Player: " << heapPlayer->ToString() << std::endl;
}