#include "JSONParser.h"
#include <iostream>

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
    Json::Value indexRoot;
    std::fstream indexFile(indexFilePath);
    reader.parse(indexFile, indexRoot);

    for (auto key : indexRoot.getMemberNames())
    {
        data.push_back(key);
    }

    return data;
}

bool JSONParser::Parse()
{
    if (!inputFile.is_open())
    {
        return false; 
    }

    bool parsingSuccessful = reader.parse(inputFile, root);

    if (!parsingSuccessful)
    {
        std::cerr << "Failed to parse JSON: " << reader.getFormattedErrorMessages() << std::endl;
    }

    return parsingSuccessful;
}

bool JSONParser::OpenFile(const std::string& FilePath)
{
    CloseFile(); 

    inputFile.open(FilePath); 

    if (!inputFile.is_open())
    {
        std::cerr << "Failed to open file: " << FilePath << std::endl;
        return false; 
    }

    indexFilePath = FilePath; 

    return true; 
}

void JSONParser::CloseFile()
{
    inputFile.close();
}