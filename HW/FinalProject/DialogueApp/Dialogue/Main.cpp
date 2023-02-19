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

	shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();
	JSONParser parser;

	parser.SetIndexFilePath("Dialogs\\DialogIndex.json");
	parser.OpenFile("Dialogs\\DialogIndex.json");
	parser.Parse();

	vector<string> dialogs = parser.GetData();

	for (int i = 0; i < dialogs.size(); i++)
	{
		string tempPath = parser.GetRoot().get((dialogs[i]), 0).asString();
		using namespace std;

		shared_ptr <DialogBoxBase> dBox = make_shared<DialogBoxBase>();
		JSONParser parser;
		parser.OpenFile(tempPath);

		parser.Parse();

		int id = parser.GetRoot().get("id", 0).asInt();

		shared_ptr<DialogElementTitle> dTitle = make_shared<DialogElementTitle>(gui, parser.GetRoot().get("title", "Title").asString());

		//text parsing
		const Json::Value& text = parser.GetRoot().get("text", 0);
		vector<string> textVector(text.size());
		for (unsigned int index = 0; index < text.size(); ++index)
		{
			textVector[index] = text[index].asString();
		}
		shared_ptr<DialogElementText> dText = make_shared<DialogElementText>(gui, textVector);


		//position pars
		IGUI::Point point;
		point.x = parser.GetRoot().get("position", 0).get("x", 0).asInt();
		point.y = parser.GetRoot().get("position", 0).get("y", 0).asInt();
		shared_ptr<DialogElementPosition> dPos = make_shared<DialogElementPosition>(gui, point);


		//size pars
		int width = parser.GetRoot().get("size", 0).get("width", 0).asInt();
		int height = parser.GetRoot().get("size", 0).get("height", 0).asInt();
		shared_ptr<DialogElementSize> dSize = make_shared<DialogElementSize>(gui, width, height);

		//button pars
		const Json::Value& jButtons = parser.GetRoot().get("buttons", 0);
		vector<shared_ptr<IDialogElementButton>> dButtons;


		for (int i = 0; i < jButtons.size(); i++)
		{
			Json::Value unparsedButton = jButtons[i];

			shared_ptr<DialogElementButton> tempButton = std::make_shared<DialogElementButton>(gui, unparsedButton.get("text", "none").asString(), unparsedButton.get("next", 0).asInt());
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

		gui->AddDialogBox(id, dBox);
	}

	gui->SetStartingDialog(1);

	gui->Run(); //This will run the Gui Engine and start rendering the dialogs


	return gui->ShutDown();

	cout << "Hello World!" << endl;
	return 0;
}