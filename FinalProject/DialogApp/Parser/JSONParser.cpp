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
	if (inputFile.is_open())
	{
		reader.parse(inputFile, root);
		if (!root.empty())
		{
			data.clear();

			for (auto itr = root.begin(); itr != root.end(); ++itr)
			{
				data.push_back(itr.key().asString());
			}
		}
	}
	return data;
}

bool JSONParser::Parse()
{
	return reader.parse(inputFile, root);
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
