#include "JSONParser.h"
#include <iostream>

void JSONParser::SetIndexFilePath(const std::string& _indexFilePath)
{
	indexFilePath = _indexFilePath;
}

const std::string& JSONParser::GetIndexFilePath() const
{
	return indexFilePath;
}

std::vector<std::string> JSONParser::GetData()
{
	std::vector<std::string> keys;
	for (auto key : root)
	{
		keys.push_back(key.asString());
	}
	return keys;
}

bool JSONParser::Parse()
{
	if (!inputFile.is_open())
	{
		return false; 
	}

	bool parsingSuccessful = reader.parse(inputFile, root);

	return parsingSuccessful;
}

bool JSONParser::OpenFile(const std::string& FilePath)
{
	CloseFile(); 

	inputFile.open(FilePath, std::ifstream::binary); 

	if (!inputFile.is_open())
	{
		std::cerr << "Failed to open file: " << FilePath << std::endl;
		return false; 
	}

	indexFilePath = FilePath; 

	return true; 
}

void JSONParser::CloseFile()
{
	CloseFile();
}
