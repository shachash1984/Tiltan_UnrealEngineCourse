#include <JSONParser.h>

#include <GuiEngine.h>
#include <DialogBox.h>

#include "DialogElementButton.h"
#include "DialogElementPosition.h"
#include "DialogElementSize.h"
#include "DialogElementText.h"
#include "DialogElementTextColor.h"
#include "DialogElementTitle.h"
#include "DialogElementWindowColor.h"

int main()
{
	JSONParser dialogParser;
	JSONParser textParser;

	shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();
	dialogParser.TryParse("Dialogs\\DialogIndex.json");

	for (unsigned int i = 0; i < dialogParser.GetData().size(); i++)
	{
		//Empty lists for dialogue elements
		vector<shared_ptr<IDialogCreationElement>> onCreateElements{};
		vector<shared_ptr<IDialogRenderingElement>> onRenderElements{};
		vector<shared_ptr<IDialogElementButton>> onButtonElements{};

		//Try parse text data
		string currentDialog = dialogParser.GetRoot().get(dialogParser.GetData()[i], 0).asString();
		textParser.TryParse(currentDialog);

		//Try get ID as int
		int dialogId = textParser.GetRoot().get("id", "ID not found").asInt();

		//Try get title as string
		string title = textParser.GetRoot().get("title", "Title not found").asString();

		//Enter title
		shared_ptr<DialogElementTitle> dialogTitle = make_shared< DialogElementTitle>(gui, title);
		onRenderElements.push_back(dialogTitle);

		//Get text body
		const Json::Value& textRef = textParser.GetRoot()["text"];

		vector<string> textVector(textRef.size());

		for (unsigned int i = 0; i < textRef.size(); i++)
			textVector[i] = textRef[i].asString();

		shared_ptr<DialogElementText> dialogText = make_shared<DialogElementText>(gui, textVector);
		onRenderElements.push_back(dialogText);

		IGUI::Point dialogPos;

		dialogPos.x = textParser.GetRoot().get("position", "Position not found").get("x", "X position not found").asInt();
		dialogPos.y = textParser.GetRoot().get("position", "Position not found").get("y", "Y position not found").asInt();
		shared_ptr<DialogElementPosition> finalDialogPos = make_shared<DialogElementPosition>(gui, dialogPos);
		onCreateElements.push_back(finalDialogPos);

		dialogPos.x = textParser.GetRoot().get("size", "no position found").get("width", 0).asInt();
		dialogPos.y = textParser.GetRoot().get("size", "no position found").get("height", 0).asInt();
		shared_ptr<DialogElementSize> dialogSize = make_shared<DialogElementSize>(gui, dialogPos.x, dialogPos.y);
		onCreateElements.push_back(dialogSize);

		IGUI::Color dialogColor;
		Json::Value windowColor = textParser.GetRoot().get("window_color", "Window color not found");
		dialogColor.r = windowColor.get("r", 0).asFloat();
		dialogColor.g = windowColor.get("g", 0).asFloat();
		dialogColor.b = windowColor.get("b", 0).asFloat();
		dialogColor.a = windowColor.get("a", 0).asFloat();

		shared_ptr<DialogElementWindowColor> dialogWindowColor = make_shared<DialogElementWindowColor>(gui, dialogColor);
		onCreateElements.push_back(dialogWindowColor);

		Json::Value textColor = textParser.GetRoot().get("text_color", "Text color not found");
		dialogColor.r = textColor.get("r", 0).asFloat();
		dialogColor.g = textColor.get("g", 0).asFloat();
		dialogColor.b = textColor.get("b", 0).asFloat();
		dialogColor.a = textColor.get("a", 0).asFloat();
		shared_ptr<DialogElementTextColor> dialogTextColor = make_shared<DialogElementTextColor>(gui, dialogColor);
		onCreateElements.push_back(dialogTextColor);

		const Json::Value& dialogButtons = textParser.GetRoot()["buttons"];
		string text;
		int next;

		//Loop over all dialog buttons and set text
		for (unsigned int i = 0; i < dialogButtons.size(); i++)
		{
			text = dialogButtons[i].get("text", "Text not found").asString();
			next = dialogButtons[i].get("next", 0).asInt();
			shared_ptr<DialogElementButton> dialogButton = make_shared<DialogElementButton>(gui, text, next);
			onButtonElements.push_back(dialogButton);
		}

		shared_ptr<DialogBoxBase> dialogBox = make_shared<DialogBoxBase>();

		//Register created elements
		for (int i = 0; i < onCreateElements.size(); i++)
			dialogBox->RegisterElementToOnCreate(onCreateElements[i]);

		//Register render elements
		for (int i = 0; i < onRenderElements.size(); i++)
			dialogBox->RegisterElementToOnRender(onRenderElements[i]);

		//Register buttons elements
		for (int i = 0; i < onButtonElements.size(); i++)
			dialogBox->RegisterElementToOnButton(onButtonElements[i]);

		gui->AddDialogBox(dialogId, dialogBox);
	}

	gui->SetStartingDialog(0);
	gui->Run();

	return gui->ShutDown();
	return 0;
}