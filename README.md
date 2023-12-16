# Http-Server

Linux Http Server implementation from scratch. Written in C++.

# High Level

- Protocol: TCP
- Server will use a socket (TCP/IP) registered to IP address on the computer
- Server will listen to port 8080 for incoming network connections
- Network connections will be stored on a queue of network threads
  - When full, connection requests will fall through
- A network connection will create a temporary socket through which the server reads data from the client and sends data to the client

# Libraries

- Sys/socket
- Arpa/inet

# Useful Resources

- https://gist.github.com/juancsr/5927e6660d6ba5d2a34c61802d26e50a
  - Helped get Docker CLI running on my Mac

# Use Docker environment

- $docker build my-http-server
