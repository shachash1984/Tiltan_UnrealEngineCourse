#include "Player.h"
#include <iostream>
using std::cout;
using std::endl;

Player::Player() : name("NewPlayer"), playerBody(nullptr), playerWeapon(nullptr)
{
}

Player::Player(std::string _name, Mesh* _plBody, Mesh* _plWeapon)
	: name(_name), playerBody(_plBody), playerWeapon(_plWeapon)
{
}

Player::~Player()
{
	cout << "Destructing Player" << endl;
}
