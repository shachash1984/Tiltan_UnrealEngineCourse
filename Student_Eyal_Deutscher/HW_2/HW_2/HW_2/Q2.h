#pragma once
#include <map>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
class Q2
{
	map <string, int> lettersValue;

public: void SetLettersValue()
{
	lettersValue["M"] = 1000;
	lettersValue["CM"] = 900;
	lettersValue["D"] = 500;
	lettersValue["CD"] = 400;
	lettersValue["C"] = 100;
	lettersValue["XC"] = 90;
	lettersValue["L"] = 50;
	lettersValue["XL"] = 40;
	lettersValue["X"] = 10;
	lettersValue["IX"] = 9;
	lettersValue["V"] = 5;
	lettersValue["IV"] = 4;
	lettersValue["I"] = 1;
}
private: int GetKeyFromMap(string s)
{
	if (lettersValue.find(s) != lettersValue.end())
	{
		int tempInt = lettersValue[s];
		return tempInt;
	}
	else
	{
		cout << ("Map Could not find the correct value");
		cin.ignore();
	}
}
public:  int romanToInt(string s)
{
	int finalNum = 0;
	int stringLength = s.length();

	if (stringLength >= 15 || stringLength < 1)
	{
		cout << "Length of sting is not valid, must be between 1-15 letters" << endl;
		cin.ignore();
	}

	vector<char> charVector(s.begin(), s.end());
	int charSize = { (int)charVector.size() - 1 };
	//setstringArray
	for (size_t i = 0; i < charVector.size(); i++)
	{
		if (charVector[i] == 'M')
		{
			string tempString {charVector[i]};
			finalNum += GetKeyFromMap(tempString);
			//try get value from dictionary and add it to final num
		}
		else if (charVector[i] == 'D')
		{
			string tempString{ charVector[i] };
			finalNum += GetKeyFromMap(tempString);
		}
		else if (charVector[i] == 'C')
		{
			if (i < charSize)//there are more elements after this element
			{
				int nextIndex = i + 1;
				if (charVector[nextIndex] == 'M')
				{

					string tempS{ charVector[i] , charVector[nextIndex] };
					finalNum += GetKeyFromMap(tempS);
					i++;//skip Next Element because we used it
				}
				else if (charVector[nextIndex] == 'D')
				{
					string tempS{ charVector[i] , charVector[nextIndex] };
					finalNum += GetKeyFromMap(tempS);
					i++;//skip Next Element because we used it
				}
				else
				{
					string tempString{ charVector[i] };
					finalNum += GetKeyFromMap(tempString);

				}
			}
			else
			{
				string tempString{ charVector[i] };
				finalNum += GetKeyFromMap(tempString);
			}
		}
		else if (charVector[i] == 'L')
		{
			string tempString{ charVector[i] };
			finalNum += GetKeyFromMap(tempString);
		}
		else if (charVector[i] == 'X')
		{
			if (i < charSize)//there are more elements after this element
			{
				int nextIndex = i + 1;
				if (charVector[nextIndex] == 'C')
				{
					string tempS{ charVector[i] , charVector[nextIndex] };
					finalNum += GetKeyFromMap(tempS);
					i++;//skip Next Element because we used it
				}
				else if (charVector[nextIndex] == 'L')
				{
					string tempS{ charVector[i] , charVector[nextIndex] };
					finalNum += GetKeyFromMap(tempS);
					i++;//skip Next Element because we used it
				}
				else
				{
					string tempString{ charVector[i] };
					finalNum += GetKeyFromMap(tempString);
				}
			}
			else
			{
				string tempString{ charVector[i] };
				finalNum += GetKeyFromMap(tempString);
			}
		}
		else if (charVector[i] == 'V')
		{
			string tempString{ charVector[i] };
			finalNum += GetKeyFromMap(tempString);
		}
		else if (charVector[i] == 'I')
		{
			if (i < charSize)//there are more elements after this element
			{
				int nextIndex = i + 1;
				if (charVector[nextIndex] == 'X')
				{
					string tempS{ charVector[i] , charVector[nextIndex] };
					finalNum += GetKeyFromMap(tempS);
					i++;//skip Next Element because we used it
				}
				else if (charVector[nextIndex] == 'V')
				{
					string tempS{ charVector[i] , charVector[nextIndex] };
					finalNum += GetKeyFromMap(tempS);
					i++;//skip Next Element because we used it
				}
				else
				{
					string tempString{ charVector[i] };
					finalNum += GetKeyFromMap(tempString);
				}

			}
			else
			{
				string tempString{ charVector[i] };
				finalNum += GetKeyFromMap(tempString);
			}
		}
	}


	//check from higher to lower letters
	//First M = 1000
	//then CM = 900
	//then D = 500
	//then CD = 400
	//then C = 100
	//then XC = 90
	//then L = 50
	//then XL = 40
	//then X = 10
	//then IX = 9
	//then V = 5
	//then IV = 4
	//then I = 1

	if (finalNum > 3999 || finalNum < 1)
	{
		cout << ("Calculation Error, number is out of range");
		cin.ignore();
	}
	return finalNum;
}

};

