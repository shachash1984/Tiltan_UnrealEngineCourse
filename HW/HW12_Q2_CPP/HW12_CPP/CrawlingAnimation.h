#pragma once
#include "Animation.h"

class CrawlingAnimation : public Animation
{
public:
	CrawlingAnimation();
	~CrawlingAnimation();
	void Play() override;
};
