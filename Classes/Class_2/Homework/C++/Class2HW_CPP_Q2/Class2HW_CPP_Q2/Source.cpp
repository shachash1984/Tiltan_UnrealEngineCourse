#include <iostream>

using namespace std;

bool IsCharRomanLetter(char c)
{
	return (c == 'I' || c == 'V' || c == 'X' || c == 'L' || c == 'C' || c == 'D' || c == 'M');
}

bool ValidateStringIsRomanNumber(string s)
{
	int stringLength = s.length();
	if (stringLength > 15)
	{
		return false;
	}
	
	for (int i = 0; i < stringLength; i++)
	{
		if (!IsCharRomanLetter(s[i]))
		{
			return false;
		}
	}

	return true;
}

int ValueOfRomanNumber(string s)
{
	if (s == "I")
	{
		return 1;
	}
	else if (s == "V")
	{
		return 5;
	}
	else if (s == "IV")
	{
		return 4;
	}
	else if (s == "X")
	{
		return 10;
	}
	else if (s == "IX")
	{
		return 9;
	}
	else if (s == "L")
	{
		return 50;
	}
	else if (s == "XL")
	{
		return 40;
	}
	else if (s == "C")
	{
		return 100;
	}
	else if (s == "XC")
	{
		return 90;
	}
	else if (s == "D")
	{
		return 500;
	}
	else if (s == "CD")
	{
		return 400;
	}
	else if (s == "M")
	{
		return 1000;
	}
	else if (s == "CM")
	{
		return 900;
	}
}

int romanToInt(string s)
{
	int sum = 0;
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] == 'I')
		{
			sum += ValueOfRomanNumber("I");
		}

		else if (s[i] == 'V')
		{
			if(i != 0 && s[i - 1] == 'I')
			{
				sum += ValueOfRomanNumber("IV");
				i--;
			}
			else
			{
				sum += ValueOfRomanNumber("V");
			}
		}

		else if (s[i] == 'X')
		{
			if (i != 0 && s[i - 1] == 'I')
			{
				sum += ValueOfRomanNumber("IX");
				i--;
			}
			else
			{
				sum += ValueOfRomanNumber("X");
			}
		}

		else if (s[i] == 'L')
		{
			if (i != 0 && s[i - 1] == 'X')
			{
				sum += ValueOfRomanNumber("XL");
				i--;
			}
			else
			{
				sum += ValueOfRomanNumber("L");
			}
		}

		else if (s[i] == 'C')
		{
			if (i != 0 && s[i - 1] == 'X')
			{
				sum += ValueOfRomanNumber("XC");
				i--;
			}
			else
			{
				sum += ValueOfRomanNumber("C");
			}
		}

		else if (s[i] == 'D')
		{
			if (i != 0 && s[i - 1] == 'C')
			{
				sum += ValueOfRomanNumber("CD");
				i--;
			}
			else
			{
				sum += ValueOfRomanNumber("D");
			}
		}

		else if (s[i] == 'M')
		{
			if (i != 0 && s[i - 1] == 'C')
			{
				sum += ValueOfRomanNumber("CM");
				i--;
			}
			else
			{
				sum += ValueOfRomanNumber("M");
			}
		}
	}
	return sum;
}

int main()
{
	int a = romanToInt("III");
	int b = romanToInt("LVIII");
	int c = romanToInt("MCMXCIV");

	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";

	string s = "";
	cin >> s;		// again same here - input from the user is preferred
}