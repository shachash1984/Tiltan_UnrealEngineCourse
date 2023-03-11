#include "Dialog.h"
#include <iostream>
#include <string>

Dialog::Dialog(std::vector<std::string> data) {
    for (std::string line : data) {
        if (line.find("Title") != std::string::npos) {
            std::string title = line.substr(line.find("=") + 1);
            std::cout << "Title: " << title << std::endl;
        }
        else if (line.find("Text") != std::string::npos) {
            std::string text = line.substr(line.find("=") + 1);
            text_.push_back(text);
        }
        else if (line.find("xPos") != std::string::npos) {
            xPos_ = std::stoi(line.substr(line.find("=") + 1));
        }
        else if (line.find("yPos") != std::string::npos) {
            yPos_ = std::stoi(line.substr(line.find("=") + 1));
        }
        else if (line.find("BG_Color") != std::string::npos) {
            bgColor_ = std::stoi(line.substr(line.find("=") + 1));
        }
        else if (line.find("Text_Color") != std::string::npos) {
            textColor_ = line.substr(line.find("=") + 1)[0];
        }
        else if (line.find("Button_Text") != std::string::npos) {
int buttonNext = std::stoi(line.substr(line.find("=") + 1));
button_next_.push_back(buttonNext);
}
}
}

void Dialog::display() { // -25 not using all fields (color, pos etc)
for (std::string line : text_) {
std::cout << line << std::endl;
}
for (int i = 0; i < button_text_.size(); i++) {
    std::cout << i+1 << ". " << button_text_[i] << std::endl;
}

int choice;
std::cin >> choice;

if (choice > 0 && choice <= button_next_.size()) {
    std::cout << "Going to dialog " << button_next_[choice-1] << std::endl;
}
}

