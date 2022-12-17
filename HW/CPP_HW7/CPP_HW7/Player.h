#pragma once
#include "Mesh.h"
#include "string"

using namespace std;

class Player
{
private:
	string _name;
	Mesh* _playerBody;
	Mesh* _playerWeapon;

public:
	Player();
	Player(string name, Mesh* body, Mesh* weapon);
	~Player();
	string ToString();
};

