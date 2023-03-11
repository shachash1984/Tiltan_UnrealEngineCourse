#include "TEXTParser.h"
#include <fstream>

std::vector<std::string> TEXTParser::parse(std::string filename) {
    std::vector<std::string> data;
    std::ifstream file(filename);
    if (!file.is_open()) {
        return data;
    }
    std::string line;
    while (std::getline(file, line)) {
        data.push_back(line);
    }
    return data;
}
