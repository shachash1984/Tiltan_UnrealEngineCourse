#pragma once
#include <json/json.h>
#include "IParser.h"
#include <fstream>
#include <iostream>
using namespace std;

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
	bool TryParseJSON(string filePath, bool printContent = false);
protected:
	std::string indexFilePath; //Used to save the path to the JSON index file (the JSON file that contains the paths of all the dialog files)
	Json::Reader reader;	// Used to read JSON files, see example in mainJSON2.cpp and also below on line 28
	Json::Value root;   // 'root' will contain the root value after parsing.
	std::ifstream inputFile; //CPP class for handling a file like we learned on class 10
};


