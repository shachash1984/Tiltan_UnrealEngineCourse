/*Given an integer x, return true if x is a 
palindrome
, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?


signature
************
bool isPalindrome(int x)
{

}
*************/

#include <iostream>
#include <string>


bool IsPalindrome(int num) 
{
    int rNum = 0;

    int temp = num;
    while (temp > 0)
    {
        rNum = rNum * 10 + temp % 10;
        temp = temp / 10;
    }

    if (rNum == num)
    {
        std::cout << "The number you entered is a Palindrome";
        return true;
    }
    else
    {
        std::cout << "The number you entered is NOT a Palindrome";
        return false;
    }
}

int main()
{
    int num;

    while (true)
    {
        std::cout << "Enter a number between -231 and 230\n";
        std::cin >> num;

        if (-231 <= num && num <= 230)
        {
            IsPalindrome(num);
            break;
        }
        else
        {
            std::cout << "The number you entered is invalid!\n";
        }
    }
}




