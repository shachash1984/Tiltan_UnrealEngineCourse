#include "LaserGun.h"

LaserGun::LaserGun() : Weapon("Laser Gun", 1, 200, 5, 2000) {}
LaserGun::~LaserGun() { std::cout << "\nLaserGun Destroyed\n"; }

LaserGun* LaserGun::Clone()
{
    return new LaserGun(*this);
}
