#ifndef DIALOG_H
#define DIALOG_H

#include <vector>
#include <string>

class Dialog {
public:
    Dialog(std::vector<std::string> data);
    void display();
private:
    std::vector<std::string> text_;
    int xPos_;
    int yPos_;
    int bgColor_;
    char textColor_;
    std::vector<std::string> button_text_;
    std::vector<int> button_next_;
};

#endif // DIALOG_H
