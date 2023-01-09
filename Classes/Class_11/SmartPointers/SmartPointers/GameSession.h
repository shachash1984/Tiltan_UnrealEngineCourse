#pragma once
#include <string>

class GameSession
{
public:
	GameSession(std::string _sessionId);
	~GameSession();
	std::string GetSessionId() const {return sessionId;}

private:
	std::string sessionId{"Default"};
};
