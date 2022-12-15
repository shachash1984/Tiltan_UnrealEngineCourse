#include "Player.h"

Player::Player()
{
	PlayerBody = nullptr;
	PlayerWeapon = nullptr;
}

Player::Player(std::string _name, Mesh* _body, Mesh* _weapon)
{
	name = _name;
	PlayerBody = _body;
	PlayerWeapon = _weapon;
}

Player::~Player()
{
	delete PlayerBody;
	delete PlayerWeapon;
}

std::string Player::ToString()
{
	return std::string("Player: " + name + "\nBody: " + PlayerBody->ToString() + "\nWeapon: " + PlayerWeapon->ToString());
}