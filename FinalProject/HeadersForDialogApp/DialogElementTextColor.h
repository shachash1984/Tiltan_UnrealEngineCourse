#pragma once
#include "IDialogElement.h"

class DialogElementTextColor : public IDialogElement
{
public:
	DialogElementTextColor(std::shared_ptr<IGUI> const& pGui, IGUI::Color _color);
	~DialogElementTextColor() override;
	void Act() override;

protected:
	IGUI::Color color{};
};