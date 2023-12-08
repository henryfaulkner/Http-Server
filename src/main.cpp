#include "linux/tcp-server.h"

int main()
{
    TcpServer server = TcpServer("0.0.0.0", 8080);
    server.startListen();
    return 0;
}