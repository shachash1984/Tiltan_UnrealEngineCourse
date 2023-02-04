#include "DialogElementText.h"
using namespace std;

DialogElementText::DialogElementText(std::shared_ptr<IGUI> const& pGui, const std::vector<std::string>& _text) : IDialogRenderingElement (pGui), text(_text)
{
}

DialogElementText::~DialogElementText()
{
}

void DialogElementText::Act()
{
    cout << "\nyes\n" << endl;
}

std::vector<std::string> const& DialogElementText::GetText() const
{
    // TODO: insert return statement here
    return text;
}

void DialogElementText::SetText(const std::vector<std::string>& _text)
{
}
