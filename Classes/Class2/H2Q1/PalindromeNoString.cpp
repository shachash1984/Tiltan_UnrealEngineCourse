#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

// Function to check if a number is a palindrome
bool isPalindromeNoString(int num) {
    // Convert the number to a string
    char str[20];
    snprintf(str, sizeof(str), "%d", num);
    // Get the length of the string
    int len = strlen(str);
    // Initialize left and right pointers
    int left = 0;
    int right = len - 1;
    // Loop through the string and check if it is a palindrome
    while (left < right) {
        if (str[left] != str[right]) {
            // If any character doesn't match, it's not a palindrome
            return false;
        }
        left++;
        right--;
    }
    // If we reach here, it means the number is a palindrome
    return true;
}

