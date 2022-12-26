#pragma once
#include <string>

class Balance {

public:
	Balance();

	std::string CircleOpening = "(";
	std::string CircleClosing = ")";
	std::string SquiglyOpening = "{";
	std::string SquiglyClosing = "}";
	std::string CubedOpening = "[";
	std::string CubedClosing = "]";

	bool is_balanced(std::string expression);

private:

};