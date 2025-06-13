At the transport layer there are 2 main protocols namely:
1. TCP
2. UDP
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
A tcp segment consists of the following headers
A transport layer header consists of the following:
1. Source Port - 2 bytes
2. Destination Port - 2 bytes
3. Sequence Number - 4 bytes
4. Acknowledgement Number - 4 bytes 
5. Header Length - 4 bits/ 1 octet
6. Reserved- 3 bits
7. Flags - 9 bits the flags that can be in the segment are listed below:
8. Window size - 2 bytes 
9. TCP Checksum -  2 bytess
10. Urgent Pointer - indicates urgent data if the URG Flag is set - 2 bytdes
11. Options
12. Data

## Flags
__SYN__ - initiates a new connection
__ACK__ - acknowledges a receipt of a packet
__FIN__ - signals the normal closing of a connection or the last packer from the sender.
__RST__ - reset the connection.
__URG__ - indicates the urgent pointer field is significant. 
__PSH__ - asks to push the buffered data to the application.
## 2.UDP
UDP is a best effort protocol. It just segments the packets and sends them over the network(s).
UDP lacks a handshake.
UDP segements lack a sequence number.
9. TCP Checksum -  2 bytes
10. Urgent Pointer - indicates urgent data if the URG Flag is set - 2 bytes
11. Options
12. Data

## Flags
__SYN__ - initiates a new connection
__ACK__ - acknowledges a receipt of a packet
__FIN__ - signals the normal closing of a connection or the last packer from the sender.
__RST__ - reset the connection.
__URG__ - indicates the urgent pointer field is significant. 
__PSH__ - asks to push the buffered data to the application.