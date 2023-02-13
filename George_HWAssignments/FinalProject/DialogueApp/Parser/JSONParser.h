#pragma once
#include "json/json.h"
#include "IParser.h"
#include <fstream>

class JSONParser : public IParser
{
public:
	void SetIndexFilePath(const std::string& _indexFilePath);
	const std::string& GetIndexFilePath() const;
	
	std::vector<std::string> GetData() override;
	
	bool Parse();
	Json::Value& GetRoot() { return root; }
	bool OpenFile(const std::string& FilePath);
	void CloseFile();

protected:
	std::string indexFilePath;
	Json::Reader reader;
	Json::Value root;   // 'root' will contain the root value after parsing.
	std::ifstream inputFile;
};
