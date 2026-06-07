## Unicast mode 
Unicast routing mode  involves a single node sending a packet/frame to another node. I.e computer 192.168.2.4 pinging computer 134.93.12.23
For IPv4, unicast ip addresses are those that are in the range of  1.0.0.1 to 223.255.255.255.
## Multicast mode
Multicast routing mode involves a single node sending a packet/frame to a group of nodes in a multicast group. Say I create a multicast group and hosts 192.168.1.2-10 subscribe to this group. When I ping(I'm 192.168.2.10) the multicast domain(group), all computers in this network will receive this packet but only the computers in multicast domain(group) i.e 192.168.2.2-9 will process this packet.
Each multicast group is represented by a single IPv4 multicast destination address.
Routing protocol such as <abbr title="open shortest path first">OSPF</abbr> use multicast transmissions.
For <abbr title="internet protocol version 4">IPv4</abbr> the range of reserved addresses is __224.0.0.0-239.255.255.255__
## Broadcast mode
When in broadcast routing mode packets are send to every node in a specific LAN.
In the host portion of an <abbr title="internet protocol version 4">IPv4</abbr> broadcast address is made up entirely of ones.
There are two types of broadcast addresses i.e:
1. __Limited broadcast__ address - 255.255.255.255
2. __Directed broadcast__ address
The limited broadcast address is the address 255.255.255.255. When you send a packet with this address it is send to all the nodes in the current LAN only except the sending node. These nodes usually reply back to the sending node.
The directed broadcast address is any broadcast address for any netmask. Say a network has is 172.18.0.1/24 the broadcast address is 172.18.0.255. If we ping this broadcast address even if it is not our current LAN it will ping all the hosts on that network. That is why it is called a directed broadcast address.
There are no broadcast Ipv6 addresses.
Routers do not forward broadcasts by default.
NB: Directed broadcast packets are usually disabled by default by most routers for security reasons hence usually they are not routed.
To enable directed broadcast type
```shell
ip directed-broadcast
```
and to disable it type:
```shell
no ip directed-broadcast
```