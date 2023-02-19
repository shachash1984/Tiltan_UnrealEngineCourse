#pragma once
#include "json/json.h"
#include "IParser.h"
#include <fstream>

class JSONParser : public IParser
{
public:
	void SetIndexFilePath(const std::string& _indexFilePath);
	const std::string& GetIndexFilePath() const;

	std::vector<std::string> GetData() override; // Used to load the keys of the json index file into the data variable (from IParser) and return it

	bool Parse(); // Used as a wrapper function for the user of this library to parse json files
	Json::Value& GetRoot() { return root; } 
	bool OpenFile(const std::string& FilePath); //Used as a wrapper function for the user of this library to open a file (without using std::fstream)
	void CloseFile(); //Same as Open but for closing the file


protected:
	std::string indexFilePath; //Used to save the path to the JSON index file (the JSON file that contains the paths of all the dialog files)
	Json::Reader reader;	// Used to read JSON files, see example in mainJSON2.cpp and also below on line 28
	Json::Value root;   // 'root' will contain the root value after parsing.
	std::ifstream inputFile; //CPP class for handling a file like we learned on class 10
};


//
/*int main() 
{
	// json reader
	Json::Reader reader;
	Json::Value root;   // 'root' will contain the root value after parsing.
	vector<string> files;
	
	ifstream configFile("DialogIndex.json");

	//iterating over all fields in a JSON
	if(configFile.is_open())
	{
		reader.parse(configFile, root); // you pass the file and the root you created above and if the "parse" method returns true it means it succeeded in finding and parsing the file
		if (!root.empty()) //Checking if root contains any data - because even a valid json file can be empty
		{
			files.clear();

			for (auto itr = root.begin(); itr != root.end(); ++itr) //using an iterator to loop over all the fields currently being held in root and saving them to a vector
			{
				files.push_back(itr.key().asString());
			}
		}
	}
	
 *
 *
 */