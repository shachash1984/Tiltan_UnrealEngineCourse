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
	//parsing the index file
	reader.parse(inputFile,root);
	return false;
}

bool JSONParser::OpenFile(const std::string& FilePath)
{
	//cout << "Trying to open File" << endl;
	inputFile.open(FilePath);
	if (!inputFile)
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
	cout << "Closeing File" << endl;
	inputFile.close();
	if (inputFile)
	{
		cout << "still have value"<<endl;
	}
	else
	{
		cout << "Discarded value" << endl;
	}

}
