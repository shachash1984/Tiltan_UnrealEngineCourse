#include "DialogElementPosition.h"

DialogElementPosition::DialogElementPosition(std::shared_ptr<IGUI> const& pGui, IGUI::Point _point) :
	IDialogCreationElement(pGui), point(_point)
{
}

DialogElementPosition::~DialogElementPosition()
{
	
}

void DialogElementPosition::Act()
{
	gui->SetDialogPosition(point);
}
