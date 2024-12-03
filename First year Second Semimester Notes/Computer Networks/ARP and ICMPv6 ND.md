## Arp on the same LAN
Address resolution protocol or simply ARP is used to find the mac address of the a node from it's known ipv4 address i.e. resolve ipv4 addresses to mac addresses. When the source ip is sending the frame it puts the broadcast address -> __FF.FF.FF.FF.FF.FF__ as it's destination mac address 
When a switch sees this it broadcasts frame to all interfaces except the incoming interface. Each node process the frame but node with the destination mac address responds with his mac address. 
## IPv6 NH/ Network Discovery
Ipv6 uses ICMPv6 Network Discovery to find the destination mac address as IPv4 uses ARP to find the destination mac address of the other node.