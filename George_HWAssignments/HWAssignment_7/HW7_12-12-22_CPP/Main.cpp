#include <iostream>
#include "Player.h"
using std::cout;
using std::endl;

int main()
{
	Mesh plBody;
	plBody.ChangeName("Player Body");
	Mesh plWeapon;
	plWeapon.ChangeName("Player Weapon");

	//Player p1("Player1", plBody, plWeapon);

	//cout << "Player:{ " + p1.ToString() + " }" << endl;

	return 0;
}