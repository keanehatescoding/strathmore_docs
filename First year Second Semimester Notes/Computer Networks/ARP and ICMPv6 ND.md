## Arp on the same LAN
address resolution protocol is used to find the mac address of the a node from it's known ip address i.e. resolve ip addresses to mac addresses. When the source ip is sending the frame it puts the broadcast address i.e
<b>FF.FF.FF.FF.FF.FF</b> as it's destination mac address meaning the switch pings this frame to every connected device. The recipient responds with his mac address. 
Ipv6 uses ICMPv6 Network Discovery to find the destination mac address as IPv4 uses ARP to find the destination mac address of the other node.