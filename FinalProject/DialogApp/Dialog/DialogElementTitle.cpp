#include "DialogElementTitle.h"

DialogElementTitle::DialogElementTitle(std::shared_ptr<IGUI> const& pGui, const std::string& _title)
	: IDialogRenderingElement(pGui), title(_title)
{
}

DialogElementTitle::~DialogElementTitle()
{
}

void DialogElementTitle::Act()
{
	gui->StartDialog(title);
}

void DialogElementTitle::SetTitle(const std::string& _title)
{
	title = _title;
}

std::string const& DialogElementTitle::GetTitle() const
{
	return title;
}
