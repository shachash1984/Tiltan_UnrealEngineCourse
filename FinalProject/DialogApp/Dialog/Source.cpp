#include <iostream>
#include "JSONParser.h"
#include <GuiEngine.h>
#include <DialogBox.h>
#include <vector>

#include "IDialogElementButton.h"
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
	
	shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();

    //this is where your code should go
    //you should parse the index file and save the files to the JSONParser::data vector
    parser.SetIndexFilePath("Dialogs\\DialogIndex.json");

    cout << parser.GetIndexFilePath() << endl;

    if(!parser.OpenFile(parser.GetIndexFilePath()))
    {
        cout << "File couldn't open" << endl;
        return 0;
    }
    //you should iterate over all the json files in a loop
    //parse each dialog element and add it to the correct vector
    vector<std::shared_ptr<IDialogCreationElement>> onCreateElements{};
    vector<std::shared_ptr<IDialogRenderingElement>> onRenderElements{};
    vector<std::shared_ptr<IDialogElementButton>> onButtonElements{};

    //create a dialogBoxBase and call the correct methods to add each vector of elements
    //call the gui method to add the DialogBox you created to the ap with it's id
    //gui -> AddDialogBox(id,dialogBox);
    //end of loop
    //
    //gui -> set statring dialog (1)
    // gui -> run(); //this will run the Gui engine and start rendering the dialogs
   /* return gui->ShutDown();*/
	return 0;
}