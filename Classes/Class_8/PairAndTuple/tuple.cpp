#include <iostream>
#include <tuple>

int main() {
	std::tuple<int, std::string, bool> t1(1, "apple", true);
	std::tuple<int, std::string, bool> t2(2, "banana", false);
	std::tuple<int, std::string, bool> t3(3, "orange", true);

	// Access the elements of the tuple using get
	std::cout << "First element: " << std::get<0>(t1) << std::endl;
	std::cout << "Second element: " << std::get<1>(t1) << std::endl;
	std::cout << "Third element: " << std::get<2>(t1) << std::endl;

	// Compare two tuples
	if (t1 < t2)
	{
		std::cout << "t1 is less than t2" << std::endl;
	}
	if (t2 < t3) 
	{
		std::cout << "t2 is less than t3" << std::endl;
	}

	// Create a tuple using make_tuple
	std::tuple<int, std::string, bool> t4 = std::make_tuple(4, "mango", false);

	

	// Swap two tuples
	std::swap(t3, t4);

	getchar();
	return 0;
}
