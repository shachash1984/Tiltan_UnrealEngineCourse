#pragma once
#include "Animation.h"

class CrawlingAnimation : public Animation
{
public:
	void Play() override { cout << "Playing: " << name << endl; }
private:
	std::string name = "Crawling";
};