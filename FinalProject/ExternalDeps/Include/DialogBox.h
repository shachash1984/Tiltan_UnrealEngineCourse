#pragma once
#include <vector>
#include <memory>
#include "IDialogElementButton.h"
#include "IDialogCreationElement.h"
#include "IDialogRenderingElement.h"
#include "GUI_Engine_API_Defines.h"


class DialogBoxBase
{
public:
	GUI_ENGINE_API DialogBoxBase();
	GUI_ENGINE_API virtual void OnCreateDialogBox();
	GUI_ENGINE_API virtual void OnRenderDialogBox();
	GUI_ENGINE_API virtual void OnButtonDialogBox();
	GUI_ENGINE_API virtual void RegisterElementToOnCreate(std::shared_ptr<IDialogCreationElement> const& element);
	GUI_ENGINE_API virtual void RegisterElementToOnRender(std::shared_ptr<IDialogRenderingElement> const& element);
	GUI_ENGINE_API virtual void RegisterElementToOnButton(std::shared_ptr<IDialogElementButton> const& element);

	//GUI_ENGINE_API DialogBoxBase(std::string title, std::vector<std::string> message, std::string button, std::function<void()> callback, std::shared_ptr<DialogBoxBase> nextDialogBox = nullptr);
	//GUI_ENGINE_API void SetTitle(const std::string& title);
	//GUI_ENGINE_API std::string const & GetTitle() const;
	//GUI_ENGINE_API void SetText(const std::vector<std::string>& text);
	//GUI_ENGINE_API std::vector<std::string> const& GetText() const;
	//GUI_ENGINE_API void SetButton(const std::string& button);
	//GUI_ENGINE_API std::string const& GetButton() const;
	//GUI_ENGINE_API std::function<void()> GetButtonCallback() const;
	//GUI_ENGINE_API void SetButtonCallback(std::function<void()> callback);
	//GUI_ENGINE_API std::shared_ptr<DialogBoxBase> GetNextDialogBox() const;
	//GUI_ENGINE_API void SetNextDialogBox(std::shared_ptr<DialogBoxBase> nextDialogBox);
	
protected:

	std::vector<std::shared_ptr<IDialogCreationElement>> onCreateElements{};
	std::vector<std::shared_ptr<IDialogRenderingElement>> onRenderElements{};
	std::vector<std::shared_ptr<IDialogElementButton>> onButtonElements{};

	/*std::string m_title{};
	std::vector<std::string> m_text{};
	std::string m_button{};
	std::function<void()> m_buttonCallback{};
	std::shared_ptr<DialogBoxBase> m_pNext{};*/
	
	
};