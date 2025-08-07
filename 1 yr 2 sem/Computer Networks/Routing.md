Routing is the process by which a router(s) forwards a packet from a source host i.e a PC to a destination host i.e another PC in another subnet/network.
A router uses a routing table to route packets or see if a packet is intended for it.
Whenever we configure a router's interface 2 routes are automatically added to it's routing table namely:
1. Local Router(__L__)
2. Connected Route(__C__)
The local route which is the IP address assigned to  the interface i.e 192.168.0.1/32, this tells the router a packet is intended for it.
A connected route is a route to the network the interface is connected to with the subnet mask configured on the interface.
So whenever a router receives a packet in an interface it sees if it is intended for it via the destination i.e 192.168.0.1 means its meant for the router, otherwise is 192.168.0.64 means its meant to be forwarded by interface with the connected route 192.168.0.0/24.
The default gateway is the default route for a client. It is a network route to 0.0.0.0/0, it therefore includes all addresses from 0.0.0.0 to 255.255.255.255.
For inter-vlan routing we have 3 options
1. Legacy inter-vlan routing
2. Router on a stick
3. <abbr title="Multi Layer Switch">MLS</abbr> inter-vlan routing

For legacy inter-vlan routing, several physical ports of a router are configured to be part of their specific vlan.
A major drawback of this is routers usually don't have many ports additionally you need to purchase a router with at least 2 interfaces.
For router on a stick a router must understand 802.1q standard.
A drawback of this is you need to purchase a router that understands 802.1q standard to use router on a stick.