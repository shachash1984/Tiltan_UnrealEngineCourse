#include "Player.h"

Player::Player() : name("") , PlayerBody(nullptr) , PlayerWeapon(nullptr)
{
}

Player::Player(std::string _name, Mesh* _body, Mesh* _weapon) : name(_name) , PlayerBody(_body) , PlayerWeapon(_weapon)
{
}

Player::~Player()
{
}

std::string Player::ToString()
{
	return "\nPlayer:\nName:[" + name + "]\nBody:[" +
		PlayerBody->ToString() + "]\nWeapon:[" +
		PlayerWeapon->ToString() + "]\n";	
}
