#pragma once
#include "IDialogCreationElement.h"

class DialogElementSize : public IDialogCreationElement
{
	public:
		DialogElementSize(std::shared_ptr<IGUI> const& pGui, int _width, int _height);
		~DialogElementSize() override;
		void Act() override;
	
	protected:
		int width;
		int height;
};