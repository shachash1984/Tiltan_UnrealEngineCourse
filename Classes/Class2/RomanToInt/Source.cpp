#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


int romanToInt(string s)
{
    // Create a map of Roman numeral values
    std::unordered_map<char, int> values = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    // Initialize result
    int result = 0;

    // Iterate through the Roman numeral string
    for (int i = 0; i < s.length(); i++)
    {
        // Get the current and next character
        char curr = s[i];
        char next;
        if (i < s.length() - 1) {
            next = s[i + 1];
        }
        else {
            next = '\0';
        }


        // If the current character has a larger value than the next character,
        // add its value to the result. Otherwise, subtract it.
        if (values[curr] >= values[next])
            result += values[curr];
        else
            result -= values[curr];
    }

    return result;
}
int main()
{
    int num;
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::cout << "here it is as an integer: " << romanToInt(str) << std::endl;
    return 0;
}
