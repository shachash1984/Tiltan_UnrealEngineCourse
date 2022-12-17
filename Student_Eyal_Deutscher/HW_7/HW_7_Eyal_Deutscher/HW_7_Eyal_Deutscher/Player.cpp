#include "Player.h"
#include "Mesh.h"
#include <string>
#include <iostream>
using namespace std;
const string DEFAULT_NAME = "Default Player";

Player::Player()
{
	std::cout << "Default Constructor player" << std::endl;

	_name = DEFAULT_NAME;
	_playerBody = nullptr;
	_playerWeapon = nullptr;
}
Player::Player(string name, Mesh* body, Mesh* weapon)
{
	std::cout << "Constructor player" << std::endl;
	_name = name;
	_playerBody = body;
	_playerWeapon = weapon;
}
Player::~Player()
{
	std::cout << "Destructor player" << std::endl;

}
string Player::ToString()
{
	string stringToReturn;
	stringToReturn = "Player name: " + _name + "\n" +
		"Body: " + _playerBody->ToString() + "\n"
		"Weapon: " + _playerWeapon->ToString();
	return stringToReturn;
}