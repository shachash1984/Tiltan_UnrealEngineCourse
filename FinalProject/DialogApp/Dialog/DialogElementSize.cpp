#include "DialogElementSize.h"

DialogElementSize::DialogElementSize(std::shared_ptr<IGUI> const& pGui, int _width, int _height)
	: IDialogCreationElement(pGui), width(_width), height(_height)
{

}

DialogElementSize::~DialogElementSize()
{
}

void DialogElementSize::Act()
{
	gui->SetDialogSize(width, height);
}
