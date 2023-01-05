// CPP_HW_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

bool is_palindrome(int x) {
    // Convert the integer to a string
    std::string str = std::to_string(x);

    // Check if the string is a palindrome by comparing the characters
    // at the beginning and end of the string
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - i - 1]) {
            return false;
        }
    }

    return true;
}

int romanToInt(std::string s) {
    int result = 0;
    for (int i = 0; i < s.length(); i++) {
        switch (s[i]) {
        case 'I':
            result += 1;
            break;
        case 'V':
            result += 5;
            break;
        case 'X':
            result += 10;
            break;
        case 'L':
            result += 50;
            break;
        case 'C':
            result += 100;
            break;
        case 'D':
            result += 500;
            break;
        case 'M':
            result += 1000;
            break;
        default:
            break;
        }
    }
    return result;
}

int main() {

    std::cout << is_palindrome(696) << std::endl; // prints true 1
    std::cout << is_palindrome(669) << std::endl; // prints false 0
    std::cout << romanToInt("VXI") << std::endl;  // prints 16
    std::cout << romanToInt("MII") << std::endl;  // prints 1002
}

//Completed the HW with Lior Avital