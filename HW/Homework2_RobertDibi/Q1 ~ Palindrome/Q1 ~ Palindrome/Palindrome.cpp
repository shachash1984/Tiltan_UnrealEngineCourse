#include <iostream>
using namespace std;
int baseNumber;

int main() 
{
    int n, num, digit, rev = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    n = num;
    if (n <= 0)
    {
        std::cout << "A false number cannot be palindrome.\n" ;
      
    }
    if (n>0)
    {
        do
        {
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;

        } while (num != 0);

        cout << " The reverse of the number is: " << rev << endl;

        if (n == rev)
            cout << " The number is a palindrome.";

        else
            cout << " The number is not a palindrome.";

        return 0;
    }

}