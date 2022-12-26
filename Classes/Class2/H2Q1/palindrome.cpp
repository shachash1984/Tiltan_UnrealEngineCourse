#include <iostream>
#include <cstring> // for strlen
#include <cstdio> // for snprintf

using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
	char str[20];
	snprintf(str, sizeof(str), "%d", num);
	int len = strlen(str);
	int left = 0;
	int right = len - 1;

	while (left < right) {
		if (str[left] != str[right]) {
			return false;
		}
		left++;
		right--;
	}
	return true;
}
bool isPalindromeNoString(int x) {

	char str[20];
	snprintf(str, sizeof(str), "%d", x);

	int len = strlen(str);

	int left = 0;
	int right = len - 1;

	while (left < right) {
		if (str[left] != str[right]) {

			return false;
		}
		left++;
		right--;
	}
	return true;
}
int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (isPalindromeNoString(num)) {
		cout << "The number is a palindrome." << endl;
	}
	else {
		cout << "The number is not a palindrome." << endl;
	}
	return 0;
}
