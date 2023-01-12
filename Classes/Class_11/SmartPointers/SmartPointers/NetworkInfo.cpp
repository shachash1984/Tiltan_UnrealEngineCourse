#include "NetworkInfo.h"

#include <iostream>

NetworkInfo::NetworkInfo(std::string const& _ipAddress, unsigned short _port)
	:	ipAddress(_ipAddress)
	,	port(_port)
{
	std::cout << "NetworkInfo " << "with ip: " << ipAddress << " Connected!" << std::endl;
}

NetworkInfo::~NetworkInfo()
{
	std::cout << "NetworkInfo " << "with ip: " << ipAddress << " Disconnected..." << std::endl;
}

std::string NetworkInfo::GetNetworkIPAddress() const
{
	return ipAddress;
}

int NetworkInfo::GetNetworkPort() const
{
	return port;
}
