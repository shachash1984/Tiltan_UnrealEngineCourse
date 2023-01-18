#include "SpaceShuttle.h"
#include "EggBlaster.h"
#include "GunGun.h"
#include "JellyGun.h"

SpaceShuttle::SpaceShuttle() //-5 needs to be initialized in the initializer list
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

//SpaceShuttle::SpaceShuttle(const SpaceShuttle& other) 
//{
//	_name = other._name;
//	_weapon = std::make_unique<typeid(other._weapon)>();
//}

//SpaceShuttle& SpaceShuttle::operator=(const SpaceShuttle other)
//{
//	// // O: insert return statement here
//}

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
