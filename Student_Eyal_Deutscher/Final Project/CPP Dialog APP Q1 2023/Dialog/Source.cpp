#include <iostream>
#include <JSONParser.h>
#include <vector>
#include <fstream>


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
	JSONParser dialogParser;
	//Json::Reader reader;

	shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();
	//this is where your code should go
	//you should parse the index file and save the files to the JSONParser::data vector


	parser.TryParseJSON("Dialogs\\DialogIndex.json");

	//you should iterate over all the json files in a loop
	//parse each dialog element and add it to the correct vector

	for (unsigned int i = 0; i < parser.GetData().size(); i++)
	{
		vector<std::shared_ptr<IDialogCreationElement>> onCreateElements{};
		vector<std::shared_ptr<IDialogRenderingElement>>onRenderElements{};
		vector<std::shared_ptr<IDialogElementButton>> onButtonElements{};

		string currentDialog = parser.GetRoot().get(parser.GetData()[i], 0).asString();
		dialogParser.TryParseJSON(currentDialog, true);

		//ID
		int dialogId = dialogParser.GetRoot().get("id", "No id found").asInt();
		//Title
		string title = dialogParser.GetRoot().get("title", "no title found :(").asString();
		shared_ptr<DialogElementTitle> dialogTitle = make_shared< DialogElementTitle>(gui, title);
		onRenderElements.push_back(dialogTitle);
		//Text
		const Json::Value& textRef = dialogParser.GetRoot()["text"];
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
		dialogPoint.x = dialogParser.GetRoot().get("position", "no position found").get("x", "no x poistion found").asInt();
		dialogPoint.y = dialogParser.GetRoot().get("position", "no position found").get("y", "no y poistion found").asInt();
		shared_ptr<DialogElementPosition> dialogPosition = make_shared<DialogElementPosition>(gui, dialogPoint);
		onCreateElements.push_back(dialogPosition);
		//size
		dialogPoint.x = dialogParser.GetRoot().get("size", "no position found").get("width", 0).asInt();
		dialogPoint.y = dialogParser.GetRoot().get("size", "no position found").get("height", 0).asInt();
		shared_ptr<DialogElementSize> dialogSize = make_shared<DialogElementSize>(gui, dialogPoint.x, dialogPoint.y);
		onCreateElements.push_back(dialogSize);
		//---Colors---
		IGUI::Color dialogColor;
		//window Color
		Json::Value windowColor = dialogParser.GetRoot().get("window_color", "no window color found");
		dialogColor.r = windowColor.get("r", 0).asFloat();
		dialogColor.g = windowColor.get("g", 0).asFloat();
		dialogColor.b = windowColor.get("b", 0).asFloat();
		dialogColor.a = windowColor.get("a", 0).asFloat();

		//DialogElementWindowColor dialogWindowColor(gui, dialogColor);
		shared_ptr<DialogElementWindowColor> dialogWindowColor = make_shared<DialogElementWindowColor>(gui, dialogColor);
		onCreateElements.push_back(dialogWindowColor);

		////text Color
		Json::Value textColor = dialogParser.GetRoot().get("text_color", "no text color found");
		dialogColor.r = textColor.get("r", 0).asFloat();
		dialogColor.g = textColor.get("g", 0).asFloat();
		dialogColor.b = textColor.get("b", 0).asFloat();
		dialogColor.a = textColor.get("a", 0).asFloat();

		shared_ptr<DialogElementTextColor> dialogTextColor = make_shared<DialogElementTextColor>(gui, dialogColor);
		onCreateElements.push_back(dialogTextColor);
		//---Buttons---
		const Json::Value& dialogButtons = dialogParser.GetRoot()["buttons"];

		string text;
		int next;
		for (unsigned int i = 0; i < dialogButtons.size(); i++)
		{
			text = dialogButtons[i].get("text", "no text found").asString();
			next = dialogButtons[i].get("next", 0).asInt();
			shared_ptr<DialogElementButton> dialogButton = make_shared<DialogElementButton>(gui, text, next);
			onButtonElements.push_back(dialogButton);
		}
		//---Creating Dialog Box---
		shared_ptr<DialogBoxBase> dialogBox = make_shared<DialogBoxBase>();

		//Registering Create Elements
		for (int i = 0; i < onCreateElements.size(); i++)
		{
			dialogBox->RegisterElementToOnCreate(onCreateElements[i]);
		}

		//Registering Render Elements
		for (int i = 0; i < onRenderElements.size(); i++)
		{
			dialogBox->RegisterElementToOnRender(onRenderElements[i]);
		}


		// Registering Button Elements
		for (int i = 0; i < onButtonElements.size(); i++)
		{
			dialogBox->RegisterElementToOnButton(onButtonElements[i]);
		}

		gui->AddDialogBox(dialogId, dialogBox);
		//create a dialogBoxBase and call the correct methods to add each vector of elements
		//call the gui method to add the DialogBox you created to the ap with it's id
		//end of loop
	}
	gui->SetStartingDialog(1);
	gui->Run();//this will run the Gui engine and start rendering the dialogs
	return gui->ShutDown();
return 0;
}