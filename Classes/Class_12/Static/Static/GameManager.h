#pragma once
class GameManager
{
private:
    static GameManager* instance;
    GameManager() {} // private constructor

public:
    static GameManager* getInstance()
    {
        if (!instance)
            instance = new GameManager();
        return instance;
    }

	void Print()
	{
		std::cout << "Game Started" << std::endl;
	}
};

GameManager* GameManager::instance = nullptr;