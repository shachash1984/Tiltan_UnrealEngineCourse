#include "JSONParser.h"

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
	return false;
}

void JSONParser::CloseFile()
{
}
