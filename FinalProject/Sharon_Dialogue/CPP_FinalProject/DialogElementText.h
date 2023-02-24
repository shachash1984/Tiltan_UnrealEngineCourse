#pragma once
#include "IDialogRenderingElement.h"
#include <vector>

using namespace std;

class DialogElementText : public IDialogRenderingElement
{
public:
	DialogElementText(shared_ptr<IGUI> const& pGui, const vector<string>& _text);
	~DialogElementText() override;
	void Act() override;
	vector<string> const& GetText() const;
	void SetText(const vector<string>& _text);

protected:
	vector<string> text{};
};