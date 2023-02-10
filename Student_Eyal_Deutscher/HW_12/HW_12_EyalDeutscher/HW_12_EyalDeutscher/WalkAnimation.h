#pragma once
#include "Animation.h"
class WalkAnimation:public Animation
{
public:
	WalkAnimation();
	void Play() override;
};

