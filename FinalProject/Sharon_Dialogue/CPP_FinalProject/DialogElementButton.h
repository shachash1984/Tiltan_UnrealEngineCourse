#pragma once
#include "IDialogElementButton.h"

class DialogElementButton : public IDialogElementButton
{
public:
	DialogElementButton(std::shared_ptr<IGUI> const& pGui, std::string const& _text, int _nextDialogId);
	~DialogElementButton() override;
	void Act() override;

protected:
	int nextDialogId;
};