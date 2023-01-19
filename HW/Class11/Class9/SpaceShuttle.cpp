#include "SpaceShuttle.h"
#include "EggBlaster.h"
#include "GunGun.h"
#include "JellyGun.h"

SpaceShuttle::SpaceShuttle()
{
	_name = nullptr;
	_weapon = nullptr;
	std::cout << "Created empty Space Shuttle";
}

SpaceShuttle::SpaceShuttle(std::string name, WeaponType weaponType)
{
	_name = name;
	switch (weaponType)
	{
	case WeaponType::tEggBlaster:
		_weapon = std::make_unique<EggBlaster>();
		break;

	case WeaponType::tGunGun:
		_weapon = std::make_unique<GunGun>();
		break;

	case WeaponType::tJellyGun:
		_weapon = std::make_unique<JellyGun>();
		break;

	default:
		std::cout << "This weapon type doesn't exists";
		break;
	}
}

SpaceShuttle::SpaceShuttle(const SpaceShuttle& other)
{
	_name = other._name;
	switch (other._weapon.get()->GetType())
	{
	case WeaponType::tEggBlaster:
		_weapon = std::make_unique<EggBlaster>();
		break;

	case WeaponType::tGunGun:
		_weapon = std::make_unique<GunGun>();
		break;

	case WeaponType::tJellyGun:
		_weapon = std::make_unique<JellyGun>();
		break;

	default:
		std::cout << "This weapon type doesn't exists";
		break;
	}
}

SpaceShuttle& SpaceShuttle::operator=(const SpaceShuttle other)
{
	_name = other._name;
	switch (other._weapon.get()->GetType())
	{
	case WeaponType::tEggBlaster:
		_weapon = std::make_unique<EggBlaster>();
		break;

	case WeaponType::tGunGun:
		_weapon = std::make_unique<GunGun>();
		break;

	case WeaponType::tJellyGun:
		_weapon = std::make_unique<JellyGun>();
		break;

	default:
		std::cout << "This weapon type doesn't exists";
		break;
	}
	return *this;
}

SpaceShuttle::~SpaceShuttle()
{
	
}

void SpaceShuttle::Shoot()
{
	_weapon->Shoot();
}

std::string SpaceShuttle::GetName()
{
	return _name;
}

void SpaceShuttle::ChangeWeapon(WeaponType weaponType)
{
	switch (weaponType)
	{
	case WeaponType::tEggBlaster:
		_weapon = std::make_unique<EggBlaster>();
		break;

	case WeaponType::tGunGun:
		_weapon = std::make_unique<GunGun>();
		break;

	case WeaponType::tJellyGun:
		_weapon = std::make_unique<JellyGun>();
		break;

	default:
		std::cout << "This weapon type doesn't exists";
		break;
	}
}
