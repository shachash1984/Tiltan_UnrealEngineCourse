#include "GameSession.h"

#include <iostream>

GameSession::GameSession(std::string _sessionId)
	: sessionId(_sessionId)
{
	std::cout << "GameSession created" << ", ID: " << _sessionId << std::endl;
}

GameSession::~GameSession()
{
	std::cout << "GameSession destroyed" << std::endl;
}
