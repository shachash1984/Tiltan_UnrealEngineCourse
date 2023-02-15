#include "LaserWeapon.h"

LaserWeapon::LaserWeapon() : Weapon()
{

}

LaserWeapon::LaserWeapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo) : Weapon(_name, _damage, _range, _reloadTime, _ammo)
{

}

LaserWeapon::~LaserWeapon()
{

}

bool LaserWeapon::Shoot()
{
    std::cout << "Firing plasma weapon " << name << " with damage " << damage << ", range " << range << ", reload time " << reloadTime << " and " << ammo << " ammo" << std::endl;
    return true;
}