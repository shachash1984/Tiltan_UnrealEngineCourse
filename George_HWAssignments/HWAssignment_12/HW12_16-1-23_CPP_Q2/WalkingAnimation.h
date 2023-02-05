#pragma once
#include "Animation.h"

class WalkingAnimation : public Animation
{
public:
	void Play() override { cout << "Playing: " << name << endl; }
private:
	std::string name = "Walking";
};