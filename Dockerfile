FROM gcc:4.9

# Set the working directory to /usr/src/linux
WORKDIR /usr/src/linux

# Copy the entire project directory into the container
COPY . .

# Create a build directory
RUN mkdir -p build

# Change to the build directory
WORKDIR /usr/src/linux/build

# Create the bin directory
RUN mkdir -p bin

# Compile the C++ code
RUN g++ -o bin/main ../src/main.cpp ../src/linux/tcp-server.cpp

# Change back to the main working directory
WORKDIR /usr/src/linux

# Expose the port that the server will run on
EXPOSE 8080

# Command to run the executable
CMD ["./build/bin/main"]
