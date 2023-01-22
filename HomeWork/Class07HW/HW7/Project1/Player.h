#pragma once
#include <iostream>
#include "Mesh.h"

using namespace std;
class Player {
	string name;
	Mesh* PlayerBody;
	Mesh* PlayerWeapon;
public:
	Player() {
		PlayerBody = nullptr;
		PlayerWeapon = nullptr;
	};
	Player(string _name, Mesh* _body, Mesh* _weapon) {
		name = _name;
		PlayerBody = _body;
		PlayerWeapon = _weapon;
	}

	~Player() {};
	string ToString() const { return "Name: " + name + ", BodyMesh: " + PlayerBody->ToString() + ", WeaponMesh: " + PlayerWeapon->ToString(); }
};