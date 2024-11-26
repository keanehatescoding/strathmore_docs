## Arp on the same LAN
address resolution protocol is used to find the mac address of the destination ip address. When the source ip is sending the frame it puts the broadcast address i.e
<b>FF.FF.FF.FF.FF.FF</b> as it's destination mac address meaning the switch pings this frame to every connected device. The recipient responds with his mac address. 