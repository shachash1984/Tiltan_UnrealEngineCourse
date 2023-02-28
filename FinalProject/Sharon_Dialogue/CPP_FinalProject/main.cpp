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
	JSONParser parser;
	JSONParser textParser;

	shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();

	/* This is where your code should go:
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
		C:\GitPulls\Tiltan_UnrealEngineCourse\FinalProject\Sharon_Dialogue\CPP_FinalProject\Dialogs
	 */

	parser.TryParse("Dialogs\\DialogIndex.json");

	for (unsigned int i = 0; i < parser.GetData().size(); i++)
	{
		// new vectors (lists)
		vector<shared_ptr<IDialogCreationElement>> onCreateElements{};
		vector<shared_ptr<IDialogRenderingElement>> onRenderElements{};
		vector<shared_ptr<IDialogElementButton>> onButtonElements{};

		// get data
		string currentDialog = parser.GetRoot().get(parser.GetData()[i], 0).asString();
		textParser.TryParse(currentDialog);

		// try get id as int
		int dialogId = textParser.GetRoot().get("id", "No id found").asInt();

		// try get title as string
		string title = textParser.GetRoot().get("title", "no title found :(").asString();

		// use gui and insert title
		shared_ptr<DialogElementTitle> dialogTitle = make_shared< DialogElementTitle>(gui, title);
		onRenderElements.push_back(dialogTitle);

		// body text
		const Json::Value& textRef = textParser.GetRoot()["text"];
		const Json::Value& spacer = "\n";

		vector<string> textVector(textRef.size());

		for (unsigned int i = 0; i < textRef.size(); i++) {
			//if (i == textRef.size() - 1)
			//	textVector[i] = textRef[i].asString() + spacer;

			textVector[i] = textRef[i].asString();
			//break;
		}

		shared_ptr<DialogElementText> dialogText = make_shared<DialogElementText>(gui, textVector);
		onRenderElements.push_back(dialogText);

		// positions
		IGUI::Point dialogPos;

		// get current position and set final pos
		dialogPos.x = textParser.GetRoot().get("position", "no position found").get("x", "no x poistion found").asInt();
		dialogPos.y = textParser.GetRoot().get("position", "no position found").get("y", "no y poistion found").asInt();
		shared_ptr<DialogElementPosition> finalDialogPos = make_shared<DialogElementPosition>(gui, dialogPos);
		onCreateElements.push_back(finalDialogPos);

		// get size and set size
		dialogPos.x = textParser.GetRoot().get("size", "no position found").get("width", 0).asInt();
		dialogPos.y = textParser.GetRoot().get("size", "no position found").get("height", 0).asInt();
		shared_ptr<DialogElementSize> dialogSize = make_shared<DialogElementSize>(gui, dialogPos.x, dialogPos.y);
		onCreateElements.push_back(dialogSize);

		// colors
		IGUI::Color dialogColor;
		Json::Value windowColor = textParser.GetRoot().get("window_color", "no window color found");
		dialogColor.r = windowColor.get("r", 0).asFloat();
		dialogColor.g = windowColor.get("g", 0).asFloat();
		dialogColor.b = windowColor.get("b", 0).asFloat();
		dialogColor.a = windowColor.get("a", 0).asFloat();

		// set gui background color
		shared_ptr<DialogElementWindowColor> dialogWindowColor = make_shared<DialogElementWindowColor>(gui, dialogColor);
		onCreateElements.push_back(dialogWindowColor);

		// get text color
		Json::Value textColor = textParser.GetRoot().get("text_color", "no text color found");
		dialogColor.r = textColor.get("r", 0).asFloat();
		dialogColor.g = textColor.get("g", 0).asFloat();
		dialogColor.b = textColor.get("b", 0).asFloat();
		dialogColor.a = textColor.get("a", 0).asFloat();
		shared_ptr<DialogElementTextColor> dialogTextColor = make_shared<DialogElementTextColor>(gui, dialogColor);
		onCreateElements.push_back(dialogTextColor);

		// buttons
		const Json::Value& dialogButtons = textParser.GetRoot()["buttons"];
		string text;
		int next;

		// go over all dialog buttons and set their text
		for (unsigned int i = 0; i < dialogButtons.size(); i++)
		{
			text = dialogButtons[i].get("text", "no text found").asString();
			next = dialogButtons[i].get("next", 0).asInt();
			shared_ptr<DialogElementButton> dialogButton = make_shared<DialogElementButton>(gui, text, next);
			onButtonElements.push_back(dialogButton);
		}

		// create dialog box
		shared_ptr<DialogBoxBase> dialogBox = make_shared<DialogBoxBase>();

		// register created elements
		for (int i = 0; i < onCreateElements.size(); i++)
			dialogBox->RegisterElementToOnCreate(onCreateElements[i]);

		// register render elements
		for (int i = 0; i < onRenderElements.size(); i++)
			dialogBox->RegisterElementToOnRender(onRenderElements[i]);

		// register buttons elements
		for (int i = 0; i < onButtonElements.size(); i++)
			dialogBox->RegisterElementToOnButton(onButtonElements[i]);

		// add to dialog
		gui->AddDialogBox(dialogId, dialogBox);
	}

	gui->SetStartingDialog(0);
	gui->Run();

	return gui->ShutDown();
	return 0;
}