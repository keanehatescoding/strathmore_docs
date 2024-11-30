## Ospf
Open shortest path first is a routing protocol that allows routers to share information about the network topology and calculate the most efficient paths for data transmission. It does this by having routers exchange updates about the state of their connected links and networks. This way, each router has a complete map of the network and can determine the best routes to reach any destination.
OSPF also uses multicast tranmission. Routers which have enabled ospf communicate with each other using their reserved OSPF multicast 224.0.0.5. Devices which have enabled OSPF will process the packets with 224.0.0.5 as the destination ip address. All other devices ignore these packets.
## EIGRP
Enhanced Interior Gateway Routing protocol is a Cisco proprietary routing protocol that combines aspects of different routing algorithms. It allows routers to share information about the networks they can reach and the cost (like bandwidth or delay) associated with those routes. Routers then use this information to choose the most efficient paths for data transmission.
#  Bgp
Border gateway protocol is the primary routing protocol used on the internet used on the Internet. It allows different networks (like those of Internet Service Providers) to exchange routing information and establish paths for data to travel between these networks. BGP helps ensure data can be routed efficiently across the Internet, even when traversing multiple networks.
# RIP 
Routing Information Protocol is a simple routing protocol often used often used in small networks. Routers running RIP share information about the networks they can reach and the number of hops (routers) required to get there. As a result, each router builds a routing table based on this information, choosing the routes with the fewest hops to reach each destination.
## RIPv2

## MPLS 

## IS-IS

## IGRP


__Default Route__ this is a an special address and interface that a router uses to forward any packets that it does not know how to get to a certain network.

## Types
C - means directly connected
