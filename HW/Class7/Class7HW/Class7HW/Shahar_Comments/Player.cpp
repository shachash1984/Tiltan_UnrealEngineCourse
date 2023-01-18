#include "Player.h"

Player::Player()
{
	playerBody = nullptr;
	playerWeapon = nullptr;
}

Player::Player(std::string _name, Mesh* _pBody, Mesh* _pWeapon) // -5 need to be initialized in the ctor initialization list - see my example below
{
	name = _name;
	playerBody = _pBody;
	playerWeapon = _pWeapon;
}

//Player::Player(std::string _name, Mesh* _pBody, Mesh* _pWeapon)
//	: name(_name), playerBody(_pBody), playerWeapon(_pWeapon)
//{
//	
//}

Player::~Player()
{
	delete playerBody;
	delete playerWeapon;
}

std::string Player::ToString()
{
	return std::string("Player: \nName: " + name + "\nBody: " + playerBody->ToString() + "\nWeapon: " + playerWeapon->ToString());
}
