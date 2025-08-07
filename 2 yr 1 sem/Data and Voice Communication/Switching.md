__DTE__ - data terminal/terminating equipment
__DTU__ - data terminating unit
__DCE__ - data communication equipment.
__Switching__ is the process of transferring data packets from one device to another in a network, using specific devices called __switches__.
There are 3 types of switching namely:
1. Circuit switching
2. Message switching
3. Packet switching

## 1. Circuit Switching
Circuit switching is fully described by the following 3:
1.  Circuit set-up(circuit establishment) -> Dedicated path(circuit) -charging is based on duration of the connection.
2. Exchange information(data)
3. Call disconnection

### Advantages
1. It has fixed bandwidth.
2. A dedicated communication channel increases the quality of communication.
3. No waiting time at switches
4. Suitable for long continuous communication.

### Disadvantages
1. Resources are wasted if not fully utilized.
2. The time required to establish the physical link between the two is long.
3. It is more expensive.
4. Dedicated channels require more bandwidth.
5. Even if no data is being transferred, the link is still maintained until when terminated by the users.
6. A dedicated connection makes it impossible to send data even if the channel if free.
 
## 2. Message Switching / Store and Forward
SMS - Short Message service
Message - a data unit with some digital meaning.
Store the message.
Wait for the availability:
1. The link
2. The next node

### Advantages

### Disadvantages
1. It is not suitable for real-time communication i.e streaming, video conferencing
## 3. Packet Switching
A message is divided into smaller units known as __packets__

### 1. Datagram switching
Each packet has complete addressing information
Packets are routed independently.
A packet contains sequence numbers
1. Ordering
2. Detecting if a packet is lost
Packets may follow different paths.
No call establishment phase
### 2. Virtual circuit Switching
A packet contains a payload(data), address and a virtual channel identifier.
