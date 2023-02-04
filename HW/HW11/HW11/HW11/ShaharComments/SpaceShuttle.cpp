#include "SpaceShuttle.h"
#include "PotatoGun.h"
#include "Rockets.h"
#include "Laser.h"

SpaceShuttle::SpaceShuttle()
{
	_name = nullptr;
	_weapon = nullptr;
	std::cout << "SpaceShuttle created";
}

SpaceShuttle::SpaceShuttle(std::string name, WeaponType weaponType)
{
	_name = name;
	switch (weaponType)
	{
	case tPotatoGun:
		_weapon = std::make_unique<PotatoGun>();
		break;
	case tRockets:
		_weapon = std::make_unique<Rockets>();
		break;
	case tLaser:
		_weapon = std::make_unique<Laser>();
		break;
	default:
		std::cout << "Invalid weapon type";
		break;
	}
}

SpaceShuttle::SpaceShuttle(const SpaceShuttle& other)
{
	_name = other._name;
	//switch (other._weapon.get()->GetType())
	switch (other._weapon->GetType()) // -2 why not use this instead?
	{
		{
	case tPotatoGun:
		_weapon = std::make_unique<PotatoGun>();
		break;
	case tRockets:
		_weapon = std::make_unique<Rockets>();
		break;
	case tLaser:
		_weapon = std::make_unique<Laser>();
		break;
	default:
		std::cout << "Invalid weapon type";
		break;
		}
	}
}

SpaceShuttle& SpaceShuttle::operator=(const SpaceShuttle& other)
{
	_name = other._name;
	switch (other._weapon.get()->GetType())
	{
		{
	case tPotatoGun:
		_weapon = std::make_unique<PotatoGun>();
		break;
	case tRockets:
		_weapon = std::make_unique<Rockets>();
		break;
	case tLaser:
		_weapon = std::make_unique<Laser>();
		break;
	default:
		std::cout << "Invalid weapon type";
		break;
		}
		return *this; // -5 needs to be outside the switch
	}
}

SpaceShuttle::~SpaceShuttle()
{
}

void SpaceShuttle::Shoot()
{
	_weapon->Shoot();
}

void SpaceShuttle::ChangeWeapon(WeaponType weaponType)
{
	switch (weaponType)
	{
	case tPotatoGun:
		_weapon = std::make_unique<PotatoGun>();
		break;
	case tRockets:
		_weapon = std::make_unique<Rockets>();
		break;
	case tLaser:
		_weapon = std::make_unique<Laser>();
		break;
	default:
		std::cout << "Invalid weapon type";
		break;
	}
}

std::string SpaceShuttle::GetName()
{
	return _name;
}
