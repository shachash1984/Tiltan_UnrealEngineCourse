#pragma once
#include <vector>

#include "IDialogRenderingElement.h"

class DialogElementText : public IDialogRenderingElement
{
public:
	DialogElementText(std::shared_ptr<IGUI> const& pGui, const std::vector<std::string>& _text);
	~DialogElementText() override;
	void Act() override;
	std::vector<std::string> const& GetText() const;
	void SetText(const std::vector<std::string>& _text);

protected:
	std::vector<std::string> text{};

};