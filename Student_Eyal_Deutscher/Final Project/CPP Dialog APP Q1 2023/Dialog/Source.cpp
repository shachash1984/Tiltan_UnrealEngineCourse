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
	//JSONParser parser;
	//JSONParser dialogParser;
	////Json::Reader reader;

	//shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();
	////this is where your code should go
	////you should parse the index file and save the files to the JSONParser::data vector


	//parser.TryParseJSON("Dialogs\\DialogIndex1.json");

	////you should iterate over all the json files in a loop
	////parse each dialog element and add it to the correct vector

	//for (unsigned int i = 0; i < parser.GetData().size(); i++)
	//{
	//	vector<std::shared_ptr<IDialogCreationElement>> onCreateElements{};
	//	vector<std::shared_ptr<IDialogRenderingElement>>onRenderElements{};
	//	vector<std::shared_ptr<IDialogElementButton>> onButtonElements{};

	//	string currentDialog = parser.GetRoot().get(parser.GetData()[i], 0).asString();
	//	dialogParser.TryParseJSON(currentDialog, true);

	//	//ID
	//	int dialogId = dialogParser.GetRoot().get("id", "No id found").asInt();
	//	//Title
	//	string title = dialogParser.GetRoot().get("title", "no title found :(").asString();
	//	DialogElementTitle dialogTitle(gui, title);
	//	onRenderElements.push_back(make_shared<DialogElementTitle>(dialogTitle));
	//	//Text
	//	const Json::Value& textRef = dialogParser.GetRoot()["text"];
	//	vector<string> textVector(textRef.size());
	//	for (unsigned int i = 0; i < textRef.size(); i++)
	//	{
	//		textVector[i] = textRef[i].asString();
	//	}
	//	DialogElementText dialogText(gui, textVector);
	//	onRenderElements.push_back(make_shared<DialogElementText>(dialogText));
	//	//---points---
	//	IGUI::Point dialogPoint;
	//	//Position
	//	dialogPoint.x = dialogParser.GetRoot().get("position", "no position found").get("x", "no x poistion found").asInt();
	//	dialogPoint.y = dialogParser.GetRoot().get("position", "no position found").get("y", "no y poistion found").asInt();
	//	DialogElementPosition dialogPosition(gui, dialogPoint);
	//	onCreateElements.push_back(make_shared<DialogElementPosition>(dialogPosition));
	//	//size
	//	dialogPoint.x = dialogParser.GetRoot().get("size", "no position found").get("width", 0).asInt();
	//	dialogPoint.y = dialogParser.GetRoot().get("size", "no position found").get("hight", 0).asInt();
	//	DialogElementSize dialogSize(gui, dialogPoint.x, dialogPoint.y);
	//	onCreateElements.push_back(make_shared<DialogElementSize>(dialogSize));
	//	//---Colors---
	//	IGUI::Color dialogColor;
	//	//window Color
	//	Json::Value windowColor = dialogParser.GetRoot().get("window_color", "no window color found");
	//	dialogColor.r = windowColor.get("r", 0).asFloat();
	//	dialogColor.g = windowColor.get("g", 0).asFloat();
	//	dialogColor.b = windowColor.get("b", 0).asFloat();
	//	dialogColor.a = windowColor.get("a", 0).asFloat();
	//	DialogElementWindowColor dialogWindowColor(gui, dialogColor);
	//	onCreateElements.push_back(make_shared<DialogElementWindowColor>(dialogColor));
	//	//text Color
	//	Json::Value textColor = dialogParser.GetRoot().get("text_color", "no text color found");
	//	dialogColor.r = textColor.get("r", 0).asFloat();
	//	dialogColor.g = textColor.get("g", 0).asFloat();
	//	dialogColor.b = textColor.get("b", 0).asFloat();
	//	dialogColor.a = textColor.get("a", 0).asFloat();
	//	DialogElementTextColor dialogTextColor(gui, dialogColor);
	//	onCreateElements.push_back(make_shared<DialogElementTextColor>(dialogColor));
	//	//---Buttons---
	//	const Json::Value& dialogButtons = dialogParser.GetRoot()["buttons"];

	//	string text;
	//	int next;
	//	for (unsigned int i = 0; i < dialogButtons.size(); i++)
	//	{
	//		text = dialogButtons[i].get("text", "no text found").asString();
	//		next = dialogButtons[i].get("next", 0).asInt();
	//		DialogElementButton dialogButton(gui, text, next);
	//		onButtonElements.push_back(make_shared<DialogElementButton>(dialogButton));
	//	}

	//	//---Creating Dialog Box---
	//	DialogBoxBase dialogBox;

	//	//Registering Create Elements
	//		for (int i = 0; i < onCreateElements.size(); i++)
	//		{
	//			dialogBox.RegisterElementToOnCreate(onCreateElements[i]);
	//		}

	//	// Registering Render Elements
	//	for (int i = 0; i < onCreateElements.size(); i++)
	//	{
	//		dialogBox.RegisterElementToOnRender(onRenderElements[i]);
	//	}


	//	// Registering Button Elements
	//	for (int i = 0; i < onButtonElements.size(); i++)
	//	{
	//		dialogBox.RegisterElementToOnButton(onButtonElements[i]);
	//	}

	//	gui->AddDialogBox(dialogId, make_shared<DialogBoxBase>(dialogBox));
	//	//create a dialogBoxBase and call the correct methods to add each vector of elements
	//	//call the gui method to add the DialogBox you created to the ap with it's id
	//	//end of loop
	//}
	//gui->SetStartingDialog(1);
	//gui->Run();//this will run the Gui engine and start rendering the dialogs
	//return gui->ShutDown();
return 0;
}