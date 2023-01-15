#include "Player.h"

Player::Player(const std::string& _name, int _speed)
	: name(_name)
	, speed(_speed)
	, gameSession(nullptr)
{}

std::string Player::GetSessionId()
{
	if (gameSession)
	{
		return gameSession->GetSessionId();
	}
	else
	{
		return "Invalid";
	}
}

void Player::CreateNewGameSession()
{
	gameSession.reset();
	gameSession = std::make_shared<GameSession>("Session for: " + GetName());

	//gameSession = new GameSession("Session for: " + GetName()); // won't compile

}


Player::Player(Player const& _other)
{
	name = _other.name;
	speed = _other.speed;
	networkInfo = std::make_unique<NetworkInfo>(_other.networkInfo->GetNetworkIPAddress(), _other.networkInfo->GetNetworkPort());
	gameSession = _other.gameSession;
}

Player& Player::operator=(Player const& _other)
{
	name = _other.name;
	speed = _other.speed;
	networkInfo = std::make_unique<NetworkInfo>(_other.networkInfo->GetNetworkIPAddress(), _other.networkInfo->GetNetworkPort());
	gameSession = _other.gameSession;

	return *this;
}


std::string Player::GetNetworkIPAddress() const
{
	if (networkInfo)
	{
		return networkInfo->GetNetworkIPAddress();
	}
	else
	{
		return "No network info";
	}
}

void Player::ConnectToNetwork(std::string const& _ipAddress, unsigned short _port)
{

	networkInfo.reset(); // Reset the unique_ptr to nullptr and delete the object it was pointing to

	networkInfo = std::make_unique<NetworkInfo>(_ipAddress, _port); // Create a new NetworkInfo object and assign it to the unique_ptr
}



