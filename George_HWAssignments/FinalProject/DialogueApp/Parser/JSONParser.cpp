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
	return data;
}

bool JSONParser::Parse()
{
	if (inputFile.is_open())
	{
		reader.parse(inputFile, root);
		if (!root.empty())
		{
			data.clear();

			for (Json::Value::iterator itr = root.begin(); itr != root.end(); ++itr)
			{
				data.push_back(itr.key().asString());
			}

			return true;
		}
	}
	return false;
}

bool JSONParser::OpenFile(const std::string& FilePath)
{
	inputFile.open(FilePath);
	return inputFile.is_open();
}

void JSONParser::CloseFile()
{
	inputFile.close();
}

void JSONParser::ParseJSON(std::string _filePath)
{
	SetIndexFilePath(_filePath);
	OpenFile(GetIndexFilePath());
	Parse();
	CloseFile();
}
