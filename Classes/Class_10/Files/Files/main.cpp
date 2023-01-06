#include <fstream>
#include <iostream>
#include <string>

int main() {
	std::ifstream input_file("input.txt");
	std::string line;

	// Check if the file was opened successfully
	if (input_file.is_open())
	{
	// Read the contents of the file line by line
	while (std::getline(input_file, line))
	{
	  std::cout << line << std::endl;
	}

		input_file.close();
	}
	else
	{
		std::cout << "Unable to open file" << std::endl;
	}


	std::ofstream output_file("output.txt");

	// Check if the file was opened successfully
	if (output_file.is_open())
	{
		// Write some data to the file
		output_file << "Hello, World!" << std::endl;
		output_file << 42 << std::endl;
		output_file.close();
	}
	else
	{
		std::cout << "Unable to open file" << std::endl;
	}

	getchar();
	return 0;
}