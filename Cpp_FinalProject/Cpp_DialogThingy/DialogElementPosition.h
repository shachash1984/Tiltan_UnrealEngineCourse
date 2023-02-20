#pragma once
#include "IDialogCreationElement.h"

class DialogElementPosition : public IDialogCreationElement
{
	public:
		DialogElementPosition(std::shared_ptr<IGUI> const& pGui, IGUI::Point _point);
		~DialogElementPosition() override;
		void Act() override;
	
	
	protected:
		IGUI::Point point;
};
