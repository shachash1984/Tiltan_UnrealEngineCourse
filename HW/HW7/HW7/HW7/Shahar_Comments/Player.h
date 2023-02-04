#pragma once

#include <string>
#include "Mesh.h"

class Player
{
private:
	
	
public:
	
	std::string name;
	Mesh* PlayerBody;
	Mesh* PlayerWeapon;
	
	Player();
	Player(std::string _name, Mesh* _body, Mesh* _weapon);
	~Player();
	
	std::string ToString();
};