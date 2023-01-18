#pragma once
#include <string>
#include "Mesh.h"

class Player
{
public:

	std::string name;
	Mesh* playerBody;
	Mesh* playerWeapon;

	Player();
	Player(std::string _name, Mesh* _pBody, Mesh* _pWeapon);
	~Player();
	std::string ToString();


};

