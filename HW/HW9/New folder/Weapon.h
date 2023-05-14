#pragma once
#include "string"

class Weapon
{
	public:
		Weapon();
		Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
		virtual ~Weapon();
		virtual bool Shoot(); //returns true if there is a hit, ALSO, needs to print the weapon's members and their values
		void ToString();

	protected:
		std::string _name;
		unsigned int _damage;
		float _range;
		float _reloadTime;
		unsigned int _ammo;
};

