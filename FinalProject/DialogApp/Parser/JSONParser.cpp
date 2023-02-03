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
	
	reader.parse(inputFile, root);
	return false;
}

bool JSONParser::OpenFile(const std::string& FilePath)
{
	inputFile.open(FilePath);
	inputFile.close();
	if (!inputFile)
	{
		cout << "File not created" << endl;
		return false;
	}
	else
	{
		cout << "File created successfully!" << endl;
		
		return true;
	}

	
}

void JSONParser::CloseFile()
{
}
