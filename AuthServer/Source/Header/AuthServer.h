#pragma once

#include <Listener.h>
#include <AuthSocket.h>
#include <Logger.h>

class AuthServer
{
public:
	AuthServer(int _port = 12345, int _workerThread = 1);
	~AuthServer();

	bool Start();
private:
	Listener<AuthSocket>	*network;
	int port;
	int worker;
};