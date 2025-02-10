# Server Chat Application

## Overview
`server_chat` is a simple server-client chat application implemented in C. It demonstrates fundamental networking concepts using socket programming and supports real-time message exchange between a server and a client.

## Features
- **Server Mode**: Accepts a client connection and facilitates real-time communication.
- **Client Mode**: Connects to a server and enables message exchange.
- **Polling**: Uses the `poll()` function to handle asynchronous I/O for efficient communication.
- **Error Handling**: Implements robust error handling for socket-related operations.

## Technologies
- **Programming Language**: C
- **Networking Concepts**: TCP/IP socket programming
- **Libraries**: `sys/socket.h`, `netinet/in.h`, `arpa/inet.h`, `poll.h`

## Getting Started

### Prerequisites
- **Environment**: Linux-based operating system.
- **Compiler**: `gcc` or a similar C compiler.

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/AkanMNdem/server_chat.git
   ```

2. Navigate to the project directory:
   ```bash
   cd server_chat
   ```

3. Compile the code:
   ```bash
   gcc schat.c -o schat
   ```

## Usage

### Running the Server
1. Start the server:
   ```bash
   ./schat
   ```
2. The server will listen on a randomized port and display the port number in the terminal.

### Running the Client
1. Start the client and connect to the server using its IP address and port:
   ```bash
   ./schat [server_ip] [port]
   ```
2. Example:
   ```bash
   ./schat 127.0.0.1 8080
   ```
3. Begin chatting! Type messages to send them to the server or client.

## Code Structure
- **`schat.c`**: Contains the main server and client logic.
  - Handles socket creation, binding, listening, and communication.
  - Uses `poll()` for managing simultaneous I/O operations.
  - **Error Handling**: A helper function (`handle_error`) provides meaningful error messages for debugging.

## Functionality

### Server Mode
1. Creates a TCP socket and binds it to a randomized port.
2. Listens for incoming client connections.
3. Accepts a connection and starts polling for messages.
4. Receives messages from the client and sends responses back.

### Client Mode
1. Connects to the server using the specified IP and port.
2. Supports sending and receiving messages via polling.
3. Displays server responses on the console.

## Future Enhancements
- **Multi-Client Support**: Extend the server to handle multiple clients simultaneously.
- **Encryption**: Add secure communication using encryption libraries like OpenSSL.
- **Configuration File**: Allow server settings to be customizable via a configuration file.
- **Logging**: Implement detailed logging for monitoring and debugging.

## License
This project is licensed under the MIT License.

## Acknowledgments
This project is a foundational exercise in networking and is ideal for learning socket programming in C.
