
#include <iostream>
#include <fstream>
// including JsonCpp header file
#include <json/json.h>

using namespace std;


int main() 
{
	// json reader
	Json::Reader reader;
	Json::Value root;   // 'root' will contain the root value after parsing.
	vector<string> files;
	
	ifstream configFile("DialogIndex.json");

	//iterating over all fields in a JSON
	if(configFile.is_open())
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
	return 0;
}