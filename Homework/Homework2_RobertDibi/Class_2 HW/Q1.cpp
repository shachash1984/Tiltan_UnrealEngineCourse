#include <iostream>

using namespace std;


enum Enemies
{

  Rumbler,
  Runner,
  Archer,
  Assassin,

};
int* EnemyArray();

int main()
{
	EnemyArray();
}

int* EnemyArray()
{
	cout << "Enter Enemey Type : \n" << " 0 - Rumbler \n 1 - Runner \n 2 - Archer \n 3 - Assasin \n";
	Enemies E1;
	int answer;
    cin >> answer;
	switch (answer)
	{
	case 0:
		E1 = Rumbler;
		break;

	case 1:
		E1 = Runner;
		break;

	case 2:
		E1 = Archer;
		break;

	case 3:
		E1 = Assassin;
		break;	
	default:
		break;
	}
	int arr[4];
	cout << "Enter Enemy Attributes values : (from 1 - 1000) \n";
	for (int i = 0; i < sizeof(arr); )
	{
		int tmp;
		
		switch (i)
		{
		case 0:
			
			cout << "Attack : ";
			cin >> tmp;
			if (tmp < 1 || tmp >1000)
			{
				cout << "the value needs to be between 1 -1000";
			}
			else
			{
				arr[i] = tmp;
				i++;
			}
			
			break;
		case 1:
			
			cout << "Defence : ";
			cin >> tmp;
			if (tmp < 1 || tmp >1000)
			{
				cout << "the value needs to be between 1 -1000";
			}
			else
			{
				arr[i] = tmp;
				i++;
			}
			
			break;
		case 2:
			
			cout << "Speed : ";
			cin >> tmp;
			if (tmp < 1 || tmp >1000)
			{
				cout << "the value needs to be between 1 -1000";
			}
			else
			{
				arr[i] = tmp;
				i++;
			}
			
			break;
		case 3:
			
			cout << "Health : ";
			cin >> tmp;
			if (tmp < 1 || tmp >1000)
			{
				cout << "the value needs to be between 1 -1000";
			}
			else
			{
				arr[i] = tmp;
				i++;
			}
		
			break;
		}
	}

	return arr;
}