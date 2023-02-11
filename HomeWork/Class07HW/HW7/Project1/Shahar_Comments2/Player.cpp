#include "Player.h"
#include <iostream>

Player::Player() { // -10 you already defined this ctor in the header file, sane for other constructor and the destructor
	PlayerBody = nullptr;
	PlayerWeapon = nullptr;
};
Player::Player(string _name, Mesh* _body, Mesh* _weapon) {
	name = _name;
	PlayerBody = _body;
	PlayerWeapon = _weapon;
}

Player::~Player() {};