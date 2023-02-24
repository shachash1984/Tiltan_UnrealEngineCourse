#pragma once
#include "IDialogRenderingElement.h"
#include "IGUI.h"

using namespace std;

class DialogElementTitle : public IDialogRenderingElement
{
public:
	DialogElementTitle(shared_ptr<IGUI> const& pGui, const string& _title);
	~DialogElementTitle() override;
	void Act() override;
	void SetTitle(const string& _title);
	string const& GetTitle() const;

protected:
	string title{};
};