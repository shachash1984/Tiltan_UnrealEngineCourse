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
	if (inputFile.is_open())
	{
		reader.parse(inputFile, root);
		if (!root.empty())
		{
			data.clear();

			for (Json::Value::iterator itr = root.begin(); itr != root.end(); ++itr)
			{
				data.push_back(itr.key().asString());
				//cout << itr.key().asString() << endl;

			}

			return true;
		}
	}

	return false;
}

bool JSONParser::OpenFile(const std::string& FilePath)
{
	inputFile.open(FilePath);
	if (!inputFile.is_open())
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
		cout << "still have value" << endl;
	}
	else
	{
		cout << "Discarded value" << endl;
	}

}

bool JSONParser::TryParseJSON(string filePath, bool printContent)
{
	SetIndexFilePath(filePath);
	cout << GetIndexFilePath() << endl;

	if (!OpenFile(GetIndexFilePath()))
	{
		cout << "File couldn't open" << endl;
		return false;
	}

	Parse();
	if (printContent)
	{
		cout << "\n---- " + filePath + " ----" << endl;
		for (int i = 0; i < data.size(); i++)
		{
			cout << data[i] << endl;
		}
	}
	CloseFile();

	return true;
}