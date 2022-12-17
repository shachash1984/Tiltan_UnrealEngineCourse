#pragma once
#include <string>
#include "Mesh.h"

class Player
{
public:
	Player();
	Player(std::string _name, Mesh* _plBody, Mesh* _plWeapon);

	~Player();

	std::string ToString() const { return "Name: " + name + ", BodyMesh: " + playerBody->ToString() + ", WeaponMesh: " + playerWeapon->ToString(); }

	
private:
	std::string name;
	Mesh* playerBody;
	Mesh* playerWeapon;
};