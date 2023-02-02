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
	return false;
}

bool JSONParser::OpenFile(const std::string& FilePath)
{
	fstream my_File;
	my_File.open(FilePath, ios:: out);
	my_File.close();
	if (!my_File)
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
