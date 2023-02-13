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
	IParser(IParser&&) = delete; // non relevant for me
	IParser& operator=(const IParser&) = delete;
	IParser& operator=(IParser&&) = delete; // non relevant for me
	

protected:
	std::vector<std::string> data{};
};
