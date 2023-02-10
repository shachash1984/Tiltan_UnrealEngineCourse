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
	string text = "Hello";

	const char* text_array = text.c_str();

	shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();

	Json::Reader reader;

	
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
	

#pragma region with JSONParser
	
	parser.SetIndexFilePath("Dialogs\\MyDialogIndex.json");
	if (parser.OpenFile(parser.GetIndexFilePath()))
	{
		if (parser.Parse())
		{
		for (int i = 0; i < parser.GetData().size(); i++)
		{
			JSONParser tempParser;
			
			if (tempParser.OpenFile(parser.GetRoot().get(parser.GetData()[i], "Error").asString())) 
			{
				if (tempParser.Parse()) {
					//reader.parse(thisFile, tempParser.GetRoot());

					auto box = std::make_shared<DialogBoxBase>();

					// Title
					//DialogElementTitle d(gui,"");
					box->RegisterElementToOnRender(std::make_shared<DialogElementTitle>
						(gui, tempParser.GetRoot().get("title", "").asString()));

					// Position
					//DialogElementPosition d(gui, point);
					IGUI::Point point;
					point.x = tempParser.GetRoot().get("position", 0).get("x", 0).asInt();
					point.y = tempParser.GetRoot().get("position", 0).get("y", 0).asInt();
					box->RegisterElementToOnCreate(std::make_shared<DialogElementPosition>
						(gui, point));

					// Size
					//DialogElementSize d(gui, 0, 0);
					box->RegisterElementToOnCreate(std::make_shared<DialogElementSize>
						(gui,
							tempParser.GetRoot().get("size", 0).get("width", 0).asInt(),
							tempParser.GetRoot().get("size", 0).get("height", 0).asInt()
							)
					);

					// Text
					const Json::Value& text = tempParser.GetRoot()["text"];
					vector<string> textVector(text.size());
					for (unsigned int index = 0; index < text.size(); ++index)
					{
						textVector[index] = text[index].asString();
					}
					//DialogElementText d(gui, textVector);
					box->RegisterElementToOnRender(std::make_shared<DialogElementText>
						(gui,
							textVector
							)
					);

					// WindowColor
					IGUI::Color windowColor;
					windowColor.r = tempParser.GetRoot().get("window_color", 0).get("r", 0).asFloat();
					windowColor.g = tempParser.GetRoot().get("window_color", 0).get("g", 0).asFloat();
					windowColor.b = tempParser.GetRoot().get("window_color", 0).get("b", 0).asFloat();
					windowColor.a = tempParser.GetRoot().get("window_color", 0).get("a", 0).asFloat();
					//DialogElementWindowColor d(gui, windowColor);
					box->RegisterElementToOnCreate(std::make_shared<DialogElementWindowColor>
						(gui,
							windowColor)
					);

					// WindowColor
					IGUI::Color textColor;
					textColor.r = tempParser.GetRoot().get("text_color", 0).get("r", 0).asFloat();
					textColor.g = tempParser.GetRoot().get("text_color", 0).get("g", 0).asFloat();
					textColor.b = tempParser.GetRoot().get("text_color", 0).get("b", 0).asFloat();
					textColor.a = tempParser.GetRoot().get("text_color", 0).get("a", 0).asFloat();
					//DialogElementTextColor d(gui, textColor);
					box->RegisterElementToOnCreate(std::make_shared<DialogElementTextColor>
						(gui,
							textColor)
					);

					// Buttons 
					const Json::Value& buttons = tempParser.GetRoot()["buttons"];
					//DialogElementButton d(gui, "", 0);
					for (unsigned int index = 0; index < buttons.size(); ++index)
					{
						box->RegisterElementToOnButton(std::make_shared<DialogElementButton>
							(gui,
								buttons[index].get("text", "").asString(),
								buttons[index].get("next", "").asInt()
								)
						);
					}



					gui->AddDialogBox(tempParser.GetRoot().get("id", -1).asInt(), box);

					tempParser.CloseFile();
					//thisFile.close();
				}
			}
		}
		}
			parser.CloseFile();
	}
	

#pragma endregion



#pragma region without JSONParser
		/*

	Json::Value root;
	vector<string> files;

	ifstream fileOfAllFiles("Dialogs\\DialogIndex.json");
	if (fileOfAllFiles.is_open()) 
	{
		reader.parse(fileOfAllFiles, root);
		if (!root.empty()) 
		{
			files.clear();
			for (auto itr = root.begin(); itr != root.end(); ++itr)
			{
				files.push_back(itr.key().asString());
			}
		}

		for (int i = 0; i < files.size(); i++)
		{
			Json::Value tmpRoot;
			//ifstream thisFile(files[i]);
			ifstream thisFile(root.get(files[i],"Error").asString());
			if (thisFile.is_open()) {
				reader.parse(thisFile, tmpRoot);

				auto box = std::make_shared<DialogBoxBase>();

				// Title
				//DialogElementTitle d(gui,"");
				box->RegisterElementToOnRender(std::make_shared<DialogElementTitle>
					(gui, tmpRoot.get("title", "").asString()));

				// Position
				//DialogElementPosition d(gui, point);
				IGUI::Point point;
				point.x = tmpRoot.get("position", 0).get("x", 0).asInt();
				point.y = tmpRoot.get("position", 0).get("y", 0).asInt();
				box->RegisterElementToOnCreate(std::make_shared<DialogElementPosition>
					(gui, point));

				// Size
				//DialogElementSize d(gui, 0, 0);
				box->RegisterElementToOnCreate(std::make_shared<DialogElementSize>
					(gui,
						tmpRoot.get("size", 0).get("width", 0).asInt(),
						tmpRoot.get("size", 0).get("height", 0).asInt()
						)
				);

				// Text
				const Json::Value& text = tmpRoot["text"];
				vector<string> textVector(text.size());
				for (unsigned int index = 0; index < text.size(); ++index)
				{
					textVector[index] = text[index].asString();
				}
				//DialogElementText d(gui, textVector);
				box->RegisterElementToOnRender(std::make_shared<DialogElementText>
					(gui,
						textVector
						)
				);

				// WindowColor
				IGUI::Color windowColor;
				windowColor.r = tmpRoot.get("window_color", 0).get("r", 0).asFloat();
				windowColor.g = tmpRoot.get("window_color", 0).get("g", 0).asFloat();
				windowColor.b = tmpRoot.get("window_color", 0).get("b", 0).asFloat();
				windowColor.a = tmpRoot.get("window_color", 0).get("a", 0).asFloat();
				//DialogElementWindowColor d(gui, windowColor);
				box->RegisterElementToOnCreate(std::make_shared<DialogElementWindowColor>
					(gui,
						windowColor)
				);

				// WindowColor
				IGUI::Color textColor;
				textColor.r = tmpRoot.get("text_color", 0).get("r", 0).asFloat();
				textColor.g = tmpRoot.get("text_color", 0).get("g", 0).asFloat();
				textColor.b = tmpRoot.get("text_color", 0).get("b", 0).asFloat();
				textColor.a = tmpRoot.get("text_color", 0).get("a", 0).asFloat();
				//DialogElementTextColor d(gui, textColor);
				box->RegisterElementToOnCreate(std::make_shared<DialogElementTextColor>
					(gui,
						textColor)
				);

				// Buttons 
				const Json::Value& buttons = tmpRoot["buttons"];
				//DialogElementButton d(gui, "", 0);
				for (unsigned int index = 0; index < buttons.size(); ++index)
				{
					box->RegisterElementToOnButton(std::make_shared<DialogElementButton>
						(gui,
							buttons[index].get("text", "").asString(),
							buttons[index].get("next", "").asInt()
							)
					);
				}



				gui->AddDialogBox(tmpRoot.get("id", -1).asInt(), box);

				thisFile.close();
			}
		}
		fileOfAllFiles.close();
	}
	*/
#pragma endregion

#pragma region JsonExample
	/*
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
	*/
#pragma endregion


	

	 gui->SetStartingDialog(1);

	//cout << "Hello World!" << endl;
	 gui->Run(); //This will run the Gui Engine and start rendering the dialogs


	 return gui->ShutDown();

	//return 0;
}