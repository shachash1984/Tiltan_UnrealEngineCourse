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
	Json::Reader reader;
	string text = "Hello";

	const char* text_array = text.c_str();

	shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();
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