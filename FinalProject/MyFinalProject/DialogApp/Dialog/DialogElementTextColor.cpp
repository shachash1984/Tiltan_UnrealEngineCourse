#include "DialogElementTextColor.h"

DialogElementTextColor::DialogElementTextColor(std::shared_ptr<IGUI> const& pGui, IGUI::Color _color)
	: IDialogCreationElement(pGui),
	color(_color)
{
}

DialogElementTextColor::~DialogElementTextColor()
{
}

void DialogElementTextColor::Act()
{
	gui->SetTextColor(color);
}
