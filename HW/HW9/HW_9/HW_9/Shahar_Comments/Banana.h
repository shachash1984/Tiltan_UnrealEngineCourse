#pragma once
#include "Weapon.h"
#include "string"

class Banana : public Weapon
{
	protected: // -10 no need to declare these members again they are already declared in the base class
		std::string _name;
		unsigned int _damage;
		float _range;
		float _reloadTime;
		unsigned int _ammo;
	public:
		Banana();
		~Banana();
};

