#pragma once
#include <string>
#include <vector>
#include "Point.h"
#include "Color.h"
#include "Vertex.h"
#include "Mesh.h"
class Player
{
public:
	Player();
	Player(std::string _name,Mesh* _body, Mesh* _weapon);
	~Player();
	std::string ToString();
private:
	const std::string name;
	Mesh* PlayerBody;
	Mesh* PlayerWeapon;
};

