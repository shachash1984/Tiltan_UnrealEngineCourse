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

	if (inputFile.is_open())
		return true;
	else
		return false;
}

void JSONParser::CloseFile()
{
	inputFile.close();

	if (inputFile)
		cout << "File still has values." << endl;
	else
		cout << "File values discarded." << endl;
}

/*bool JSONParser::TryParseToJSON(string path, bool shouldPrint)
{
	SetIndexFilePath(path);
	cout << GetIndexFilePath() << endl;

	if (!OpenFile(GetIndexFilePath()))
	{
		cout << "File couldn't open" << endl;
		return false;
	}

	Parse();
	if (shouldPrint)
	{
		cout << "\n---- " + path + " ----" << endl;
		for (int i = 0; i < data.size(); i++)
		{
			cout << data[i] << endl;
		}
	}
	CloseFile();

	return true;
}*/
