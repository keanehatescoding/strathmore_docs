There are 2 main ways of routing packets:

1. Static routing
2. Dynamic routing

## Advantages of Static routing

1. Improved security.
2. It is more resource efficient.
3. Uses less bandwidth, since no CPU cycles are used to calculate or communicate routes.

## Disadvantages

1. Lack of automatic reconfiguration when the network topology changes
2. May send packets to hosts/routers that no longer exist.
3. They are a pain to set up for larger networks.

Dynamic routing protocols are classified into two:

1. Distance Vector dynamic routing protocols.
2. Link State dynamic routing protocols.

# Distance Vector Algorithms

Also known as **routing by rumors** routing protocols.
They operate by sending the following to their connected neighbors:

1. Their known destination networks.
2. Their metric to reach their known destination networks.
   They are further classified into two
3. Classful
4. Classless

## Classful

Classful routing protocols do not include a subnet mask in the routing update.
Therefore there are not ideal for topologies that have VLSM, CIDR notation or are said to be discontiguous.

### RIPv1

RFC 1058
**Routing Information Protocol** is a simple routing protocol often used often used in small networks. RIPv1 uses local broadcasts to share routing
information. These updates are periodic in nature, occurring, by default, every 30
seconds. To prevent packets from circling around a loop forever, RIP solve counting to infinity by placing a hop count limit of 15 hops on packets.
Any packet that reaches **the sixteenth hop will be dropped**. RIPv1 is a classful protocol. **RIP supports
up to six equal-cost paths** to a single destination. Equal-cost path are the paths where **the metric is same (Hop count).**
RIPv1 uses **broadcast messages**.

### IGRP

## Classless

Classless routing protocols include a subnet mask in the routing update

### RIPv2

RFC 1721 and RFC, 1722
Routers running RIP share information about the networks they can reach and the number of hops (routers) required to get there. As a result, each router builds a routing table based on this information, choosing the routes with the fewest hops to reach each destination.
If a router finds 2 different routes to one network then the traffic is load-balanced between both routes equally even if one route has a higher bandwidth than the other.
RIP updates are only sent out via rip enabled interfaces to other interfaces which have RIP enabled.
RIPv2 uses **multicast address** is **224.0.0.9.**
RIPv2 also supports **triggered updates** when a change occurs, a RIPv2 router will immediately propagate its routing information to its connected neighbours.
Sending RIP updates to LANs wastes bandwidth, wastes resources, and is a security risk.
Use the passive-interface routerconfiguration command to stop routing updates out the interface. Still allows that network to be advertised to other routers.
It also supports VLSM and CIDR notation.
It also supports **authentication**.

### RIPng

The primary features of RIPng are the same as they were in IPv4: It’s still a distance-vector protocol, has a maximum hop count of 15 and uses split horizon, poison reverse and other loop avoidance mechanisms.
RIPng still uses multicast to send routing updates, but in IPv6, it uses **FF02::9** for the multicast traffic.
One the most notable changes with RIPng (and all other IPv6 routing protocols), is that you enable network advertisement from interface configuration mode of a router instead of using network command in the global configuration mode.

### <abbr title="Extended Interior Gateway Routing Protocol">EIGRP</abbr>

It is a enhancement of <abbr title="Interior Gateway Routing Protocol">IGRP</abbr>.
Enhanced Interior Gateway Routing protocol is a Cisco proprietary routing protocol that combines aspects of different routing algorithms. It allows routers to share information about the networks they can reach and the cost (like bandwidth or delay) associated with those routes. Routers then use this information to choose the most efficient paths for data transmission.
EIGRP multicast address is 224.0.0.10.

# Link State Algorithms

In this type of routing algorithms every router advertises the information about it's interfaces. These advertisements are passed along to other routers until all routers in a network develop the same map of the network.
Each router now uses this map to calculate the optimal path to another network.

## <abbr title="Open Shortest Path First">OSPF</abbr>

It is a <abbr title="Interior Gateway Protocol">IGP</abbr> that uses a link-state algorithm to determine the path of the lowest cost.
Open shortest path first is a routing protocol that allows routers to share information about the network topology and calculate the most efficient paths for data transmission. It does this by having routers exchange updates about the state of their connected links and networks. This way, each router has a complete map of the network and can determine the best routes to reach any destination.
OSPF also uses multicast transmission. Routers which have enabled OSPF communicate with each other using the reserved <abbr title="open shortest path first">OSPF</abbr> multicast 224.0.0.5. Devices which have enabled <abbr title="open shortest path first">OSPF</abbr> will process the packets with 224.0.0.5 as the destination <abbr title="Internet Protocol Version 4">IPv4</abbr> address. All other devices ignore these packets.
If a router finds 2 different routes to one network then the traffic is load-balanced between both routes if similar cost. If one route has a higher bandwidth then it is used.

## IS-IS

Intermediate System to Intermediate system

## MPLS

An IPv4 loopback interface is typically configured on a router for testing and management purposes. • A loopback interface is a logical interface internal to the router. – It is not assigned to a physical port and can not be connected to any other device. – It is a software interface that is automatically placed in an “up” state as long as the router is functioning. •
**Default Route** this is a an special address and interface that a router uses to forward any packets that it does not know how to get to a certain network.

## Types

An **ultimate route** is a routing table entry that contains either a next-hop IPv4 address or an exit interface. Directly connected, dynamically learned, and local routes are ultimate routes.
An IPv6 routing table includes directly connected, static and dynamically learned routes.
All IPv6 routes are level 1 ultimate routes.
A **level 1 route** can be a:
**Network route** - a network route that has a subnet mask equal to that of the classful mask.
**Supernet route** - a network address with a mask less than the classful mask, for example, a summary address.
**Default route** - a static route with the address 0.0.0.0/0 or ::/0 for IPv6.
A **parent route** is a level 1 route that has been submitted.
A **level 2 child** route is a route that is a
subnet of a classful network address.
The best match is the route in the routing table that has the most number of far left
matching bits with the destination IPv4 address of the packet.
Router lookup process:

1. If the best match is a level 1 ultimate route, then this route is used to forward the packet.
2. If the best match is a level 1 parent route, the
   router then examines child routes (the subnet
   routes).
3. If there is a match with a level 2 child route, that is used to forward the packet.
4. If there is no match with level 2 child routes, the
   router searches level 1 supernet or default routes.
   If there is a match, that route is used.
5. If there is no match found in the routing table the packet is dropped.
   **C** - directly connected route
   **L** - Local route
   **S** - a statically configured route
   **O** - a route learned via OSPF
   **D** - a route learned via EIGRP
   _i_ - a route learned via iBGP

# Path Vector Algorithm

## <abbr title="Border Gateway Protocol">BGP</abbr>

Border gateway protocol is the **primary routing protocol** used on the internet used on the Internet. It allows different networks (like those of Internet Service Providers) to exchange routing information and establish paths for data to travel between these networks. BGP helps ensure data can be routed efficiently across the Internet, even when traversing multiple networks.

| Protocol | Metric                                        |
| -------- | --------------------------------------------- |
| RIP      | Hop Count                                     |
| EIGRP    | Metric based on Bandwidth & delay(by default) |
| OSPF     | Cost                                          |
| IS-IS    | Cost                                          |

| Route Protocol/Type | Administrative Distance |
| ------------------- | ----------------------- |
| Directly Connected  | 0                       |
| Static              | 1                       |
| External BGP(eBGP)  | 20                      |
| EIGRP               | 90                      |
| IGRPF               | 100                     |
| OSPF                | 110                     |
| IS-IS               | 115                     |
| RIP                 | 120                     |
| EIGRP (external)    | 170                     |
| Internal BGP(iBGP)  | 200                     |
| Unusable route      | 255                     |

Note the administrative distance(AD) of a route can be changed.
When a packet is destined to another network using different routes i.e OSPF, EIGRP but the destination network's match i.e O - 10.0.0.0/24, S - 10.0.0.0/24 then we use AD to choose a route.
If the prefix length for the destination networks don't match i.e S - 10.0.0.0/26 and O - 10.0.0.0/28 then the route with the longest matching prefix is used i.e O over S even though static routes have a lower administrative cost than OSPF routes.
Floating static routes are the same as static routes the only difference is they have a higher administrative cost than normal routes.
