#pragma once
#include "IGUI.h"
#include "IDialogRenderingElement.h"

class DialogElementTitle : public IDialogRenderingElement
{
	public:
		DialogElementTitle(std::shared_ptr<IGUI> const& pGui, const std::string& _title);
		~DialogElementTitle() override;
		void Act() override;
		void SetTitle(const std::string& _title);
		std::string const& GetTitle() const;
	
	protected:
		std::string title{};
};
