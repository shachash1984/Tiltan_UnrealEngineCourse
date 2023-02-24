#include "DialogElementTitle.h"

DialogElementTitle::DialogElementTitle(shared_ptr<IGUI> const& pGui, const string& _title) : IDialogRenderingElement(pGui), title(_title) {}

DialogElementTitle::~DialogElementTitle() {}

void DialogElementTitle::Act() { gui -> StartDialog(title); }

void DialogElementTitle::SetTitle(const string& _title) { title = _title; }

string const& DialogElementTitle::GetTitle() const { return title; }
