#pragma once
#include <vector>

#include "IDialogElement.h"
#include "IGUI.h"

class DialogElementText : public IDialogElement
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