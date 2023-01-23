#pragma once

#include <iostream>

void CountCalls()
{
	static int count = 0;
	count++;
	std::cout << "Count: " << count << std::endl;
}




