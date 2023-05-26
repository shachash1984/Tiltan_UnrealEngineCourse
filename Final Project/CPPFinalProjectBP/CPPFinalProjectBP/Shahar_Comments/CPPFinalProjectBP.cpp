#include <iostream>
#include <fstream>
#include <memory>
#include <string>
#include <vector>

class Dialog;
class IParser;
// -20 missing at least 20 dialog files, 2 need to be conditional
// -10 everything is in one file, not separated into header and source files
// -20 you are not using the position data from the text files nor the colors
// -10 dialog 2 is not working (i guess you accidentally added .txt twice)


// Interface for user input handling
class IUserInputHandler {
public:
    virtual std::string readInput() = 0;
};

// Implementation of user input handling using standard input and output
class ConsoleInputHandler : public IUserInputHandler {
public:
    std::string readInput() override {
        std::string input;
        std::cin >> input;
        return input;
    }
};

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
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file: " + filename);
        }
        std::string line;
        while (getline(file, line)) {
            data.push_back(line);
        }
        file.close();
        return data;
    }
};

// Dialog component
class Dialog {
public:
    Dialog(std::vector<std::string> data) {
        for (std::string line : data) {
            if (line.find("Id=") == 0) {
                id_ = stoi(line.substr(3));
            }
            else if (line.find("Title=") == 0) {
                title_ = line.substr(7, line.size() - 8);
            }
            else if (line.find("Text=") == 0) {
                text_.push_back(line.substr(6, line.size() - 7));
            }
            else if (line.find("xPos=") == 0) {
                xPos_ = stoi(line.substr(5));
            }
            else if (line.find("yPos=") == 0) {
                yPos_ = stoi(line.substr(5));
            }
            else if (line.find("BG_Color=") == 0) {
                bgColor_ = stoi(line.substr(9));
            }
            else if (line.find("Text_Color=") == 0) {
                textColor_ = line[11];
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
                buttons_.push_back(std::make_pair(buttonText, buttonNext));
            }
        }
        if (id_ == 0 || title_.empty() || text_.empty() || buttons_.empty()) {
            throw std::runtime_error("Dialog data is missing required fields");
        }
    }

    int getId() const {
        return id_;
    }

    std::string getTitle() const {
        return title_;
    }

    std::vector<std::string> getText() const {
        return text_;
    }

    int getXPos() const {
        return xPos_;
    }

    int getYPos() const {
        return yPos_;
    }

    int getBGColor() const {
        return bgColor_;
    }

    char getTextColor() const {
        return textColor_;
    }

    std::vector<std::pair<std::string, int>> getButtons() const {
        return buttons_;
    }

private:

    int id_;
    std::string title_;
    std::vector<std::string> text_;
    int xPos_;
    int yPos_;
    int bgColor_;
    char textColor_;
    std::vector<std::pair<std::string, int>> buttons_;
};

// User interface component
class DialogUI {
public:
    DialogUI(std::shared_ptr<IUserInputHandler> inputHandler)
        : inputHandler_(inputHandler) {}

    void setDialog(std::shared_ptr<Dialog> dialog) {
        dialog_ = dialog;
    }

    void run() {
        try {
            std::cout << "Title: " << dialog_->getTitle() << std::endl;
            std::cout << "Text:" << std::endl;
            for (std::string line : dialog_->getText()) {
                std::cout << "  " << line << std::endl;
            }
            std::cout << "Button choices:" << std::endl;
            std::vector<std::pair<std::string, int>> buttons = dialog_->getButtons();
            for (int i = 0; i < buttons.size(); i++) {
                std::cout << "  " << i + 1 << ": " << buttons[i].first << std::endl;
            }
            int choice = -1;
            while (choice < 1 || choice > buttons.size()) {
                std::cout << "Enter your choice (1-" << buttons.size() << "): ";
                std::string input = inputHandler_->readInput();
                try {
                    choice = std::stoi(input);
                }
                catch (...) {
                    choice = -1;
                }
            }
            int nextDialogId = buttons[choice - 1].second;
            if (nextDialogId == 0) {
                std::cout << "Dialog complete." << std::endl;
                return;
            }
            std::string nextDialogFilename = "dialog_" + std::to_string(nextDialogId) + ".txt";
            std::shared_ptr<IParser> parser = std::make_shared<TEXTParser>();
            std::vector<std::string> data = parser->parse(nextDialogFilename);
            std::shared_ptr<Dialog> nextDialog = std::make_shared<Dialog>(data);
            setDialog(nextDialog);
            run();
        }
        catch (std::runtime_error& e) {
            std::cerr << e.what() << std::endl;
        }
    }

private:
    std::shared_ptr<Dialog> dialog_;
    std::shared_ptr<IUserInputHandler> inputHandler_;
};

// Example usage
int main() {
    std::shared_ptr<IUserInputHandler> inputHandler = std::make_shared<ConsoleInputHandler>();
    std::shared_ptr<IParser> parser = std::make_shared<TEXTParser>();
    std::vector<std::string> data = parser->parse("dialog_1.txt");
    std::shared_ptr<Dialog> dialog = std::make_shared<Dialog>(data);
    DialogUI ui(inputHandler);
    ui.setDialog(dialog);
    ui.run();
    return 0;
}
