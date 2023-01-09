#include "PlasmaRifle.h"

PlasmaRifle::PlasmaRifle() : Weapon("Plasma Rifle",20,50,3,100) {};
PlasmaRifle::~PlasmaRifle() { std::cout << "\n" << name << " Destroyed\n"; }

Weapon* PlasmaRifle::Clone()
{
    return new PlasmaRifle(*this);
}
