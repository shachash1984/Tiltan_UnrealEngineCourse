#include "SpaceShuttle.h"

SpaceShuttle::SpaceShuttle(std::string _name, std::unique_ptr<Weapon> _weapon)

	: name(_name)
	, weapon(std::move(_weapon))
{}

SpaceShuttle::SpaceShuttle(const SpaceShuttle & other)

	: name(other.name)
	, weapon(other.weapon!=nullptr? other.weapon->Clone() : nullptr)
	
{}

SpaceShuttle& SpaceShuttle::operator=(const SpaceShuttle & other)
{
	if (this == &other) return *this; // check for self-assignment

	name = other.name;
	weapon = other.weapon != nullptr ? std::make_unique<Weapon>(*other.weapon->Clone()) : nullptr;
	std::cout << "SpaceShuttle Operator Worked!\n\n";

	return *this;
}

SpaceShuttle::~SpaceShuttle()
{
	std::cout << "\nSpaceShuttle Destroyed\n";
	weapon.reset();
}

void SpaceShuttle::ReplaceWeapon(std::unique_ptr<Weapon> _weapon)
{
	if (weapon != nullptr)
		weapon.reset();

	weapon = std::make_unique<Weapon>(*_weapon->Clone());
}

void SpaceShuttle::Shoot()
{
	weapon->Shoot();
}
