A tcp segment consists of the following headers
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