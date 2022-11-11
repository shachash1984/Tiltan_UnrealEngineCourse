#include <iostream>

using namespace std;

enum RomanValues
{
	I = 1,
	V = 5,
	X = 10,
	L = 50,
	C = 100,
	D = 500,
	M = 1000
};

// Roman To Int
int romanToInt(string romNum)
{
	int totalIntAnsw = 0;

	for (size_t inc = 0; inc < romNum.length(); inc++)
	{
		switch (romNum[inc])
		{
		case 'I':
			if (inc == romNum.length() - 1)
			{
				totalIntAnsw += I;
			}
			else if (romNum[inc + 1] == 'V')
			{
				totalIntAnsw += V - I;
				inc++;
			}
			else if (romNum[inc + 1] == 'X')
			{
				totalIntAnsw += X - I;
				inc++;
			}
			else
			{
				totalIntAnsw += I;
			}
			break;
		case 'V':
			totalIntAnsw += V;
			break;
		case 'X':
			if (inc == romNum.length() - 1)
			{
				totalIntAnsw += X;
			}
			else if (romNum[inc + 1] == 'L')
			{
				totalIntAnsw += L - X;
				inc++;
			}
			else if (romNum[inc + 1] == 'C')
			{
				totalIntAnsw += C - X;
				inc++;
			}
			else
			{
				totalIntAnsw += X;
			}
			break;
		case 'L':
			totalIntAnsw += L;
			break;
		case 'C':
			if (inc == romNum.length() - 1)
			{
				totalIntAnsw += C;
			}
			else if (romNum[inc + 1] == 'D')
			{
				totalIntAnsw += D - C;
				inc++;
			}
			else if (romNum[inc + 1] == 'M')
			{
				totalIntAnsw += M - C;
				inc++;
			}
			else
			{
				totalIntAnsw += C;
			}
			break;
		case 'D':
			totalIntAnsw += D;
			break;
		case 'M':
			totalIntAnsw += M;
			break;
		default:
			break;
		}
	}

	return totalIntAnsw;
}

// Main Method
int main()
{
	string romanNum;
	bool isRunning = true;
	char validRomNums[] = { 'I','V','X','L','C','D','M' };

	while (isRunning)
	{
		// Constraints
		bool metConstraints = false;
		while (!metConstraints)
		{
			//Instructions & Asking For Input
			system("CLS");
			cout << "----------\n";
			cout << "I = 1\nV = 5\nX = 10\nL = 50\nC = 100\nD = 500\nM = 1000\n";
			cout << "----------\n";
			cout << "What Roman Number Do You Want To Convert?: ";
			cin >> romanNum;

			if ((romanNum.length() >= 1 && romanNum.length() <= 15))
			{
				bool faultyVal = false;
				for (size_t i = 0; i < romanNum.length(); i++)
				{
					bool foundMatch = false;
					for (size_t j = 0; j < sizeof(validRomNums); j++)
					{
						if (romanNum[i] == validRomNums[j])
						{
							foundMatch = true;
							break;
						}
					}

					if (!foundMatch)
					{
						faultyVal = true;
					}
				}
				if (!faultyVal)
				{
					metConstraints = true;
				}
			}
			else
			{
				metConstraints = false;
			}
		}


		// Run Conversion
		cout << romanNum << " == " << romanToInt(romanNum) << "\n";


		// Quit or Retry
		string answ;
		cout << "\nConvert Another Number?(y/n): ";
		cin >> answ;
		if (answ == "N" || answ == "n")
		{
			isRunning = false;
			system("CLS");
			cout << "Thank You For Testing My Homework!\n";
		}
		else
		{
			system("CLS");
		}
	}
}