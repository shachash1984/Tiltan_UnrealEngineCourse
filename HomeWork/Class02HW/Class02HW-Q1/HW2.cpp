#include <iostream>

using namespace std;

enum Enemies
{
	Tank,
	Mage,
	Archer,
	Rouge
};
int* CreateEnemy();

int main() {
	CreateEnemy();
}

int* CreateEnemy()
{
	cout << "Enter Enemy type:\n" << "0 - Tank\n 1 - Mage\n 2 - Archer\n 3 - Rouge\n";
	Enemies E1;
	int answer;
	cin >> answer;
	switch (answer)
	{
	case 0:
		E1 = Tank;
		break;
	case 1:
		E1 = Mage;
		break;
	case 2:
		E1 = Archer;
		break;
	case 3:
		E1 = Rouge;
		break;
	default:
		break;
	}
	int arr[4];
	cout << "Enter Enemy Attributes values (Between 1 - 1000):\n";
	for (int i = 0; i < sizeof(arr);)
	{
		int tmp;
		switch (i)
		{
		case 0:
			cout << "Attack: ";
			cin >> tmp;
			if (tmp < 1 || tmp >1000)
			{
				cout << "The value needs to be between 1 - 1000\n";
			}
			else
			{
				arr[i] = tmp;
				i++;
			}
			break;
		case 1:
			cout << "Defence: ";
			cin >> tmp;
			if (tmp < 1 || tmp >1000)
			{
				cout << "The value needs to be between 1 - 1000\n";
			}
			else
			{
				arr[i] = tmp;
				i++;
			}
			break;
		case 2:
			cout << "Speed: ";
			cin >> tmp;
			if (tmp < 1 || tmp >1000)
			{
				cout << "The value needs to be between 1 - 1000\n";
			}
			else
			{
				arr[i] = tmp;
				i++;
			}
			break;
		case 3:
			cout << "Health: ";
			cin >> tmp;
			if (tmp < 1 || tmp >1000)
			{
				cout << "The value needs to be between 1 - 1000\n";
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