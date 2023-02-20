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
	return std::vector<std::string>();
}

bool JSONParser::Parse()
{
	return false;
}

bool JSONParser::OpenFile(const std::string& FilePath)
{
	if (inputFile.is_open())
	{
		std::cout << "File Is Open" << std::endl;
	}
	else
	{
		inputFile.open(FilePath);
	}
	return inputFile.is_open();
}

void JSONParser::CloseFile()
{
	inputFile.close();
}
