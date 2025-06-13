This is a protocol that is used to automatically configure IP address and subnet mask to hosts in a network and possibly other information.
The DHCP Server communicates via UDP port 67.
The DHCP Client communicates UDP port 68.
When a host wants to ask a DHCP server/router for an IP address the following DHCP handshake takes place.
1. __DHCP Discover__ - the client sends a broadcast packet asking if their is a DHCP server in the network. The broadcast packet has FF.FF.FF.FF.FF.FF as the destination mac address.
2. __DHCP Offer__ - the DHCP server sends unicast (mostly) packet offering a IP address to the client.
3. __DHCP Request__ - the client sends a broadcast packet that requests the DHCP server to use the offered address.
4. __DHCP ACK__ - the DHCP server consents (acknowledges) to the client to use that DHCP offer given.

__DORA__ - discover offer request acknowledge