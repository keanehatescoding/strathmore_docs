This is a protocol that is used to dynamically assign hosts an ip address, default gateway and dns server instead of relying on a network admin to statically configure each hosts every time.
The DHCP Server communicates via UDP port 67.
The DHCP Client communicates UDP port 68.

__Dhcp Discover__ - the client sends a broadcast packet asking if their is a dhcp server in the network. The broadcast packet has FF.FF.FF.FF.FF.FF as the destination mac address.
__Dhcp Offer__ - the DHCP server sends unicast (mostly) packet offering a ip address to the client.
__Dhcp Request__ - the client sends a broadcast packet that requests the DHCP server to use the offered address.
__Dhcp ACK__ - the DHCP server consents (acknowledges) to the client to use that dhcp offer given.

__DORA__ - discover offer request acknowledge