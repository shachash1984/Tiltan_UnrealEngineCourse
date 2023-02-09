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
	//Json::Reader reader;
	string text = "Hello";

	const char* text_array = text.c_str();

	//shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();


	
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

#pragma region JsonExample
	 // json reader
	Json::Reader reader;
	Json::Value root;   // 'root' will contain the root value after parsing.
	vector<string> files;

	ifstream configFile("DialogIndex.json");

	//iterating over all fields in a JSON
	if (configFile.is_open())
	{
		reader.parse(configFile, root);
		if (!root.empty())
		{
			files.clear();

			for (auto itr = root.begin(); itr != root.end(); ++itr)
			{
				files.push_back(itr.key().asString());
			}
		}
	}



	// reading a specific file
	ifstream file("dialog.json");
	// check if file is open
	if (file.is_open())
	{


		// parsing and saving the file
		reader.parse(file, root);

		// parsing a Point
		IGUI::Point point;
		point.x = root.get("position", 0).get("x", 0).asInt();

		// parsing a title
		string title = root.get("title", "No_title").asString();

		// Parsing the "Text" array
		const Json::Value& text = root["text"];
		vector<string> textVector(text.size());

		for (unsigned int index = 0; index < text.size(); ++index)
		{
			textVector[index] = text[index].asString();
		}

		// Parsing a window color
		IGUI::Color windowColor;
		windowColor.r = root.get("window_color", 0).get("r", 0).asFloat();
		windowColor.g = root.get("window_color", 0).get("g", 0).asFloat();
		windowColor.b = root.get("window_color", 0).get("b", 0).asFloat();
		windowColor.a = root.get("window_color", 0).get("a", 0).asFloat();
	}



	cin.ignore();
#pragma endregion


	// gui->SetStartingDialog(1);

//	 gui->Run(); //This will run the Gui Engine and start rendering the dialogs


	 //return gui->ShutDown();

	cout << "Hello World!" << endl;
	return 0;
}