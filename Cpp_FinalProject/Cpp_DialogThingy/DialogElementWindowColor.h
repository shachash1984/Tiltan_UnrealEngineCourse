#pragma once
#include "IDialogCreationElement.h"

class DialogElementWindowColor : public IDialogCreationElement
{
	public:
		DialogElementWindowColor(std::shared_ptr<IGUI> const& pGui, IGUI::Color _color);
		~DialogElementWindowColor() override;
		void Act() override;
	
	protected:
		IGUI::Color color{};
};