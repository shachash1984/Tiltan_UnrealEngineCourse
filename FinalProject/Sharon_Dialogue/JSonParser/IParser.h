#pragma once
#include <string>
#include <vector>

class IParser
{
public:
	virtual std::vector<std::string> GetData() = 0;

	IParser() = default;
	virtual ~IParser() = default;
	IParser(const IParser&) = delete;
	IParser(IParser&&) = delete;
	IParser& operator=(const IParser&) = delete;
	IParser& operator=(IParser&&) = delete;
	
protected:
	std::vector<std::string> data{};
};
