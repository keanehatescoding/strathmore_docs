The  Transport layer is the fourth layer of the OSI model and the 3 layer of the TCP/IP model.
The Tranport Layer breaks the message into individual segments which are then send over through either of the two protocols listed below:
1. TCP(Transmission Control Protocol) which is a stateful protocol that ensures all packets reach the destination.
2. UDP (User Datagram Protocol) is a stateless(best effort) protocol that does not care whether packets reach their destination.
## TCP 
TCP has a mandatory three way handshake before any communication takes place which goes as follows:
The 3 way handshake goes as follows:
__1. SYN__ (synchronisation) message by the client.
__2. SYN ACK__ (synchronisation acknowledgement) message by the server.
__3.ACK__ (acknowledgement) message the user.
As stated the tranport layer breaks each message into segments; TCP allocates these segments a sequence numbers each in a sequential order then passed to the IP process for assembly into packets and then transmission.
TCP keeps track of the number of segments that have been sent from a specific application. If the sender does not receive an acknowledgment within a certain period of time, it assumes that the segments were lost and retransmits them. Only the portion of the message that is lost is resent, not the entire message.
For stable connection i.e. LAN the entire message is usually sent and confirmed after transmission using the segment numbers. For unstable connection i.e intercontinental communication via satellites then we use smaller segment groups so that we resend the smaller group of segments that are missing.
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