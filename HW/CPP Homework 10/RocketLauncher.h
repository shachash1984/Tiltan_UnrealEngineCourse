#pragma once
#include "Weapon.h"
class RocketLauncher : public Weapon
{
public:
	RocketLauncher();
	~RocketLauncher();
	RocketLauncher* Clone() override;
};

