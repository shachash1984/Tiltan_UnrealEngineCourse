#pragma once
#include "IDialogCreationElement.h"

class DialogElementTextColor : public IDialogCreationElement
{
public:
	DialogElementTextColor(std::shared_ptr<IGUI> const& pGui, IGUI::Color _color);
	~DialogElementTextColor() override;
	void Act() override;

protected:
	IGUI::Color color{};
};