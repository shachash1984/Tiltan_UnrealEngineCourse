#pragma once
#include "Animation.h"

class WalkingAnimation : public Animation
{
public:
	WalkingAnimation();
	~WalkingAnimation();
	void Play() override;
};
