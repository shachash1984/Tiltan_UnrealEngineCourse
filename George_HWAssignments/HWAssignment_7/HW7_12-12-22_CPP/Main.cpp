#include <iostream>
#include "Player.h"
using std::cout;
using std::endl;

int main()
{
	// Stack
	Mesh plBodyA;
	plBodyA.ChangeName("Player Body1");
	Mesh* plBodyPointerA = &plBodyA;

	Mesh plWeaponA;
	plWeaponA.ChangeName("Player Weapon1");
	Mesh* plWeaponPointerA = &plWeaponA;

	Player p1("Player1", plBodyPointerA, plWeaponPointerA);

	cout << "Player:{ " + p1.ToString() + " }" << endl;
	

	// Heap
	Mesh* plBodyPointerB = new Mesh;
	plBodyPointerB->ChangeName("Player Body2");

	Mesh* plWeaponPointerB = new Mesh;
	plWeaponPointerB->ChangeName("Player Weapon2");

	Player* p2 = new Player("Player2", plBodyPointerB, plWeaponPointerB);

	cout << "Player:{ " + p2->ToString() + " }" << endl;

	delete p2;
	delete plWeaponPointerB;
	delete plBodyPointerB;

	return 0;
}