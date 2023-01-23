#pragma once
#include "IDialogElement.h"

class DialogElementWindowColor : public IDialogElement
{
public:
	DialogElementWindowColor(std::shared_ptr<IGUI> const& pGui, IGUI::Color _color);
	~DialogElementWindowColor() override;
	void Act() override;

protected:
	IGUI::Color color{};
};