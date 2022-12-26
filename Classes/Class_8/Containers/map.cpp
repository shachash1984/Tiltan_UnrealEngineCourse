#include <map>
#include <iostream>

// full documentation: https://en.cppreference.com/w/cpp/container/map
int main_map() {
	std::map<std::string, int> myMap;

	// Insert an element into the map
	myMap["apple"] = 5;
	myMap["banana"] = 2;
	myMap["orange"] = 1;
	myMap["pear"] = 3;
	myMap["mango"] = 4;

	// Check if an element exists in the map
	if (myMap.count("pear") > 0)
	{
		std::cout << "pear exists in the map" << std::endl;
	}

	// Find an element in the map
	std::map<std::string, int>::iterator it = myMap.find("banana");
	if (it != myMap.end())
	{
		std::cout << "Found banana in the map" << std::endl;
	}

	// Erase an element from the map
	myMap.erase("mango");

	// Get the size of the map
	std::cout << "Size of map: " << myMap.size() << std::endl;

	// Iterate through the map
	for (it = myMap.begin(); it != myMap.end(); ++it)
	{
		std::cout << it->first << ": " << it->second << std::endl;
	}

	getchar();
	return 0;
}
