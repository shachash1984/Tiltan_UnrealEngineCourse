#include <iostream>

	std::string Name;
	int Age;
	using namespace std;

	int Attributes = 600;

	float Hp;
	//float Mana;//Duplicate declaration - 5 points
	int Mana;
	int Magic;
	int dexterity;
	int vitality;

void PrintOutPlayer()
{
	//missing using namespace std;
	//all variables are not defined in this scope (only in main)
	cout << "Player Name: " + Name;
	cout << "Player Age: " + Age;
	cout << "Player Hp: " << Hp; //cannot add int to string cout << "Player Hp: " + Hp;  //Need to be: cout << "Player Hp: " << Hp; 
	cout << "Player Mana: " << Mana; //cannot add int to string cout << "Player Mana: " + Mana;  //Need to be: cout << "Player Mana: " << Mana;
	cout << "Player Magic: " + Magic;
	cout << "Player Dexterity: " + dexterity;
	cout << "Player Vitality: " + vitality;
}

bool OutOfAttributes() //should either take Attribute as a parameter or maybe Attribute should be global
{
	if (Attributes > 0) // I think you meant Attributes <= 0 -5 points
	{
		cout << "You have no more points left";
		PrintOutPlayer(); // missing semi colon -1 point
			return true;
	}
	return false;
}

	

void main()
{
	

	cout << "Hello!"; // missing std or using namespace std - 5 points

	cout << "Please enter Player name";
	cin >> Name; // Variable not declared - 5 points

	cout << "Please enter Age";
	cin >> Age; // cant use a variable before declaring it - 5 points

	cout << "Please enter Player name";
	cin >> Name;

	while (Attributes > 0)
	{
		int added = 0;
		cout << "Please Add Hp points, you now have " << Attributes << "points left"; // if we do not convert the int into a string we need to use the << operator - 5 points
		cin >> added; // need to declare the variable before using it - 5 points
		Hp = Hp + added;
		Attributes = Attributes - added;
		if (OutOfAttributes()) { break; } // cannot call a function before declaring it - no reduction of points - we havent learned it yet


		cout << "Please Add Mana points, you now have " << Attributes << "points left";
		cin >> added;
		Mana = Mana + added; // Mana is already declared as an int - 5 points
		Attributes = Attributes - added;
		if (OutOfAttributes()) { break; }

		cout << "Please Add Magic points, you now have " << Attributes << "points left";
		cin >> added;
		Magic = Magic + added;
		Attributes = Attributes - added;
		if (OutOfAttributes()) { break; }

		cout << "Please Add dexterity points, you now have " << Attributes << "points left";
		cin >> added;
		dexterity = dexterity + added;
		Attributes = Attributes - added;
		if (OutOfAttributes()) { break; }

		cout << "Please Add vitality points, you now have " << Attributes << "points left";
		cin >> added;
		vitality = vitality + added;
		Attributes = Attributes - added;
		if (OutOfAttributes()) { break; }




	}

	

}

