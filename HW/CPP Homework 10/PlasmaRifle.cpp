#include "PlasmaRifle.h"

PlasmaRifle::PlasmaRifle() : Weapon("Plasma Rifle",20,50,3,100) {};
PlasmaRifle::~PlasmaRifle() { std::cout << "\nPlasmaRifle Destroyed\n"; }

PlasmaRifle* PlasmaRifle::Clone()
{
    return new PlasmaRifle(*this);
}
