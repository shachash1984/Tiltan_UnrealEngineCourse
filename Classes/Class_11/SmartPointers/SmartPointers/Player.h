#pragma once
#include <memory>
#include <string>
#include "NetworkInfo.h"
#include "GameSession.h"

class Player
{
public:
	Player(std::string const& _name, int _speed);

	

	int GetSpeed() const { return speed; }
	std::string GetName() const { return name; }

	std::string GetSessionId();

	void CreateNewGameSession();

	Player(Player const& _other);
	Player& operator=(Player const& _other);
	std::string GetNetworkIPAddress() const;
	void ConnectToNetwork(std::string const& _ipAddress, unsigned short _port);

private:
	std::string name{"Unknown"};
	int speed{10};
	
	std::shared_ptr<GameSession> gameSession{ nullptr };

	std::unique_ptr<NetworkInfo> networkInfo{ nullptr };
};
