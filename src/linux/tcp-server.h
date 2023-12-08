#ifndef TCP_SERVER_H
#define TCP_SERVER_H

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <string>

class TcpServer
{
public:
    TcpServer(std::string ip_address, int port);
    ~TcpServer();
    void startListen();

private:
    int startServer();
    void closeServer();
    void acceptConnection(int &new_socket);
    std::string buildResponse();
    void sendResponse();
};

#endif