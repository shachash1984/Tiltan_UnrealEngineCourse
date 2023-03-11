#pragma once
#include "Mesh.h"

class Player
{
public:
	Player();
	Player(std::string _name, Mesh* _body, Mesh* _weapon);
	~Player();

	std::string	ToString() const;

private:
	std::string name;
	Mesh* playerBody;
	Mesh* playerWeapon;
};