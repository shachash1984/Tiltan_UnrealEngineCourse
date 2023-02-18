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

struct DBOX
{
	std::shared_ptr<DialogBoxBase> dialogBox;
	int id;
};

DBOX CreateDialogBox(std::shared_ptr<GuiEngine> _gui, std::string _path)
{
	using namespace std;

	shared_ptr <DialogBoxBase> dBox = make_shared<DialogBoxBase>();
	JSONParser parser;
	parser.OpenFile(_path);

	parser.Parse();

	int id = parser.GetRoot().get("id", 0).asInt();
	//parsing title
	string title = parser.GetRoot().get("title", "Title").asString();
	shared_ptr<DialogElementTitle> dTitle = make_shared<DialogElementTitle>(_gui, title);

	//parsing text
	const Json::Value& text = parser.GetRoot().get("text", 0);
	vector<string> textVector(text.size());
	for (unsigned int index = 0; index < text.size(); ++index)
	{
		textVector[index] = text[index].asString();
	}
	shared_ptr<DialogElementText> dText = make_shared<DialogElementText>(_gui, textVector);


	//parsing position
	IGUI::Point point;
	point.x = parser.GetRoot().get("position", 0).get("x", 0).asInt();
	point.y = parser.GetRoot().get("position", 0).get("y", 0).asInt();
	shared_ptr<DialogElementPosition> dPos = make_shared<DialogElementPosition>(_gui, point);


	//parsing size
	int width = parser.GetRoot().get("size", 0).get("width", 0).asInt();
	int height = parser.GetRoot().get("size", 0).get("height", 0).asInt();
	shared_ptr<DialogElementSize> dSize = make_shared<DialogElementSize>(_gui, width, height);

	//parsing buttons
	const Json::Value& jButtons = parser.GetRoot().get("buttons", 0);
	vector<shared_ptr<IDialogElementButton>> dButtons;


	for (int i = 0; i < jButtons.size(); i++)
	{
		Json::Value unparsedBuutton = jButtons[i];
		string bText = unparsedBuutton.get("text", "none").asString();
		int bNexdID = unparsedBuutton.get("next", 0).asInt();

		shared_ptr<DialogElementButton> tempButton = std::make_shared<DialogElementButton>(_gui, bText, bNexdID);
		dButtons.push_back(tempButton);
	}

	//registering title to dialog box
	dBox->RegisterElementToOnRender(dTitle);

	//registering text to dialog box
	dBox->RegisterElementToOnRender(dText);

	//registering position to dialog box
	dBox->RegisterElementToOnCreate(dPos);

	//registering position to dialog box
	dBox->RegisterElementToOnCreate(dSize);

	//registering buttons to dialog box
	for (auto buttonP : dButtons)
	{
		dBox->RegisterElementToOnButton(buttonP);
	}

	DBOX dialogBox;
	dialogBox.dialogBox = dBox;
	dialogBox.id = id;

	return dialogBox;
}

int main()
{
	using namespace std;

	shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();
	JSONParser parser;

	parser.SetIndexFilePath("Dialogs\\DialogIndex.json");
	parser.OpenFile("Dialogs\\DialogIndex.json");
	parser.Parse();

	vector<string> dialogs = parser.GetData();

	for (int i = 0; i < dialogs.size(); i++)
	{
		string tempPath = parser.GetRoot().get((dialogs[i]), 0).asString();
		DBOX dBox = CreateDialogBox(gui, tempPath);

		gui->AddDialogBox(dBox.id, dBox.dialogBox);
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

	cout << "Hello World!" << endl;
	return 0;
}