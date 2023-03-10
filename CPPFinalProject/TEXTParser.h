#ifndef TEXT_PARSER_H
#define TEXT_PARSER_H

#include <string>
#include <vector>

class IParser {
public:
    virtual std::vector<std::string> parse(std::string filename) = 0;
};

class TEXTParser : public IParser {
public:
    std::vector<std::string> parse(std::string filename);
};

#endif // TEXT_PARSER_H
