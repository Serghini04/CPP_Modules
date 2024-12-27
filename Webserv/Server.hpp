
#pragma once
#include <sys/socket.h>
#include <unistd.h>
#include <iostream>
#include <arpa/inet.h>
#define BUFFER_SIZE 1024

class Server {
	private:
		int socketfd;
		struct sockaddr_in address;

	public:
		Server();
};