

#include <iostream>
#include <ostream>

enum DIFFICULTY
{
	EASY = 0,
	MEDIUM,
	HARD
};

float health = 100.0f;

void SetHealth(float newHealth)
{
	health = newHealth;
	newHealth = 0.0f;
}

class Player
{
public:
	int id{100};
};

void ResetPlayerID(Player player)
{
	player.id = 0;
}

int main()
{

	Player player;
	player.id = 1;

	ResetPlayerID(player);

	float LowerHealth = 50.0f;
	SetHealth(LowerHealth);
	std::cout << LowerHealth << std::endl;

	DIFFICULTY const diff = EASY;
	switch (diff)
	{
	case EASY:
		std::cout << "Easy" << std::endl;
		break;
	case MEDIUM:
		std::cout << "Medium" << std::endl;
		break;
	case HARD:
		std::cout << "Hard" << std::endl;
		break;
	default:
		std::cout << "Unknown" << std::endl;
		break;
	}

	if (diff == EASY)
	{
		std::cout << "Easy" << std::endl;
	}
	else if (diff == MEDIUM)
	{
		std::cout << "Medium" << std::endl;
	}
	else if (diff == HARD)
	{
		std::cout << "Hard" << std::endl;
	}
	else
	{
		std::cout << "Unknown" << std::endl;
	}

	for (unsigned int i = 0; i < 100; ++i)
	{
		std::cout << i << std::endl;
	}

	float timer = 0.0f;
	float const deltaTime = 0.01f;
	float const maxTime = 1.0f;
	while (timer < maxTime)
	{
		timer += deltaTime;
		std::cout << timer << std::endl;
	}



	unsigned int a = 1; // 00000000 00000000 00000000 00000000 4,294,967,296
	int b = -1; // 11111111 11111111 11111111 11111111 -1

	std::cout << a << "\n";

	char c = 'a'; // 01100001 97
	unsigned char c2 = 255; // 11111111 255

	bool b1 = true; // 00000001 1
	bool b2 = false; // 00000000 0

	float f = 0.15f; // 00111101 00111101 00111101 00111101 0.14999999

	double d = 0.15; // 00111111 11111111 11111111 11111111 11111111 11111111 11111111 11111111 0.15

	const double cd = 0.11; // 00111111 11111111 11111111 11111111 11111111 11111111 11111111 11111111 0.11

	int const i = 11;
	const int i1 = 11;

	return 0;
}






