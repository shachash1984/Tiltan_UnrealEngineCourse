#include <iostream>

#include "Player.h"
#include "GameSession.h"
#include <memory>

void PrintPlayerName(Player p)
{
	std::cout << p.GetName() << std::endl;
	
}


int main()
{

	{
		Player player1("Player1", 10);

		player1.ConnectToNetwork("212.50.60.70", 80);

		player1.CreateNewGameSession();
		std::string s1 = player1.GetSessionId();
		player1.CreateNewGameSession();

		Player player2 = player1;


		Player player3("Player3", 20);
		player3 = player2;

		PrintPlayerName(player3);

		
		
	}
	return 0;
}