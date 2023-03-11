#include "TEXTParser.h"
#include "Dialog.h"
#include <iostream>

int main() { // -25 missing dialogs, supposed to be 20
    TEXTParser parser;
    std::vector<std::string> data = parser.parse("ReducedDialog1.txt");
    Dialog dialog1(data);
    data = parser.parse("ReducedDialog2.txt");
    Dialog dialog2(data);

    std::cout << "Dialog 1:" << std::endl;
    dialog1.display();

    std::cout << "Dialog 2:" << std::endl;
    dialog2.display();

    return 0;
}
