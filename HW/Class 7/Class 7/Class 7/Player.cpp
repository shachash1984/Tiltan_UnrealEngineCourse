#include "Player.h"

Player::Player()
	: name("Default"), playerBody(nullptr), playerWeapon(nullptr)
{

}

Player::Player(std::string _name, Mesh* _body, Mesh* _weapon)
	: name(_name), playerBody(_body), playerWeapon(_weapon)
{

}

Player::~Player()
{

}

std::string Player::ToString() const
{
	return "Player: Name" + name + "\n Body: " + playerBody->ToString() + "\n Weapon: " + playerWeapon->ToString();
}
