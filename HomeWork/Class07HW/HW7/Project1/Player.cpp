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
string Player::ToString() {
	//return "Player: Name:"+name+"\n Body:"+ PlayerBody +"\n Weapon:"+PlayerWeapon+"\n";
	return "";
}