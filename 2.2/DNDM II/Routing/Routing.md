Routing protocols are divided into 2 namely:
1. Interior Gateway Protocol(IGP)
2. Exterior Gateway Protocol(EGP)
An __autonomous system__ or a __routing domain__ is a group of routers under the control of a single authority.
<abbr title="Interior Gateway Protocol">IGP</abbr> or __intra-domain routing protocols__ are used to route traffic within a single autonomous system(AS) i.e an organization.
<abbr title="Exterior Gateway Protocol">EGP</abbr> or __inter-domain routing protocols__ are used to share routes between different autonomous systems. There is only on <abbr title="exterior gateway protocol">EGP</abbr> which is <b><abbr title="Border Gateway Protocl">BGP</abbr></b>.
There are 2 types of routing algorithms namely:
1. Non-adaptive(static routing) algorithms
2. Adaptive(dynamic routing) algorithms

These adaptive(non-static) routing algorithms are further classified into 3 namely
1. Distance Vector 
2. Link State
3. Path Vector
Routes can be ranked according to/Metric used in networks:
4. Hop count
5. bandwidth
6. Cost
7. Delay
8. Load 
9. reliability
10. Latency
11. complex metric
12. administrative distance

__Hop Count__ is the number of routers between the router and the destination.
__Bandwidth__ is the carrying capacity of the link or at times referred to as the speed of the link.
__Load__ is the amount of traffic in a link.
__Delay__ is the amount of time a packet to traverse a path.
__Reliability__ is the probability of link failure, calculated from interface errors or previous link failures.
__Cost__ is a value determined either by the router's <abbr title="Inter-network Operating System">IOS</abbr> or a network admin to indicate preference of a route.

Static routes are ideal for:
1. Ideal for small networks which do not anticipate growth
2. Where a single default route is used to represent a path to any network not found in the routing table
3. Routing to and from stub networks
4. Backup of other routes for use say when a dynamic route fails (floating static route)
5. Summarize routing table entries which reduces the size of advertising messages.

Routers support 3 packet-forwarding mechanisms i.e:
1. **Process Switching** - when a packet arrives on a interface, it is forwarded to the control plane where the router matches it's destination address with an entry in the routing table before re-encapsulation and forwarding.
2. **Fast Switching** - it's the same but the cpu searches for a match in the **fast-switching cache**, if no match is found then packet it searches in the routing table(process switched). 
3. __Cisco Express Forwarding__- the CEF builds a Forwarding Information Base (FIB) and an adjacency table.
Table entries are not packet triggered like fast forwarding but change-triggered when the network topology changes.
When the network has converged the FIB and adjacency table contain all the information a router would have to consider forwarding a packet.
The FIB contains pre-computed reverse lookups, next hop information for routes including the interface and layer 2 information.
## Packet Determination: Routing Decision
A routing table search results in one of three
path determinations:
1. **Directly connected network** – If the destination IP address belongs to a network that is directly connected to the router, the packet is forwarded out of that interface.

2. **Remote network** – If the destination IP address of the packet belongs to a remote network, the packet is forwarded to another router.

3. **No route determined** – If the destination IP address does not belong to a connected network or is in the routing table, the packet is sent to Gateway of Last Resort.
![[Pasted image 20251128180407.png]]
If a router has two or more paths with identical
metrics to the same destination network, the
router will forward the packets using both
paths equally, this is known as **equal cost load balancing**.
EIGRP supports unequal cost load balancing.

Types of routes
1. **Ultimate route** - is a routing table entry that contains either a next-hop IPv4 address or an exit interface i.e Directly connected, dynamically learned, and local routes are ultimate routes. All IPv6 routes are level 1 ultimate routes.
2. **Level 1 route** - it can be:
- **Network route** - a network route that has a subnet mask equal to that of the classful mask.
- **Supernet route** - a network address with a mask less than the classful mask, for example, a summary address.
- Default route - a static route with the address 0.0.0.0/0 or ::/64.
1. **Level 1 Parent Route** - A parent route is a level 1 network route that is subnetted. An entry in the routing table that has no IP address of the next-hop or an exit interface. A parent route provides a heading for the specific subnets it contains which are called **child routes**.
2. **A level 2 child route**- is a route that is a subnet of a classful network address.
![[Pasted image 20251129102519.png]]`
Router lookup process:
- If the best match is a level 1 ultimate route, then this route is used to forward the packet.
- If the best match is a level 1 parent route, the router then examines child routes (the subnet routes).
- If there is a match with a level 2 child route, that is used to forward the packet.
- If there is no match with level 2 child routes, the router searches level 1 supernet or default routes. If there is a match, that route is used.
- If there is no match found in the routing table the packet is dropped.
![[Pasted image 20251129101326.png]]
The best match is the route in the routing table that has the most number of far left matching bits with the destination IPv4 address of the packet.
The route with the greatest number of equivalent far left bits, or the longest match, is always the preferred route.
The IPv6 router lookup process:
1. Examines level 1 network routes for the best match.
2. Longest match is the best match.

They are several types of static routes namely:
1. Next-hop IP route/ recursive route
2. Exit interface route
3. Summary static route
4. Floating static route
5. Default static route

In next-hop IP routes/ recursive routes we specify the ip address of the next interface i.e
```cisco
ipv6 route ::/0 2001:db8:a:2::1 
ip route 0.0.0.0 0.0.0.0 10.0.0.1
```
For exit interface static route, we specify the interface name in the next interface part i.e

```cisco
ipv6 route ::/0 s0/0/0
ip route 0.0.0.0 0.0.0.0 s0/0/0
```

### Types of static routes
#### 1. Standard Static Route
consist of the destination network address and network mask, and the IP address of the next-hop gateway or exit interface
#### 2. Default Static Route
This is a route that matches all packets
The configuration has all zeros in the IP address and all zeros in the subnet mask. i.e. in IPv4 - 0.0.0.0/0 while in IPv6 - : :/0
It identifies the gateway IP address to which the router sends all IP packets that it does not have in its routing table

#### 3. Summary Static Route
A route that represents an aggregation of various network gateways.
The multiple static routes in the aggregation all use the same exit interface or next-hop IP address.

#### 4. Next Hop Static Route
Consist of the destination network address and network mask, and the IP address of the next-hop gateway
Before packet is forwarded the router must determine the exit interface to use (route
resolvability) via ARP.
It takes two routing table lookups, and this process is referred to as __recursive lookup.__

#### 5. Directly Connected Static Route
Consist of the destination network address and network mask,IP address of the next hop gateway and its corresponding exit interface.

#### 6. Fully Specified Static Route
Consist of the destination network address and network mask, and the exit-interface of the next-hop gateway.
#### 7. Floating Static Route
These are use to provide a backup route when a primary dynamic or static route fails.
It is configured with a higher administrative distance than the preferred primary route.

## Advantages of static routing
1. It can backup multiple routes for use say when a dynamic route fails.
2. They are easy to configure
3. It do not use CPU power.
4. They are more secure since a packet will always take a specific path to a destination.
5. It is predictable since the network admin calculates the route beforehand.
6. It is ideal for small networks.

## Disadvantages of static routing
1. Initial maintenance and configuration is time consuming.
2. Configuration is prone to error especially in large networks.
3. Administrator intervention is required to maintain changing routes.
4. It is not easy to scale.
5. It requires complete knowledge of the whole network for proper implementation
# Dynamic Routing
Components of dynamic routing protocols
1. **Data structures**
The store the routing information in RAM via tables or databases.
2. **Routing protocol messages**
They using routing protocol messages to discover and exchange routing information and maintain up to date information about the network.
3. **Routing Algorithms**
They use routing algorithms to determine the SPF for data transfer e.g. Djikstra's Algorithm, Bellman Ford or DUAL.
## Advantages of dynamic routing protocols
1. They prevent the time consuming part of manually setting up static routes.
2. They dynamically adapt to network changes making them give more current information.
3. They provide automatic redundancy.
4. They scale better with comparison to static routes.
5. They are less prone to configuration errors in scaling networks compared to static routes.

## Disadvantages of dynamic routing protocols
1. They require more CPU resources to compute the best path to networks.
2. Some protocols are complex and require expertise to configure and troubleshoot
3. They are less secure. Additional configuration settings are needed to secure
4. Routes depend on current topology and can change.