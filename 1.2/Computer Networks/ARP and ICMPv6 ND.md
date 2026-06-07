## <abbr title="address resolution protocol">ARP</abbr> on the same LAN
<abbr title="address resolution protocol">ARP</abbr> is used to find the mac address of the a target node by using it's known <abbr title="internet protocol version 4">IPv4</abbr> address i.e. resolve <abbr title="internet protocol version">IPv4</abbr> addresses to mac addresses. When the source node is sending the frame it sets the destination mac address as __FF.FF.FF.FF.FF.FF__. This in turn makes every switch broadcast the frame to all other ethernets except the one that delivered the frame.
Each node process the frame but node with the destination IPv4 address responds with his mac address. This is then forwarded to the original source mac address by the switch and then it adds it to it's <abbr title='address resolution protocol'>arp</abbr> table. This way the two nodes can communicate to each other.
The Ether type of an <abbr title="address resolution protocol">arp</abbr> frame is __0x806__.
Newer Windows operating systems store <abbr title="address resoltution protocol">ARP</abbr> table entries between 15 and 45 seconds
To show the <abbr title="address resolution protocol">ARP</abbr> table of a windows pc type:
```shell
arp -a
```

To show the <abbr title="address resolution protocol">ARP</abbr> table of a Cisco router type
```shell
show ip arp
```
A security mitigation to <abbr title="address resolution protocol">ARP</abbr> attacks is using <abbr title="dynamic ARP inspection">DAI</abbr>. 
## <abbr title="internet control message protocol neighbor discovery">ICMPv6 ND</abbr>
It is defined in __IETF RFC 4861__.
<abbr title="internet protocol version 6">IPv6</abbr> uses <abbr title="internet control message protocol version 6">ICMPv6</abbr> Network Discovery to find the destination mac address as <abbr title="internet protocol version 4">IPv4</abbr> uses <abbr title="address resolution protocol">ARP</abbr> to find the destination mac address of the other node.
There are 5 types of messages that <abbr title="internet control message protocol neighbor discovery">ICMPv6 ND</abbr> uses to perform these services:
1. Neighbor solicitation messages
2. Neighbor advertisement messages
3. Router solicitation messages
4. Router advertisement messages
5. Redirect messages
Unlike <abbr title="Address Resolution Protocol">ARP</abbr>, <abbr title="internet control message protocol version 6 neighbor discovery">ICMPv6 ND</abbr> uses a multicast <abbr title="internet protocol version 6">IPv6</abbr> and mac addresses as opposed to <abbr title="address resolution protocol">ARP</abbr> which uses a broadcast mac address. This is more convenient because the Ethernet <abbr title="network interface card">NIC</abbr> of the receiving device to determine whether the Neighbor solicitation message is meant for it without having to send it to the operating system for processing.
Pc2 replies to the request with an <abbr title="internet control message protocol version 4">ICMPv6</abbr> Neighbor Advertisement message which includes its MAC address.

Router solicitation and router advertisement are use in <abbr title='static link-local address auto-configuration'>SLAAC</abbr> and dynamic address allocation.
The default gateway address can only be obtained dynamically from the RA message. The stateless or stateful DHCPv6 server does not provide the default gateway address.
A ICMPv6 router advertisement includes the following:
1. __Network prefix and prefix length__
2. __Default gateway address__
3. <b><abbr title="domain name system">DNS</abbr> addresses and domain name</b>.
Redirect message which is used for better next-hop selection. 