#pragma once
#include "IDialogElement.h"

class IDialogElementButton : public IDialogElement
{
public:
	IDialogElementButton(std::shared_ptr<IGUI> const& pGui, std::string const& _text)
		: IDialogElement(pGui)
		, text(_text)
	{}
	virtual ~IDialogElementButton() = default;
	std::string const& GetText() const { return text; }

protected:
	std::string text{};
};
