#pragma once

#include "Mesh.h"

using namespace std;

class Player
{
private:
	string _name;
	Mesh* _playerBody;
	Mesh* _playerWeapon;

public:
	Player();
	Player(string name, Mesh* playerBody, Mesh* playerWeapon);
	~Player();
	string ToString() { return std::format("Player: Name[{}]\nBody: [{}]\nWeapon: [{}])", _name, _playerBody->ToString(), _playerWeapon->ToString()); };
};