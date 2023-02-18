#include "DialogElementButton.h"

DialogElementButton::DialogElementButton(std::shared_ptr<IGUI> const& pGui, std::string const& _text, int _nextDialogId):
IDialogElementButton(pGui, _text), nextDialogId(_nextDialogId)
{
}

DialogElementButton::~DialogElementButton()
{
}

void DialogElementButton::Act()
{
	gui->SetCurrentDialog(nextDialogId);
}
