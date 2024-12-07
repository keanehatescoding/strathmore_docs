A tcp segment consists of the following headers
1. Source Port - 16 bits
2. Destination Port - 16 bits
3. Sequence Number - 32 bits 
4. Acknowledgement Number - 32 bits
5. Header Length - 4 bits
6. Reserved- 6 bits
7. Flags - the flags that can be in the segment are listed below
8. Window size - 16 bits
9. TCP Checksum - 16 bits
10. URG Pointer - indicates urgent data if the URG Flag is set
11. Options
12. Data

## Flags
__SYN__ - initiates a new connection
__ACK__ - acknowledges a receipt of a packet
__FIN__ - signals the normal closing of a connection
__RST__ - indicates a hard close of a connection, often used to communicate errors.
__URG__ - marks urgent data in the packet
__PSH__ - Directs the data past the buffer to the applicaton