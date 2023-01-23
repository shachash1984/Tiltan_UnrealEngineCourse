#pragma once
#include "IDialogElement.h"

class DialogElementSize : public IDialogElement
{
public:
	DialogElementSize(std::shared_ptr<IGUI> const& pGui, int _width, int _height);
	~DialogElementSize() override;
	void Act() override;

protected:
	int width;
	int height;

};