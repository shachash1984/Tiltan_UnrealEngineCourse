#pragma once
#include <iostream>

#include "IGUI.h"
#include <memory>

class IDialogElement
{
public:
	IDialogElement(std::shared_ptr<IGUI> const& pGui)
	: gui(pGui)
	{
	}

	virtual ~IDialogElement() = default;
	
	virtual void Act() = 0;

protected:
	std::shared_ptr<IGUI> gui{nullptr};
};


