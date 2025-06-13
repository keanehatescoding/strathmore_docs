The IP header consists of the following:
1. IP version - IPv4 or IPv6
2. Internet Header Length - this tells us how big the packet is because the packet size can vary.
3. Type of Service - 1 byte
4. Total Length - 2 bytes 
5. Identification - 2 bytes, it used when sending segmented packets
6. Flags - 3 bits, can have flags such as do not fragment packet flag which prevents the packet from being sent if it it fragmented.
7. Fragment Offset - 15 bits, identify the part of data which corresponds to the packet being sent.
8. Time to Live - 1 byte maximum number of router hops before the packet is dropped. Every time the packet is sent from a router it's TTL is deducted by one.
9. Protocol - 1 byte
10. Header checksum - 2 bytes, checks if the packet was corrupted during transmission.
11. Source Address - 4 bytes
12. Destination Address - 4 bytes
13. Options - optional
14. Padding - optional