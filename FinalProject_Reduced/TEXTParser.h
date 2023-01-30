#pragma once
#include "IParser.h"

class TEXTParser : public IParser
{
public:
	TEXTParser() = default;
	TEXTParser(std::string path);
	~TEXTParser() override = default;
	std::vector<std::string> GetData() override;

protected:
	std::string filePath;
};
