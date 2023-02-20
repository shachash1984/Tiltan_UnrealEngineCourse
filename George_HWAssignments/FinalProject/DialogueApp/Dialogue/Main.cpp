#include <iostream>
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
	using namespace std;

	JSONParser parser;
	JSONParser dialogueParser;
	Json::Reader reader;

	shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();

	parser.ParseJSON("Dialogues\\DialogueIndex.json");

	for (size_t i = 0; i < parser.GetData().size(); i++)
	{
		std::vector<std::shared_ptr<IDialogCreationElement>> onCreateElements{};
		std::vector<std::shared_ptr<IDialogRenderingElement>> onRenderElements{};
		std::vector<std::shared_ptr<IDialogElementButton>> onButtonElements{};

		string currentDialog = parser.GetRoot().get(parser.GetData()[i], 0).asString();
		dialogueParser.ParseJSON(currentDialog);

		int id = dialogueParser.GetRoot().get("id", "No id found").asInt();

		//Title
		string title = dialogueParser.GetRoot().get("title", "no title found :(").asString();
		shared_ptr<DialogElementTitle> dialogTitle = make_shared< DialogElementTitle>(gui, title);
		onRenderElements.push_back(dialogTitle);

		//Text
		const Json::Value& textRef = dialogueParser.GetRoot()["text"];
		vector<string> textVector(textRef.size());
		for (unsigned int i = 0; i < textRef.size(); i++)
		{
			textVector[i] = textRef[i].asString();
		}
		shared_ptr<DialogElementText> dialogText = make_shared<DialogElementText>(gui, textVector);
		onRenderElements.push_back(dialogText);

		//---points---
		IGUI::Point dialogPoint;

		//Position
		dialogPoint.x = dialogueParser.GetRoot().get("position", "no position found").get("x", "no x poistion found").asInt();
		dialogPoint.y = dialogueParser.GetRoot().get("position", "no position found").get("y", "no y poistion found").asInt();
		shared_ptr<DialogElementPosition> dialogPosition = make_shared<DialogElementPosition>(gui, dialogPoint);
		onCreateElements.push_back(dialogPosition);
		//size
		dialogPoint.x = dialogueParser.GetRoot().get("size", "no position found").get("width", 0).asInt();
		dialogPoint.y = dialogueParser.GetRoot().get("size", "no position found").get("height", 0).asInt();
		shared_ptr<DialogElementSize> dialogSize = make_shared<DialogElementSize>(gui, dialogPoint.x, dialogPoint.y);
		onCreateElements.push_back(dialogSize);

		//---Colors---
		IGUI::Color dialogColor;

		//window Color
		Json::Value windowColor = dialogueParser.GetRoot().get("window_color", "no window color found");
		dialogColor.r = windowColor.get("r", 0).asFloat();
		dialogColor.g = windowColor.get("g", 0).asFloat();
		dialogColor.b = windowColor.get("b", 0).asFloat();
		dialogColor.a = windowColor.get("a", 0).asFloat();

		//DialogElementWindowColor dialogWindowColor(gui, dialogColor);
		shared_ptr<DialogElementWindowColor> dialogWindowColor = make_shared<DialogElementWindowColor>(gui, dialogColor);
		onCreateElements.push_back(dialogWindowColor);

		////text Color
		Json::Value textColor = dialogueParser.GetRoot().get("text_color", "no text color found");
		dialogColor.r = textColor.get("r", 0).asFloat();
		dialogColor.g = textColor.get("g", 0).asFloat();
		dialogColor.b = textColor.get("b", 0).asFloat();
		dialogColor.a = textColor.get("a", 0).asFloat();

		shared_ptr<DialogElementTextColor> dialogTextColor = make_shared<DialogElementTextColor>(gui, dialogColor);
		onCreateElements.push_back(dialogTextColor);

		//---Buttons---
		const Json::Value& dialogButtons = dialogueParser.GetRoot()["buttons"];

		string text;
		int next;
		for (unsigned int i = 0; i < dialogButtons.size(); i++)
		{
			text = dialogButtons[i].get("text", "no text found").asString();
			next = dialogButtons[i].get("next", 0).asInt();
			shared_ptr<DialogElementButton> dialogButton = make_shared<DialogElementButton>(gui, text, next);
			onButtonElements.push_back(dialogButton);
		}

		// ------------------------------------------------------------
		// DialogBoxBase Creation & Assignment
		shared_ptr<DialogBoxBase> dialogueBox = make_shared<DialogBoxBase>();

		for (int i = 0; i < onCreateElements.size(); i++)
		{
			dialogueBox->RegisterElementToOnCreate(onCreateElements[i]);
		}

		for (int i = 0; i < onRenderElements.size(); i++)
		{
			dialogueBox->RegisterElementToOnRender(onRenderElements[i]);
		}


		for (int i = 0; i < onButtonElements.size(); i++)
		{
			dialogueBox->RegisterElementToOnButton(onButtonElements[i]);
		}

		gui->AddDialogBox(id, dialogueBox);
	}
	/*
	 * This is where your code should go:
	 *
	 * you should parse the index file and save the files to the JSONParser::data vector
	 *
	 * you should iterate over all the json files in a loop
	 * parse each dialog file
	 *
	 * parse each dialog element and add it to the correct vector:
	 *  std::vector<std::shared_ptr<IDialogCreationElement>> onCreateElements{};
		std::vector<std::shared_ptr<IDialogRenderingElement>> onRenderElements{};
		std::vector<std::shared_ptr<IDialogElementButton>> onButtonElements{};

		Create a DialogBoxBase and call the correct methods to add each vector of elements

		call the gui method to add the DialogBox you created to the map with it's id
		gui->AddDialogBox(id, dialogBox);
	 *
	 *
	 */


	gui->SetStartingDialog(1);

	gui->Run(); //This will run the Gui Engine and start rendering the dialogs


	return gui->ShutDown();
}