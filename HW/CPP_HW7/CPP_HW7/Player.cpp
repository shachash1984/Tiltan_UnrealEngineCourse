#include "Player.h"
#include "Mesh.h"
#include "string"

using namespace std;

const string DEFAULT_NAME = "default";

Player::Player()
{
	_name = DEFAULT_NAME;
	_playerBody = nullptr;
	_playerWeapon = nullptr;
}

Player::Player(string name, Mesh* body, Mesh* weapon)
{
	_name = name;
	_playerBody = body;
	_playerWeapon = weapon;
}

Player:: ~Player()
{

}

string Player::ToString()
{
	string playerNameString = "Player Name: " + _name + "\n";
	string playerBodyString = "-----Player Body-----\n" + _playerBody->ToString() + "\n";
	string playerWeaponString = "-----Player Body-----\n" + _playerWeapon->ToString() + "\n";

	string stringToReturn = playerNameString + playerBodyString + playerWeaponString;

	return stringToReturn;
}
