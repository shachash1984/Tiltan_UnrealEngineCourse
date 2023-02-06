#include "Weapon.h"
#include "LaserWeapon.h"
#include "PlasmaWeapon.h"
#include "MissileWeapon.h"
// -35 you didn't create the spaceship class
int main()
{
    Weapon weapon; 
    LaserWeapon laserWeapon("Laser", 10, 15.0f, 2.0f, 8);
    PlasmaWeapon plasmaWeapon("Plasma", 20, 25.0f, 3.0f, 6);
    MissileWeapon missileWeapon("Missile", 30, 35.0f, 4.0f, 4);

    weapon.Shoot();
    laserWeapon.Shoot();
    plasmaWeapon.Shoot();
    missileWeapon.Shoot();

    return 0;
}
