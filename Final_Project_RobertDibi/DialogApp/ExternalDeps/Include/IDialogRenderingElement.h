#pragma once
#include "IDIalogElement.h"

class IDialogRenderingElement : public IDialogElement
{
public:
	IDialogRenderingElement(std::shared_ptr<IGUI> const& pGui)
		: IDialogElement(pGui)
	{
		
	}
	~IDialogRenderingElement() override = default;
};