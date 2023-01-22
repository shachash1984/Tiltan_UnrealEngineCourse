#include "Player.h"
#include <iostream>

Player::Player() {
	PlayerBody = nullptr;
	PlayerWeapon = nullptr;
};
Player::Player(string _name, Mesh* _body, Mesh* _weapon) {
	name = _name;
	PlayerBody = _body;
	PlayerWeapon = _weapon;
}

Player::~Player() {};