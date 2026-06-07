A socket is an endpoint for communication between two or more process.
Types of sockets
1. Unix sockets
2. Stream sockets
3. Datagram sockets
Client initiates connection to the server and requests services.
Server waits for incoming requests, processes them and sends responses.
```python
import socket
data = input("Enter your response: ")
server_socket = socket.socket(AF_INET, SOCK_STREAM)
server_socket.bind(("ip_address",PORT_NUMBER))
server_socket.listen(5)
try:
	while True:
		client_socket,client_address = server_socket.accept()
		print(client_socket.recv(1024).decode('utf-8'))
		client_socket.sendall(data)
		client_socket.close()
except KeyboardInterrupt:
	print("Shutting down the server")
finally:
	server_socket.close()
````
## TCP Server Pseudocode
1. Create a socket
2. Bind address and port
3. Listen for incoming connections
4. Accept connections in a loop
5. Read/ Write data
6. Close socket

## TCP Client Pseudocode
1. Create socket
2. Connect to a server
3. Send/Recieve data
4. Close socket
```python
import socket
host = '127.0.0.1'
port = 5000
client_socket = socket.socket(AF_INET,SOCK_STREAM)
try:
	client_socket.connect((host,port))
	client_socket.sendall('Hello from client!'.encode('utf-')
	print(client_socket.recv(1024).decode())
except ConnectionRefusedError:
	print("Failed to connect to the server")
finally:
	client_socket.close()
	
```
## UDP Server Pseudocode
1. Create a socket
2. Bind a socket
3. Receive or send data without listen() and accept()
4. Close socket

## Iterative vs Concurrent Server
An iterative server handles one client at a time.
Process Flow while a concurrent server can handle multiple clients simultaneously.
### Iterative Server process
1. Accept a connection
2. Process client's request
3. Close the connection before accepting the next client
### Concurrent Server process
1. Accepts a client connection.
2. Creates a new process or thread for each client.
3. Handles each client independently, allowing others to connect without waiting.
### Pros of Iterative Server
1. Simple fewer resources
2. Suitable for low traffic environments

### Cons of Iterative Server
1. Not scalable


### Pros of Concurrent Server
1. High scalability
2. Efficiency for handling multiple clients

### Cons of Concurrent Server
1. Requires more system resources
2. Complexity in managing threads and processes

## Techniques for Building Concurrent Systems
### Forking (Process-Based Concurrency):
Each client connection is handled by a separate process.
**Pros:** Isolates each client in its own process, reducing cross-client impact.
**Cons:** High memory and CPU overhead.
System Call: fork() creates a new process for each client.
Example: Apache2 web server
### Multithreading (Thread-Based Concurrency):
Each client connection is handled by a separate thread within the same process.
**Pros:** More efficient memory use and context switching.
**Cons:** Threads share resources, which may lead to race conditions.
Thread Libraries: pthread in C, threading in Python.
Example: MySQL, Mariadb servers
### Event-Driven Architecture (Single-Threaded Concurrency):
Uses asynchronous I/O to handle multiple clients in a single-threaded model.
**Pros:** Very efficient in terms of memory and CPU.
**Cons:** More complex to implement due to asynchronous logic.
Libraries: select(), poll(), and epoll() in Unix/Linux.