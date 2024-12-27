
#include "Server.hpp"

Server::Server() {
	socketfd = socket(AF_INET, SOCK_STREAM, 0);
	if (socketfd == -1)
		exit(1);
	address.sin_family = AF_INET;
	address.sin_port = htons(8080);
	address.sin_addr.s_addr = inet_addr("127.0.0.1");
	std::memset(&address.sin_zero, '\0', sizeof(address.sin_zero));
	int reuse = 1;
	if (setsockopt(socketfd, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof(reuse)) == -1)
		exit(12);
	if (bind(socketfd, (struct sockaddr *)&address, sizeof(address)) < 0)
		exit(2);

	if (listen(socketfd, 5) < 0)
		exit(3);

	while (true) {
		// struct sockaddr_in address;
		// int size =
		std::cout << "===== WAITING FOR CONNECTION =====" << std::endl;
		socklen_t len = sizeof(address);
		int newSocket = accept(socketfd, (struct sockaddr *)&address, &len);
		if (newSocket == -1)
			exit(4);
		char buffer[BUFFER_SIZE] = {0};
		ssize_t bytes_received;
		std::cout << "===== CONNECTION ESTABLISHED =====" << std::endl;
		while ((bytes_received = recv(newSocket, &buffer, sizeof(buffer), 0)) > 0) {
			std::cout << buffer << std::endl;
			std::string buf;
			buf.assign(buffer);
		}
		if (bytes_received == -1)
			exit(5);
	}
}