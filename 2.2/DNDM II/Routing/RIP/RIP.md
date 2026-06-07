## RFC 1058
Routing Information Protocol is a distance vector interior gateway protocol.(uses routing-by-rumor logic to learn/share routes)
It uses hop count as it's metric. One router = one hop count
The __maximum hop count__ is __15__ meaning anything with a higher hop count is considered unreachable.
It comes in 2 versions
1. RIPv1- RFC 1058 
2. RIPv2 - RFC 
IPv6 also offers <b><abbr title="RIP next generation">RIPng</abbr></b>.

RIP uses 2 message types:
1. __Request__ which tells RIP enabled routers to send their routing table.
2. __Response__ - used to send the local router's routing table to neighbouring routers.

By default, RIP enabled routers broadcast the routing tables every 30 seconds.

RIP supports up to six equal-cost paths to a single destination.
## <abbr title="RIP version 1">RIPv1</abbr>
It only advertises classful addresses which is deprecated.
RIPv1 response messsages do not even include a subnet mask in their responses.
172.25.24.0/18 will become 172.16.0.0 (and it will be assumed to be /16)
11.0.1.0/24 will become 11.0.0.0 (and it will be assumed to be 1/8)
It uses broadcast packets.

## <abbr title="RIP version 2">RIPv2</abbr>
It supports <abbr title="variable length subnet mask">VLSM</abbr> i.e includes subnet mask in advertisements.
It supports authentication.
It also supports triggered updates, when a change in the network topology occurs.
It also uses multi-cast instead of broadcast packets.
Messages are in the multicast __224.0.0.9__
Auto-summary converts the networks to their classful networks.
__passive interface__ - is an interface that is disabled from sending out RIP advertisement packets.
## RIPng
The primary features of RIPng are the same as they were in IPv4: It’s still a distance-vector protocol, has a maximum hop count of 15 and uses **split horizon, poison reverse** and other loop avoidance mechanisms.
It also uses multicast and RIPng's multicast address is **FF02::9**.
But there as also some differences between the two versions. One the most notable changes with RIPng (and all other IPv6 routing protocols), is that you enable network advertisement from interface configuration mode of a router instead of using network command in the global configuration mode.

 network summarization
 advantages
 1. It reduces the size of routing tables. Routers store only summarized routes in the routing table instead of subnetted.
2. Routers need less memory and processing power as they process fewer routes.
3. It requires less bandwidth as routers advertise fewer routing updates.
4. It hides network problems such as a flapping route.
5. It provides a better overview of the network.
6. It decreases the use of resources such as Memory and CPU.
7. It decreases the required time to rebuild the routing tables.

Disadvantages
1. It adds complexity to the network.
2. Summarized routes are confusing. You can decode them only if you know how subnetting works.
3. Summarized routes may contain errors. For example, they may advertise a down subnet as an up subnet.
