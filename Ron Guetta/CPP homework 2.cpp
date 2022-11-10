
#include <iostream>
#include <string>
using namespace std;

#pragma region  FirstAssigment
bool IsPalindrome(int number) 
{
    int WrittenNumber, Digit, Reverse = 0;
    if (number < 0) return false;
    WrittenNumber = number;

    do {

        Digit = number % 10;
        Reverse = (Reverse * 10) + Digit;
        number = number / 10;

    } while (number != 0);
    
    return WrittenNumber == Reverse ? true : false;
}

void FirstAssigment() 
{
    int number;
    cout << "Pick a Number mate, I will tell you if its a Palindrome!\n";
    cin >> number;
    if (IsPalindrome(number))
        cout << number << " is a Palindrome!";
    else
        cout << number << " is not a Palindrome!";  
}
#pragma endregion

#pragma region SecondAssigment

int romanToInt(string s) 
{
    int l = s.length();
    if (l < 0 || l > 14) return 0;

    int result = 0;

    for (int i = 0; i < l; i++)
    {
        switch (s[i])
        {
        case 'I': result += 1; break;
        case 'V': result += 5; break;
        case 'X': result += 10; break;
        case 'L': result += 50; break;
        case 'C': result += 100; break;
        case 'D': result += 500; break;
        case 'M': result += 1000; break;

        default:
            return 0;
            break;
        }
        if (i > 0) 
        {
            if ((s[i] == 'V' || s[i] == 'X') && s[i - 1] == 'I') result -= 2;
            else if ((s[i] == 'L' || s[i] == 'C') && s[i - 1] == 'X') result -= 20;
            else if ((s[i] == 'D' || s[i] == 'M') && s[i - 1] == 'C') result -= 200;          
        }
    }

    return result;
}

void SecondAssigment()
{
    string s;
    cout << "Write a Roman Number, I will translate it for you!\n";
    cin >> s;
    cout << romanToInt(s);
}
#pragma endregion

int main()
{
    FirstAssigment();
    cout << "\n\nNext Assigment!\n\n";
    SecondAssigment();
}

