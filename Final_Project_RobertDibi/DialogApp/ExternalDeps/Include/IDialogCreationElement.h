#pragma once
#include "IDIalogElement.h"

class IDialogCreationElement : public IDialogElement
{
public:
	IDialogCreationElement(std::shared_ptr<IGUI> const& pGui)
		: IDialogElement(pGui)
	{
		
	}
	~IDialogCreationElement() override = default;
};