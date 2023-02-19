#include  <iostream>
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
	JSONParser dialogParser;

	vector<string> dialog_Path;
	vector<string> files;

	shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();

	parser.SetIndexFilePath("Resources\\DialogIndex.json");
	if(parser.OpenFile(parser.GetIndexFilePath()))
	{
		files = parser.GetData();
			for (auto file : files)
			{
				string path = parser.GetRoot().get(file, "no dialog").asString();
				dialog_Path.push_back(path);
			}
	}

	for (unsigned int dialog = 0; dialog < dialog_Path.size(); dialog++)
{
	dialogParser.SetIndexFilePath(dialog_Path[dialog]);
	if (dialogParser.OpenFile(dialogParser.GetIndexFilePath()))
	{
		std::vector<std::shared_ptr<IDialogCreationElement>> onCreateElements{};
		std::vector<std::shared_ptr<IDialogRenderingElement>> onRenderElements{};
		std::vector<std::shared_ptr<IDialogElementButton>> onButtonElements{};
		if (dialogParser.Parse())
		{

			// parsing a ID
			int dialogId = dialogParser.GetRoot().get("id", "no ID").asInt();

			// parsing a title
			string title = dialogParser.GetRoot().get("title", "No_title").asString();
			shared_ptr<DialogElementTitle> dialogTitle = make_shared< DialogElementTitle>(gui, title);
			onRenderElements.push_back(dialogTitle);

			// Parsing the "Text" array
			const Json::Value& text = dialogParser.GetRoot()["text"];
			vector<string> textVector(text.size());

			for (unsigned int index = 0; index < text.size(); ++index)
			{
				textVector[index] = text[index].asString();
			}
			shared_ptr<DialogElementText> dialogText = make_shared< DialogElementText>(gui, textVector);
			onRenderElements.push_back(dialogText);

			// parsing a Point
			IGUI::Point point;
			point.x = dialogParser.GetRoot().get("position", 0).get("x", 0).asInt();
			point.y = dialogParser.GetRoot().get("position", 0).get("y", 0).asInt();
			shared_ptr<DialogElementPosition> dialogPosition = make_shared< DialogElementPosition>(gui, point);
			onCreateElements.push_back(dialogPosition);

			// parsing a Size
			int width = dialogParser.GetRoot().get("size", 0).get("width", 0).asInt();
			int height = dialogParser.GetRoot().get("size", 0).get("height", 0).asInt();
			shared_ptr<DialogElementSize> dialogSize = make_shared< DialogElementSize>(gui, width, height);
			onCreateElements.push_back(dialogSize);

			// Parsing a window color
			IGUI::Color windowColor;
			windowColor.r = dialogParser.GetRoot().get("window_color", 0).get("r", 0).asFloat();
			windowColor.g = dialogParser.GetRoot().get("window_color", 0).get("g", 0).asFloat();
			windowColor.b = dialogParser.GetRoot().get("window_color", 0).get("b", 0).asFloat();
			windowColor.a = dialogParser.GetRoot().get("window_color", 0).get("a", 0).asFloat();
			shared_ptr<DialogElementWindowColor> dialogWindowColor = make_shared< DialogElementWindowColor>(gui, windowColor);
			onCreateElements.push_back(dialogWindowColor);



			// Parsing a text color
			IGUI::Color textColor;
			textColor.r = dialogParser.GetRoot().get("text_color", 0).get("r", 0).asFloat();
			textColor.g = dialogParser.GetRoot().get("text_color", 0).get("g", 0).asFloat();
			textColor.b = dialogParser.GetRoot().get("text_color", 0).get("b", 0).asFloat();
			textColor.a = dialogParser.GetRoot().get("text_color", 0).get("a", 0).asFloat();
			shared_ptr<DialogElementTextColor> dialogTextColor = make_shared< DialogElementTextColor>(gui, textColor);
			onCreateElements.push_back(dialogTextColor);

			// Parsing a button
			const Json::Value& buttons = dialogParser.GetRoot()["buttons"];
			//DialogElementButton d(gui, "", 0);
			for (unsigned int index = 0; index < buttons.size(); ++index)
			{
				buttons[index].get("text", "").asString(),
				buttons[index].get("next", "").asInt();
				shared_ptr<DialogElementButton> dialogButton = make_shared< DialogElementButton>(gui, buttons[index].get("text", "").asString(),
					buttons[index].get("next", "").asInt());
				onButtonElements.push_back(dialogButton);
			}

			auto dialogBox = std::make_shared<DialogBoxBase>();


			for (int i = 0; i < onCreateElements.size(); i++)
			{
				dialogBox->RegisterElementToOnCreate(onCreateElements[i]);
			}

			for (int i = 0; i < onRenderElements.size(); i++)
			{
				dialogBox->RegisterElementToOnRender(onRenderElements[i]);
			}


			for (int i = 0; i < onButtonElements.size(); i++)
			{
				dialogBox->RegisterElementToOnButton(onButtonElements[i]);
			}

			gui->AddDialogBox(dialogId, dialogBox);

			dialogParser.CloseFile();
		}
	}
}
		gui->SetStartingDialog(1);
		gui->Run();
		return gui->ShutDown();
}
