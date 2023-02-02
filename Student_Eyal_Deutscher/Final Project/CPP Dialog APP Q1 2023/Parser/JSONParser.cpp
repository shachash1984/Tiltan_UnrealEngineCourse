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
	//cout << "Trying to open File" << endl;
	fstream my_File;
	my_File.open(FilePath, ios::out);
	if (!my_File)
	{
		cout << "File Not Created" << endl;
		return false;
	}
	else
	{
		cout << "File created successfuly!" << endl;
		return true;
	}

}

void JSONParser::CloseFile()
{
}
