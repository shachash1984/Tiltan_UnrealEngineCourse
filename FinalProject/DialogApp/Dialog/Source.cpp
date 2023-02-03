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

    for (int i = 0; i < parser.GetData().size(); i++)
    {
        string currentDialog = parser.GetRoot().get(parser.GetData()[i], 0).asString();
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

        DialogElementTitle boxTitle(gui, dialogTitle);
        onRenderElements.push_back(make_shared<DialogElementTitle>(boxTitle));

        // Text
        const Json::Value& textRef = dialogParser.GetRoot()["text"];
        vector<string> dialogText(textRef.size());

        for (unsigned int i = 0; i < textRef.size(); i++)
        {
            dialogText[i] = textRef[i].asString();
        }

        DialogElementText boxText(gui, dialogText);
        onRenderElements.push_back(make_shared<DialogElementText>(boxText));

        // ----- Points -----
        IGUI::Point dialogPoint;

        // Position
        dialogPoint.x = dialogParser.GetRoot().get("position", 0).get("x", 0).asInt();
        dialogPoint.y = dialogParser.GetRoot().get("position", 0).get("y", 0).asInt();

        DialogElementPosition boxPosition(gui, dialogPoint);
        onCreateElements.push_back(make_shared<DialogElementPosition>(boxPosition));

        // Size
        dialogPoint.x = dialogParser.GetRoot().get("size", 0).get("width", 0).asInt();
        dialogPoint.y = dialogParser.GetRoot().get("size", 0).get("length", 0).asInt();

        DialogElementSize boxSize(gui, dialogPoint.x, dialogPoint.y);
        onCreateElements.push_back(make_shared<DialogElementSize>(boxSize));

        // ----- Colors -----
        IGUI::Color dialogColor;

        // Window Color
        Json::Value windowColorValues = dialogParser.GetRoot().get("window_color", 0);
        dialogColor.r = windowColorValues.get("r", 0).asFloat();
        dialogColor.g = windowColorValues.get("g", 0).asFloat();
        dialogColor.b = windowColorValues.get("b", 0).asFloat();
        dialogColor.a = windowColorValues.get("a", 0).asFloat();

        DialogElementWindowColor boxWindowColor(gui, dialogColor);
        onCreateElements.push_back(make_shared<DialogElementWindowColor>(boxWindowColor));


        // Text Color
        Json::Value textColorValues = dialogParser.GetRoot().get("text_color", 0);
        dialogColor.r = textColorValues.get("r", 0).asFloat();
        dialogColor.g = textColorValues.get("g", 0).asFloat();
        dialogColor.b = textColorValues.get("b", 0).asFloat();
        dialogColor.a = textColorValues.get("a", 0).asFloat();

        DialogElementTextColor boxTextColor(gui, dialogColor);
        onCreateElements.push_back(make_shared<DialogElementTextColor>(boxTextColor));

        // Buttons
        const Json::Value& buttonsRef = dialogParser.GetRoot()["buttons"];
        string text = "";
        int next = 0;

        for (unsigned int i = 0; i < buttonsRef.size(); i++)
        {
            text = buttonsRef[i].get("text", 0).asString();
            next = buttonsRef[i].get("next", 0).asInt();

            DialogElementButton dialogButtonI(gui, text, next);
            onButtonElements.push_back(make_shared<DialogElementButton>(dialogButtonI));

        }

        // ----- Creating the DialogBox -----
        DialogBoxBase dialogBox;

        // Registering Create Elements
        for (int i = 0; i < onCreateElements.size(); i++)
        {
            dialogBox.RegisterElementToOnCreate(onCreateElements[i]);
        }

        // Registering Render Elements
        for (int i = 0; i < onCreateElements.size(); i++)
        {
            dialogBox.RegisterElementToOnRender(onRenderElements[i]);
        }


        // Registering Button Elements
        for (int i = 0; i < onButtonElements.size(); i++)
        {
            dialogBox.RegisterElementToOnButton(onButtonElements[i]);
        }

        // ----- Adding Dialog Box to gui -----
        gui->AddDialogBox(dialogID, make_shared<DialogBoxBase>(dialogBox));
        /* */
    }    
    //end of loop
    //
    gui->SetStartingDialog(1);
    gui -> Run(); //this will run the Gui engine and start rendering the dialogs
   return gui->ShutDown();
	return 0;
}

