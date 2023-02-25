#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Base abstract class for parsers
class IParser {
public:
    virtual std::vector<std::string> parse(std::string filename) = 0;
};

// Parser for text files
class TEXTParser : public IParser {
public:
    std::vector<std::string> parse(std::string filename) override {
        std::vector<std::string> data;
        std::ifstream file(filename);
        if (file.is_open()) {
            std::string line;
            while (getline(file, line)) {
                data.push_back(line);
            }
            file.close();
        }
        return data;
    }
};

// Dialog component
class Dialog {
public:
    int id;
    std::string title;
    std::vector<std::string> text;
    int xPos;
    int yPos;
    int bgColor;
    char textColor;
    std::vector<std::pair<std::string, int>> buttons;

    Dialog(std::vector<std::string> data) {
        for (std::string line : data) {
            if (line.find("Id=") == 0) {
                id = stoi(line.substr(3));
            }
            else if (line.find("Title=") == 0) {
                title = line.substr(7, line.size() - 8);
            }
            else if (line.find("Text=") == 0) {
                text.push_back(line.substr(6, line.size() - 7));
            }
            else if (line.find("xPos=") == 0) {
                xPos = stoi(line.substr(5));
            }
            else if (line.find("yPos=") == 0) {
                yPos = stoi(line.substr(5));
            }
            else if (line.find("BG_Color=") == 0) {
                bgColor = stoi(line.substr(9));
            }
            else if (line.find("Text_Color=") == 0) {
                textColor = line[11];
            }
            else if (line.find("Button_Text=") == 0) {
                std::string buttonText = line.substr(12, line.size() - 13);
                int buttonNext = 0;
                for (std::string nextLine : data) {
                    if (nextLine.find("Button_next=") == 0) {
                        buttonNext = stoi(nextLine.substr(12));
                        break;
                    }
                }
                buttons.push_back(std::make_pair(buttonText, buttonNext));
            }
        }
    }
};

// Example usage
int main() {
    TEXTParser parser;
    std::vector<std::string> data = parser.parse("example.txt");
    Dialog dialog(data);
    std::cout << "Title: " << dialog.title << std::endl;
    std::cout << "Text:" << std::endl;
    for (std::string line : dialog.text) {
        std::cout << "  " << line << std::endl;
    }
    std::cout << "Button choices:" << std::endl;
    for (std::pair<std::string, int> button : dialog.buttons) {
        std::cout << "  " << button.first << std::endl;
    }
    std::string input;
    std::cout << "Enter your choice: ";
    std::cin >> input;
    for (std::pair<std::string, int> button : dialog.buttons) {
        if (input == button.first) {
            // Handle button choice
            break;
        }
    }
}
