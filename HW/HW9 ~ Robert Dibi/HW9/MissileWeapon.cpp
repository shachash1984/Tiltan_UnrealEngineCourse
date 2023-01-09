#include "MissileWeapon.h"

MissileWeapon::MissileWeapon() : Weapon()
{

}

MissileWeapon::MissileWeapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo) : Weapon(_name, _damage, _range, _reloadTime, _ammo)
{

}

MissileWeapon::~MissileWeapon()
{

}

bool MissileWeapon::Shoot()
{
    std::cout << "Firing missile weapon " << name << " with damage " << damage << ", range " << range << ", reload time " << reloadTime << " and " << ammo << " ammo" << std::endl;
    return true;
}
