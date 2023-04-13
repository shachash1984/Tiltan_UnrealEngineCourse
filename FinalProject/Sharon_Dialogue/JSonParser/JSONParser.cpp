#include "JSONParser.h"

void JSONParser::SetIndexFilePath(const string& _indexFilePath)
{
	indexFilePath = _indexFilePath;
}

const string& JSONParser::GetIndexFilePath() const
{
	return indexFilePath;
}

vector<string> JSONParser::GetData()
{
	return data;
}

bool JSONParser::Parse()
{
	if (!inputFile.is_open())
		return false;

	reader.parse(inputFile, root);

	if (root.empty())
		return false;

	data.clear();

	for (Json::Value::iterator itr = root.begin(); itr != root.end(); ++itr)
		data.push_back(itr.key().asString());

	return true;
}

bool JSONParser::OpenFile(const string& FilePath)
{
	inputFile.open(FilePath);
	return inputFile.is_open();
}

void JSONParser::CloseFile()
{
	inputFile.close();

	if (inputFile)
		cout << "File still has values." << endl;
	else
		cout << "File values discarded." << endl;
}

bool JSONParser::TryParse(string path)
{
	SetIndexFilePath(path);

	if (!OpenFile(GetIndexFilePath()))
		return false;

	Parse();
	CloseFile();

	return true;
}
