#include <iostream>
#include <set>


// full documentation: https://en.cppreference.com/w/cpp/container/set
int main_set() {
	// Create a set of integers
	std::set<int> s = { 3, 1, 4, 1, 5, 9 }; // ***notice that on of the 1's is omitted
	
	// Check if the set is empty and print its size
	if (s.empty())
	{
		std::cout << "The set is empty" << std::endl;
	}
	else
	{
		std::cout << "The set has " << s.size() << " elements" << std::endl;
	}
	
	// Add and remove elements from the set
	s.insert(0);
	s.erase(1);
	
	// Check if the set contains a given element
	if (s.count(1) > 0)
	{
		std::cout << "The set contains the element 1" << std::endl;
	}
	else
	{
		std::cout << "The set does not contain the element 1" << std::endl;
	}
	
	// Find an element and print its value
	std::set<int>::iterator it = s.find(4);
	if (it != s.end())
	{
		std::cout << "The element 4 has value: " << *it << std::endl;
	}
	else
	{
		std::cout << "The element 4 was not found" << std::endl;
	}
	
	// Print all the elements
	std::cout << "Elements: ";
	for (int x : s)
	{
		std::cout << x << " ";
	}
	std::cout << std::endl;

	getchar();
	return 0;
}
