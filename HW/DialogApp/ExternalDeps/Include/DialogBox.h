#pragma once
#include <vector>
#include <memory>
#include "IDialogElement.h"
#include "IDialogElementButton.h"

#include "GUI_Engine_API_Defines.h"

class DialogBoxBase
{
public:
	GUI_ENGINE_API DialogBoxBase();
	GUI_ENGINE_API virtual void OnCreateDialogBox();
	GUI_ENGINE_API virtual void OnRenderDialogBox();
	GUI_ENGINE_API virtual void OnButtonDialogBox();
	GUI_ENGINE_API virtual void RegisterElementToOnCreate(std::shared_ptr<IDialogElement> const& element);
	GUI_ENGINE_API virtual void RegisterElementToOnRender(std::shared_ptr<IDialogElement> const& element);
	GUI_ENGINE_API virtual void RegisterElementToOnButton(std::shared_ptr<IDialogElementButton> const& element);

	
	std::vector<std::shared_ptr<IDialogElementButton>> onButtonElements{};
protected:
	std::vector<std::shared_ptr<IDialogElement>> onCreateElements{};
	std::vector<std::shared_ptr<IDialogElement>> onRenderElements{};
	

	
	
	
};