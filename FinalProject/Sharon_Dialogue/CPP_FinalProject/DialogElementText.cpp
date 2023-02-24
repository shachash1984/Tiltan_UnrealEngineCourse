#include "DialogElementText.h"

DialogElementText::DialogElementText(std::shared_ptr<IGUI> const& pGui, const std::vector<std::string>& _text) : IDialogRenderingElement(pGui), text(_text) {}

DialogElementText::~DialogElementText() {}

void DialogElementText::Act() { gui->DisplayTextDialog(text); }

vector<string> const& DialogElementText::GetText() const { return text; }

void DialogElementText::SetText(const vector<string>& _text) { text = _text; }
