#include <iostream>
#include "JSONParser.h"
#include <GuiEngine.h>
#include <DialogBox.h>
#include <vector>

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
	Json::Reader reader;
	
	shared_ptr<GuiEngine> gui = make_shared<GuiEngine>();

    //this is where your code should go
    //you should parse the index file and save the files to the JSONParser::data vector

    parser.TryParseJSON("Dialogs\\DialogIndex.json");

    for (int index = 0; index < parser.GetData().size(); index++)
    {
        string currentDialog = parser.GetRoot().get(parser.GetData()[index], 0).asString();
        cout << "currentDialog: " + currentDialog << endl;
    
        dialogParser.TryParseJSON(currentDialog, true);
        /* */
        vector<shared_ptr<IDialogCreationElement>> onCreateElements{};
        vector<shared_ptr<IDialogRenderingElement>> onRenderElements{};
        vector<shared_ptr<IDialogElementButton>> onButtonElements{};
        // ID
        int dialogID = dialogParser.GetRoot().get("id", 0).asInt();

        // Title
        string dialogTitle = dialogParser.GetRoot().get("title", "no title found").asString();

        shared_ptr<DialogElementTitle> boxTitle = make_shared< DialogElementTitle>(gui, dialogTitle);
        onRenderElements.push_back(boxTitle);

        // Text
        const Json::Value& textRef = dialogParser.GetRoot()["text"];
        vector<string> dialogText(textRef.size());

        for (unsigned int i = 0; i < textRef.size(); i++)
        {
            dialogText[i] = textRef[i].asString();
        }

        shared_ptr<DialogElementText> boxText = make_shared<DialogElementText>(gui, dialogText);
        onRenderElements.push_back(boxText);

        // ----- Points -----
        IGUI::Point dialogPoint;

        // Position
        dialogPoint.x = dialogParser.GetRoot().get("position", 0).get("x", 0).asInt();
        dialogPoint.y = dialogParser.GetRoot().get("position", 0).get("y", 0).asInt();

        shared_ptr<DialogElementPosition> boxPosition = make_shared<DialogElementPosition>(gui, dialogPoint);
        onCreateElements.push_back(boxPosition);
        
        // Size
        dialogPoint.x = dialogParser.GetRoot().get("size", 0).get("width", 0).asInt();
        dialogPoint.y = dialogParser.GetRoot().get("size", 0).get("height", 0).asInt();

        shared_ptr<DialogElementSize> boxSize = make_shared<DialogElementSize>(gui, dialogPoint.x, dialogPoint.y);
        onCreateElements.push_back(boxSize);

        // ----- Colors -----
        IGUI::Color dialogColor;

        // Window Color
        Json::Value windowColorValues = dialogParser.GetRoot().get("window_color", 0);
        dialogColor.r = windowColorValues.get("r", 0).asFloat();
        dialogColor.g = windowColorValues.get("g", 0).asFloat();
        dialogColor.b = windowColorValues.get("b", 0).asFloat();
        dialogColor.a = windowColorValues.get("a", 0).asFloat();


        shared_ptr<DialogElementWindowColor> boxWindowColor = make_shared<DialogElementWindowColor>(gui, dialogColor);
        onCreateElements.push_back(boxWindowColor);


        // Text Color
        Json::Value textColorValues = dialogParser.GetRoot().get("text_color", 0);
        dialogColor.r = textColorValues.get("r", 0).asFloat();
        dialogColor.g = textColorValues.get("g", 0).asFloat();
        dialogColor.b = textColorValues.get("b", 0).asFloat();
        dialogColor.a = textColorValues.get("a", 0).asFloat();

        shared_ptr<DialogElementTextColor> boxTextColor = make_shared<DialogElementTextColor>(gui, dialogColor);
        onCreateElements.push_back(boxTextColor);

        // Buttons
        const Json::Value& buttonsRef = dialogParser.GetRoot()["buttons"];
        string text = "";
        int next = 0;

        for (unsigned int i = 0; i < buttonsRef.size(); i++)
        {
            text = buttonsRef[i].get("text", 0).asString();
            next = buttonsRef[i].get("next", 0).asInt();

            shared_ptr<DialogElementButton> dialogButton = make_shared<DialogElementButton>(gui, text, next);
            onButtonElements.push_back(dialogButton);

        }

        // ----- Creating the DialogBox -----
        shared_ptr<DialogBoxBase> dialogBox = make_shared<DialogBoxBase>();

        // Registering Create Elements
        for (int i = 0; i < onCreateElements.size(); i++)
        {
            dialogBox->RegisterElementToOnCreate(onCreateElements[i]);
        }

        // Registering Render Elements
        for (int i = 0; i < onRenderElements.size(); i++)
        {
            dialogBox->RegisterElementToOnRender(onRenderElements[i]);
        }

        // Registering Button Elements
        for (int i = 0; i < onButtonElements.size(); i++)
        {
            dialogBox->RegisterElementToOnButton(onButtonElements[i]);
        }

        // ----- Adding Dialog Box to gui -----
        gui->AddDialogBox(dialogID, dialogBox);
        /* */
    }    
    //end of loop
    //
    gui->SetStartingDialog(1);
    gui->Run(); //this will run the Gui engine and start rendering the dialogs
    gui->ShutDown();
	return 0;
}

