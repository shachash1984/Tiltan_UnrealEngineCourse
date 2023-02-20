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

	shared_ptr<GuiEngine> guiEngine = make_shared<GuiEngine>();

	parser.ParseJSON("Dialogues\\DialogueIndex.json");

	for (size_t i = 0; i < parser.GetData().size(); i++)
	{
		// --------------------
		// Vectors of the Elements
		std::vector<std::shared_ptr<IDialogCreationElement>> onCreateElements{};
		std::vector<std::shared_ptr<IDialogRenderingElement>> onRenderElements{};
		std::vector<std::shared_ptr<IDialogElementButton>> onButtonElements{};

		string currentDialogue = parser.GetRoot().get(parser.GetData()[i], 0).asString();
		dialogueParser.ParseJSON(currentDialogue);

		int id = dialogueParser.GetRoot().get("id", "No id found").asInt();

		// --------------------
		// Title
		string title = dialogueParser.GetRoot().get("title", "no title found :(").asString();
		shared_ptr<DialogElementTitle> dialogueTitle = make_shared< DialogElementTitle>(guiEngine, title);
		onRenderElements.push_back(dialogueTitle);

		// --------------------
		// Text
		const Json::Value& textRef = dialogueParser.GetRoot()["text"];
		vector<string> textVector(textRef.size());
		for (unsigned int i = 0; i < textRef.size(); i++)
		{
			textVector[i] = textRef[i].asString();
		}
		shared_ptr<DialogElementText> dialogueText = make_shared<DialogElementText>(guiEngine, textVector);
		onRenderElements.push_back(dialogueText);

		// --------------------
		// Points
		IGUI::Point dialoguePoint;

		// --------------------
		// Position
		dialoguePoint.x = dialogueParser.GetRoot().get("position", "no position found").get("x", "no x poistion found").asInt();
		dialoguePoint.y = dialogueParser.GetRoot().get("position", "no position found").get("y", "no y poistion found").asInt();
		shared_ptr<DialogElementPosition> dialoguePosition = make_shared<DialogElementPosition>(guiEngine, dialoguePoint);
		onCreateElements.push_back(dialoguePosition);

		// --------------------
		// Size
		dialoguePoint.x = dialogueParser.GetRoot().get("size", "no position found").get("width", 0).asInt();
		dialoguePoint.y = dialogueParser.GetRoot().get("size", "no position found").get("height", 0).asInt();
		shared_ptr<DialogElementSize> dialogueSize = make_shared<DialogElementSize>(guiEngine, dialoguePoint.x, dialoguePoint.y);
		onCreateElements.push_back(dialogueSize);

		// --------------------
		// Colors
		IGUI::Color dialogueColor;

		// --------------------
		// Window Color
		Json::Value windowColor = dialogueParser.GetRoot().get("window_color", "no window color found");
		dialogueColor.r = windowColor.get("r", 0).asFloat();
		dialogueColor.g = windowColor.get("g", 0).asFloat();
		dialogueColor.b = windowColor.get("b", 0).asFloat();
		dialogueColor.a = windowColor.get("a", 0).asFloat();

		shared_ptr<DialogElementWindowColor> dialogueWindowColor = make_shared<DialogElementWindowColor>(guiEngine, dialogueColor);
		onCreateElements.push_back(dialogueWindowColor);

		// --------------------
		// Text Color
		Json::Value textColor = dialogueParser.GetRoot().get("text_color", "no text color found");
		dialogueColor.r = textColor.get("r", 0).asFloat();
		dialogueColor.g = textColor.get("g", 0).asFloat();
		dialogueColor.b = textColor.get("b", 0).asFloat();
		dialogueColor.a = textColor.get("a", 0).asFloat();

		shared_ptr<DialogElementTextColor> dialogueTextColor = make_shared<DialogElementTextColor>(guiEngine, dialogueColor);
		onCreateElements.push_back(dialogueTextColor);

		// --------------------
		// Buttons
		const Json::Value& dialogueButtons = dialogueParser.GetRoot()["buttons"];

		string text;
		int next;
		for (unsigned int i = 0; i < dialogueButtons.size(); i++)
		{
			text = dialogueButtons[i].get("text", "no text found").asString();
			next = dialogueButtons[i].get("next", 0).asInt();
			shared_ptr<DialogElementButton> dialogueButton = make_shared<DialogElementButton>(guiEngine, text, next);
			onButtonElements.push_back(dialogueButton);
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

		guiEngine->AddDialogBox(id, dialogueBox);
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


	guiEngine->SetStartingDialog(1);

	guiEngine->Run();


	return guiEngine->ShutDown();
}