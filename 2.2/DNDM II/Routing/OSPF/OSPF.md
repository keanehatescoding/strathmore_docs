OSPF is a link state dynamic routing protocol that uses Djikstra's algorithm to find the shortest path between 2 routers.
A link is an interface on a router, a network segment that connects two routers, or a stub network such as an Ethernet LAN that is connected to a single router.
Information about the state of a link is known as a link-state. All link-state information includes the network prefix, prefix length, and cost.
Routers running OSPF exchange messages to convey routing information using five types of packets:
1. Hello packet
2. Database description packet
3. Link-state request packet
4. Link-state update packet
5. Link-state acknowledgement packet

Hello packets are used to perform the following:
1. Discover OSPF neighbors and establish neighbor adjacencies.
2. Advertise parameters on which two routers must agree to become neighbors
3. Elect the Designated Router(DR) and Backup Designated Router(BDR) on multiaccess networks i.e ethernet.
These messages are used to create and maintain 3 OSPF databases i.e
4.  Adjacency Database/ Neighbor table
5. Link-State Database(LSDB)
6. Forwarding Database/ Routing table
Adjacency database - is a list of all neigbor routers the router has established bi-directional communication with, this table is unique for every router.
<abbr title="Link State Database">LSDB</abbr> - is a database storing information about all other router's part of the autonomous system. This database is similar for every link.
Forwarding database - List of routes generated when an algorithm is run on the link-state database. It is unique for every router.
The router builds the topology table using results of calculations based on the Dijkstra shortest-path first (SPF) algorithm. The SPF algorithm is based on the cumulative cost to reach a destination.

The SPF algorithm creates an SPF tree by placing each router at the root of the tree and calculating the shortest path to each node. The SPF tree is then used to calculate the best routes. OSPF places the best routes into the forwarding database, which is used to make the routing table.

Instead of relying on physical interface, the router ID can be assigned to a loopback interface. Typically, the IPv4 address for this type of loopback interface should be configured using a 32-bit subnet mask (255.255.255.255). This effectively creates a host route. A 32-bit host route would not get advertised as a route to other OSPF routers.
OSPF does not need to be enabled on an interface for that interface to be chosen as the router ID.
To maintain routing information, OSPF routers complete a generic link-state routing process to reach a state of convergence. The following are the link-state routing steps that are completed by a router:
1. Establish neighbor adjacencies
2. Exchange Link-State Advertisements
3. Build the Link-State Database
4. Execute the SPF Algorithm
5. Choose the Best Route
To make OSPF more efficient and scalable, OSPF supports hierarchical routing using areas. An __OSPF area__ is a group of routers that share the same link-state information in their LSDBs.

OSPF's metric is called __cost__ and is automatically calculated based on the bandwidth of the interface.
Loopback interfaces have a cost of 1 even if the packet doesn't transverse an actual physical interface.
There are 3 versions of OSPF
6. OSPFv1(1989) - not in use anymore
7. OSPFv2(1998) - used for IPv4
8. OSPFV3(2008) - usually used for IPv6(but can also be used for IPv4)
Routers store information about the network in the LSAs(Link State Advertisements) which are organized in a structure called the LSDB(Link State Database).
Routers flood LSAs until all networks in the OSPF area develop the same map of the network(LSDB).
An area is a set of routers that share the same LSDB.
The __backbone area(area 0)__ is an area where all other areas must connect to.
Area 0 is mandatory and but is not mandatory for a single area OSPF.
Routers connected to the backbone area are called __backbone routers__.
__Internal routers__ are routers where all their interfaces lie on the same area.
__Area border routers(ABRs)__ are routers whereby interfaces lie in different areas.
Area border routers store a LSDB for each area they are connected. It is recommended every ABR should have a maximum of 2 LSDB otherwise it can overburden it.
An __autonomous system boundary router(ASBR)__ is an OSPF router that connects the OSPF network to an external network.
All OSPF area must have atleast one ABR connected to the backbone area.  
An __intra-area__ route is a route to a destination inside the same OSPF area.
An __interarea route__ is a route to a destination on a different OSPF area.
The default hello timer is 10 seconds.
Hello messages are multicast to 224.0.0.5.
OSPF messages are encapsulated in an IP Header an the value of the IP header is set to 89 to indicate OSPF.
To determine if their is an OSPF neighbor on the link, the router sends a Hello packet that contains its router id out of all OSPF enabled interfaces.
The OSPF router ID is used by the OSPF process to uniquely identify each router in the OSPF area. A router ID is a 32-bit number formatted like an IPv4 address and assigned to uniquely identify a router among OSPF peers.
When a neighboring OSPF-enabled router receives a Hello packet with a router ID that is not within its neighbor list, the receiving router attempts to establish an adjacency with the initiating router.
For two or more routers connected via a multi-access channel, the router with the highest router id becomes the Designated Router(DR) and the second highest the Backup Designated Router(BDR).
## Advantages of Hierarchical-Topology
1. **Smaller routing tables** since network addresses to different areas maybe summarized.
2. **Reduced uplink overhead** - since it minimizes processing and memory requirements.
3. **Reduced frequency of SPF Calculations** -  Multiarea OSPF localize the impact of a topology change within an area. For instance, it minimizes routing update impact because LSA flooding stops at the area boundary.

The 7 states of OSPF operation
1. Down state
2. Init state
3. Two-way state
4. ExStart state
5. Exchange state
6. Loading state
7. Full state

| States   | Description                                                                                                                      |
| -------- | -------------------------------------------------------------------------------------------------------------------------------- |
| Down     | No Hello packets received<br>Router sends Hello packet<br>Transition to Init state                                               |
| Init     | Hello packets received from neighbor<br>They contain router ID of the sending router<br>Transition to Two-way state              |
| Two-Way  | Communication is bidirectional<br>On multi-access media they elect a DR and BDR<br>Transition to ExStart state                   |
| ExStart  | On p2p networks, routers decide which router will initiate DBD packet exchange and decide upon the initial DBD sequence number   |
| Exchange | Routers exchange DBD packets, if additional info is required then transition to Loading state otherwise full state               |
| Loading  | LSR and LSU are used to gain additional route information<br>Routes are processed via SPF algorithm.<br>Transition to Full State |
| Full     | The LSBD is fully synchronized                                                                                                   |

After the Two-Way state, routers transition to database synchronization states. This is a three step process, as follows: 
1. **Decide first router:** The router with the highest router ID sends its DBD first.
2. **Exchange DBDs:** As many as needed to convey the database. The other router must acknowledge each DBD with an LSAck packet. 
3. **Send an LSR:** Each router compares the DBD information with the local LSDB. If the DBD has more current link information, the router transitions to the loading state.

After all LSRs have been exchanged and satisfied, the routers are considered synchronized and in a full state. Updates (LSUs) are sent: 
1. When a change is perceived (incremental updates) 
2. Every 30 minutes

## Multiaccess OSPF
Multiaccess networks can create two
challenges for OSPF regarding the flooding
of LSAs, as follows:
1. **Creation of multiple adjacencies** - Ethernet networks could potentially interconnect many OSPF routers over a common link. Creating adjacencies with every router would lead to an excessive number of LSAs exchanged between routers on the same network.
2. **Extensive flooding of LSAs** - Link-state routers flood their LSAs any time OSPF is initialized, or when there is a change in the topology. This flooding can become excessive.
An increase in the number of routers on a multiaccess network also increases the number of <abbr title="Link State Advertisements">LSAs</abbr> exchanged between the routers. This flooding of <abbr title="Link State Advertisements">LSAs</abbr> significantly impacts the operation of <abbr title="Open Shortest Path First">OSPF</abbr>.
If every router in a multiaccess network had to flood and acknowledge all received LSAs to all other routers on that same multiaccess network, the network traffic would become quite chaotic.
On multiaccess networks, OSPF elects a DR to be the collection and distribution point for LSAs sent and received. A BDR is also elected in case the DR fails. All other routers become <b><abbr title="DR other">DROTHERs</abbr></b> A DROTHER is a router that is **neither the DR nor the BDR.**
NB: The DR is only used for the dissemination of <abbr title="Link State Advertisements">LSAs</abbr>. The router will still use the best next-hop router indicated in the routing table for the forwarding of all other packets.

In multiaccess networks, OSPF elects a DR and BDR. The DR is responsible for collecting and distributing LSAs sent and received. The DR uses the multicast IPv4 address 224.0.0.5 which is meant
for all OSPF routers.
DROTHERs use the multiaccess address 224.0.0.6 (all designated routers) to send OSPF packets to the DR and BDR. Only the DR and BDR listen for 224.0.0.6.
Cisco routers derive the router ID based
on one of three criteria, in the following
preferential order:
1. The router ID is explicitly configured using the OSPF router-id rid router configuration mode command. This is the recommended method to assign a router ID.
2. The router chooses the highest IPv4 address of any of configured loopback interfaces.
3. The router chooses the highest active IPv4 address of any of its physical interfaces

The OSPF DR and BDR election is based on the following criteria, in sequential order:
1. The routers in the network elect the router with the highest interface priority as the DR. The router with the second highest interface priority is becomes the BDR.
– The priority can be configured to be any number between 0 – 255.
– If the interface priority value is set to 0, that interface cannot be elected as DR nor BDR.
– The default priority of multiaccess broadcast interfaces is 1.
2. If the interface priorities are equal, then the router with the highest router ID is elected the DR. The router with the second highest router ID is the BDR.
• The election process takes place when the first router with an OSPF-enabled interface is active
on the network. If all of the routers on the network have not finished booting, it is possible that a router with a lower router ID becomes the DR.
The addition of a new router does not initiate a new election process.

After the DR is elected, it remains the DR until one of the following events occurs:
1. The DR fails.
2. The OSPF process on the DR fails or is stopped.
3. The multiaccess interface on the DR fails or is shutdown.
If the DR fails, the BDR is automatically promoted to DR. This is the case even if another DROTHER with
a higher priority or router ID is added to the network after the initial DR/BDR election. However, after a BDR is promoted to DR, a new BDR election occurs and the DROTHER with the highest priority or router ID is elected as the new BDR.

To verify the OSPFv2 adjacencies, use the show ip ospf neighbor command. The state of neighbors in multiaccess networks can be as follows:
1. **FULL/DROTHER** - This is a DR or BDR router that is fully adjacent with a non-DR or BDR router. These two neighbors can exchange Hello packets, updates, queries, replies, and acknowledgments.
2. **FULL/DR** - The router is fully adjacent with the indicated DR neighbor. These two neighbors can exchange Hello packets, updates, queries, replies, and acknowledgments.
3. **FULL/BDR** - The router is fully adjacent with the indicated BDR neighbor. These two neighbors can exchange Hello packets, updates, queries, replies, and acknowledgments.
4. **2-WAY/DROTHER** - The non-DR or BDR router has a neighbor relationship with another non-DR or BDR router. These two neighbors exchange Hello packets.
The normal state for an OSPF router is usually FULL. If a router is stuck in another state, it is an indication that there are problems in forming adjacencies. The only exception to this is the 2-WAY state, which is normal in a multiaccess broadcast network.

Reasons to manually set the cost value include:
1. The Administrator may want to influence path selection within OSPF, causing different paths to be selected than what normally would given default costs and cost accumulation.
2. Connections to equipment from other vendors who use a different formula to calculate OSPF cost.

The Dead interval is the period that the router waits to receive a Hello packet before declaring the neighbor down. If the Dead interval expires before the routers receive a Hello packet, OSPF removes that neighbor from its link-state database (LSDB). The router floods the LSDB with information about the down neighbor out all OSPF-enabled interfaces. Cisco uses a default of 4 times the Hello interval. This is 40 seconds on multiaccess and point-to-point networks.
The default Hello and Dead intervals are based on
best practices and should only be altered in rare
situations.
Two routers cannot form an adjacency if:
1. They have different subnet masks causing them belong to different networks.
2. Their Hello and Dead timers do not match
3. Their OSPFv2 Network Types don't match.
4. Their is a wrong or missing OSPFv2 network command.
## Authentication
An attacker can forge OSPF packets or gain physical access to the network.
OSPF authentication is enabled on an interface-by-interface basis or for all interfaces in an area.
OSPF supports either plaintext authentication or MD5
cryptographic hash.