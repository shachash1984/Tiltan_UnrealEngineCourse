#pragma once
#include <string>


class NetworkInfo
{
public:
	NetworkInfo(std::string const& _ipAddress, unsigned short _port);
	~NetworkInfo();
	std::string GetNetworkIPAddress() const;
	int GetNetworkPort() const;


private:
	std::string const ipAddress{"127.0.0.1"};
	unsigned short const port{ 80 };
};
