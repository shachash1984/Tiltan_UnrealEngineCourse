#pragma once
#include "IDialogElement.h"


class DialogElementPosition : public IDialogElement
{

public:
	DialogElementPosition(std::shared_ptr<IGUI> const& pGui, IGUI::Point _point);
	~DialogElementPosition() override;
	void Act() override;


protected:
	IGUI::Point point;
};
