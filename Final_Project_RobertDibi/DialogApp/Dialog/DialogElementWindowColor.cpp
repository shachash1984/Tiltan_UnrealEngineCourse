#include "DialogElementWindowColor.h"
DialogElementWindowColor::DialogElementWindowColor(std::shared_ptr<IGUI> const& pGui, IGUI::Color _color) : IDialogCreationElement(pGui), color(_color)
{
}
DialogElementWindowColor::~DialogElementWindowColor()
{
}
void DialogElementWindowColor::Act()
{
	gui->SetWindowColor(color);
}