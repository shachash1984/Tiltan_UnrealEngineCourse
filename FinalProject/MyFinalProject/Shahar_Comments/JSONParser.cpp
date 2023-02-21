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
	root.clear();
	reader.parse(inputFile, root);
	if (!root.empty()) 
	{
		data.clear();
		for (auto itr = root.begin(); itr != root.end(); ++itr)
		{
			data.push_back(itr.key().asString());
		}
		return true;
	}
	return false;
}

bool JSONParser::OpenFile(const std::string& FilePath)
{
	
	std::ifstream fileOfAllFiles(FilePath);
	inputFile = std::move(fileOfAllFiles); //-5 why not use inputFile.open(FilePath)?
	if (inputFile.is_open())
	{
		return true;
	}
	return false;
}

void JSONParser::CloseFile()
{
	inputFile.close();
}
