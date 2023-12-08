#include "tcp-server.h"
#include <iostream>

TcpServer::TcpServer(std::string ip_address, int port)
{
    std::cout << "Hello Constructor" << std::endl;
    return;
}

TcpServer::~TcpServer()
{
    std::cout << "Hello Destructor" << std::endl;
    return;
}

void TcpServer::startListen()
{
    std::cout << "Hello Listener" << std::endl;
    return;
}