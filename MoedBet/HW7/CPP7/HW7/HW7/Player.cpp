#include "Player.h"

Player::Player()
{
	_name = "Person";
	_playerBody = nullptr;
	_playerWeapon = nullptr;
}

Player::Player(string name, Mesh* playerBody, Mesh* playerWeapon)
{
	_name = name;
	_playerBody = playerBody;
	_playerWeapon = playerWeapon;
}

Player::~Player()
{
}
