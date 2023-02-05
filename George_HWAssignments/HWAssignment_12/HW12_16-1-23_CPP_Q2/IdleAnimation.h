#pragma once
#include "Animation.h"

class IdleAnimation : public Animation
{
public:
	void Play() override { cout << "Playing: " << name << endl; }
private:
	std::string name = "Idle";
};