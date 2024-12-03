The Transport layer is the 3 layer of the TCP/IP model and the fourth layer of the OSI model.
The Tranport Layer breaks the data into individual segments which are then send over through either of the two protocols listed below:
1. __TCP (Transmission Control Protocol)__ which is a stateful protocol that ensures all packets reach the destination.
2. __UDP (User Datagram Protocol)__ is a stateless(best effort) protocol that does not care whether packets reach their destination.
## 1.TCP 
TCP has a mandatory three way handshake before any communication takes place which goes as follows:
The 3 way handshake goes as follows:
__1. SYN__ (synchronisation) segment by the client - asking the server if it can open a connection for the client.
__2. SYN ACK__ (synchronisation acknowledgement) message by the server - the server acknowledges the client's connection request and ask it also to open a connection for it on the client side.
__3. ACK__ (acknowledgement) message the client - the client acknowledges the server request to open a connection too.
As stated earlier the tranport layer breaks each message into segments; TCP allocates these segments, sequence numbers each in a sequential order then adds a window size which tells us the number of segments that are sent before acknowledgement.
The segments are then encapsulated via the lower layers and then are sent to the client.
So a server application sets the window size to four 4 and 4 segments are sent at a time before an acknowledgement is expected. This is what constitutes the sliding window in TCP. 
TCP keeps track of the number of segments that have been sent from a specific application. If the sender does not receive an acknowledgment within a certain period of time, it assumes that the segments were lost and retransmits them. Only the portion of the message that is lost is resent, not the entire message.
For stable connection i.e. communication in the LAN the entire message is usually sent and confirmed after transmission using the segment numbers. For unstable connection i.e intercontinental communication via satellites then we use smaller segment groups so that we resend the smaller group of segments that are missing.
TCP also has congestion control to avoid overloading the network.
## 2.UDP
UDP is a best effort protocol. It just segments the packets and sends them over the network(s).
UDP lacks a handshake.
UDP segements lack a sequence number.

## Differences between TCP and UDP 
| TCP                                                                   | UDP                                                      |
| --------------------------------------------------------------------- | -------------------------------------------------------- |
| Connection must be established first                                  | No connection required                                   |
| Slower                                                                | Faster                                                   |
| Reliable                                                              | Unreliable                                               |
| Has a 3-way handshake                                                 | No hanshakes                                             |
| Excellent for mailing, file transfer, direct messaging, and websites. | Good for gaming, streaming, voIP and video conferencing. |
| Has congestion control                                                | No congestion control                                    |
