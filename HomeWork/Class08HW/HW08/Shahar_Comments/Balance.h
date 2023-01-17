#pragma once
#include <string>

class Balance {

public:
	Balance();

	std::string CircleOpening = "("; // -5 you can use char instead of std::string
	std::string CircleClosing = ")";
	std::string SquiglyOpening = "{";
	std::string SquiglyClosing = "}";
	std::string CubedOpening = "[";
	std::string CubedClosing = "]";

	bool is_balanced(std::string expression);

private:

};