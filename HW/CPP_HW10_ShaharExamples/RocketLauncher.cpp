#include "RocketLauncher.h"

RocketLauncher::RocketLauncher() : Weapon("Rocket Launcher", 300, 20, 1, 1) {};
RocketLauncher::~RocketLauncher() { std::cout << "\nRocketLauncher Destroyed\n"; }

RocketLauncher* RocketLauncher::Clone()
{
	return new RocketLauncher(*this);
}
