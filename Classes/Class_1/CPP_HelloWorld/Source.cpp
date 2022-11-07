#include <iostream>

void main()
{
	int Attributes = 600;

	float Hp;
	float Mana;
	int Mana;
	int Magic;
	int dexterity;
	int vitality;

	cout << "Hello!";

	cout << "Please enter Player name";
	cin >> Name;

	cout << "Please enter Age";
	cin >> int Age;

	cout << "Please enter Player name";
	cin >> Name;

	while (Attributes > 0)
	{
		cout << "Please Add Hp points, you now have " + Attributes + "points left";
		cin >> int added;
		Hp = Hp + added;
		Attributes = Attributes - added;
		if (OutOfAttributes()) { break; }


		cout << "Please Add Mana points, you now have " + Attributes + "points left";
		cin >> int added;
		Mana = Mana + added;
		Attributes = Attributes - added;
		if (OutOfAttributes()) { break; }

		cout << "Please Add Magic points, you now have " + Attributes + "points left";
		cin >> int added;
		Magic = Magic + added;
		Attributes = Attributes - added;
		if (OutOfAttributes()) { break; }

		cout << "Please Add dexterity points, you now have " + Attributes + "points left";
		cin >> int added;
		dexterity = dexterity + added;
		Attributes = Attributes - added;
		if (OutOfAttributes()) { break; }

		cout << "Please Add vitality points, you now have " + Attributes + "points left";
		cin >> int added;
		vitality = vitality + added;
		Attributes = Attributes - added;
		if (OutOfAttributes()) { break; }




	}

	bool OutOfAttributes()
	{
		if (Attributes > 0)
		{
			cout << "You have no more points left";
			PrintOutPlayer()
				return true;
		}
		return false;
	}

	void PrintOutPlayer()
	{
		cout << "Player Name: " + Name;
		cout << "Player Age: " + Age;
		cout << "Player Hp: " + Hp;
		cout << "Player Mana: " + Mana;
		cout << "Player Magic: " + Magic;
		cout << "Player Dexterity: " + dexterity;
		cout << "Player Vitality: " + vitality;
	}

}

