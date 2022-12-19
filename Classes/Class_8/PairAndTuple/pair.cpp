#include <iostream>
#include <utility>

int main_pair() {
	std::pair<int, std::string> p1(1, "apple");
	std::pair<int, std::string> p2(2, "banana");
	std::pair<int, std::string> p3(3, "orange");

	// Access the elements of the pair
	std::cout << "First element: " << p1.first << std::endl;
	std::cout << "Second element: " << p1.second << std::endl;

	// Compare two pairs
	if (p1 < p2)
	{
		std::cout << "p1 is less than p2" << std::endl;
	}
	if (p2 < p3) 
	{
		std::cout << "p2 is less than p3" << std::endl;
	}

	// Create a pair using make_pair
	std::pair<int, std::string> p4 = std::make_pair(4, "mango");

	// Swap two pairs
	std::swap(p3, p4);

	getchar();
	return 0;
}
