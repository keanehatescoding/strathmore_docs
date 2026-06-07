Types of addresses in a Network
1. Network address / network ID
2. Host address
3. Broadcast address – a special address that is used to send a packet to all devices that belong to a specific specific broadcast domain.

## 1. Network Address
This is always the first address of any <abbr title="local area network">LAN</abbr>.
It can be gotten by performing a bit-wise and operation any host address with the subnet mask of that host address.
The network address cannot be assigned to any host part of that network and is usually assigned to the router.

## 2. Host address
This address is used to uniquely identify a host in a broadcast domain.
Host addresses can have any combination of bits in the host portion except for all 0 bits (this would be a network address) or all 1 bits (this would be a broadcast address).
All hosts within the same network, must have the same subnet mask and the same network bits. Only the host bits will differ and must be unique.
For any network there are $2^{n}-2$ hosts where $n$ is the __number of host bits__ where which is gotten by $n=32 - \text{prefix length}$. We subtract 2 because for every network they must be at least 2 unusable address i.e the network address and the broadcast address. 
## 3. Broadcast Address
This is a special address that is used to send a packet/frame to all devices that belong to a particular broadcast domain.
In a broadcast address the host portion bits are all ones.
There are two types of broadcast addresses i.e.:
1. __Limited broadcast__ - always 255.255.255.255
2. __Broadcast address__ i.e for 192.168.0.0/24 it's 192.168.255.255
NB: Usually the non limited broadcast address of a network is filtered by most routers as a security measure. 

The two documents that address IPv4 addressing are:
1. RFC 790 (Class addressing)
2. RFC 1918 (Classless addressing RFC 1918)
The Ether type of an <abbr title="internet protocol version 4">IPv4</abbr> frame is __0x800__.
## Class addressing RFC 790
### Network Classes

| Class   | Prefix Length | Range                           | Function                     |
| ------- | ------------- | ------------------------------- | ---------------------------- |
| Class A | /8            | 1.0.0.0 to<br>126.255.255.255   | Large corporations           |
| Class B | /16           | 128.0.0.0 to 191.255.0.0        | Medium Size Enterprises      |
| Class C | /24           | 192.0.0.0 to<br>223.255.255.255 | SOHO networks                |
| Class D | /4            | 240.0.0.0 to<br>239.0.0.0       | Multicast addresses          |
| Class E | /4            | 240.0.0.0 to<br>255.0.0.0       | Experimental / Future<br>use |

## Reserved addresses
### Software 
0.0.0.0-0.255.255.255 

### Loop-back Addresses
127.0.0.0-.255.255.255 - localhost

### Multicast addresses
Class D 224.0.0.0-239.255.255.255 

### Experimental addresses
Class E 240.0.0.0-255.255.255.254 

### Broadcast Addresses
255.255.255.255 - limited broadcast address

NB: In the mid-1990s, with the introduction of the World Wide Web (WWW), classful addressing was deprecated to more efficiently allocate the limited IPv4 address space.
#### Limitations
1. 50% of all addresses were allocated to Class A addresses which were too much for a single organization meaning most addresses were largely unused.
## Classless addressing RFC 1918
Classful addressing was replaced by classless addressing in the mid-1990s.
This is what replaced classless addressing.
### 1. Private Network addresses
These are also called __unregistered address numbers__ and they cannot be routed through the internet.
They are not unique and can be used by anyone.
They are usually used for internal networking in Large Enterprises and <abbr title="small office home office">SOHO</abbr> networks.
They are classified mainly into 3 classes namely:

| Network address and Prefix | Private Address Range         |
| -------------------------- | ----------------------------- |
| 10.0.0.0/8<br>             | 10.0.0.0-10.255.255.255       |
| 172.16.0.0/12              | 172.16.0.0-172.31.255.255     |
| 192.168.0.0/16             | 192.168.0.0 - 192.168.255.255 |
### 2. Public IP Addresses
These are also called __registered address numbers__ and can be routed through the internet. 
They are any other address which are not private addresses or special addresses.
They are unique.
<abbr title="Internet Assign Numbers Authority">IANA</abbr> is largely responsible for allocating blocks of <abbr title="internet protocol version 4">IPv4</abbr> addresses to the <abbr title="Regional Internet Registries">RIRS</abbr>.
These <abbr title="Regional Internet Registries">RIRS</abbr> e.g. AfriNIC for Africa are then responsible for allocating chunks to <abbr title="Internet Service Providers">ISPs</abbr>.
Organizations can also get their addresses directly from an <abbr title="Regional Internet Registry">RIR</abbr> (subject to the policies of that <abbr title="Regional Internet Registry">RIR</abbr>.)
## Other reserved addresses
100.64.0.0/10 - Shared address space for communications between a service provider and its subscribers when using a carrier-grade NAT.
### Link-local <abbr title="internet protocol version 4">IPv4</abbr> addresses 
For <abbr title="internet protocol version 4">IPv4</abbr> addresses i.e 169.254.0.0/16 are more commonly known as the __Automatic Private IP Addressing (APIPA) addresses__ or __self-assigned addresses__. They are used by a Windows <abbr title="dynamic host configuration Protocol">DHCP</abbr> Client to self-configure in the event that the client cannot obtain an IP addressing through other methods. Link-local addresses can be used in a peer-to-peer connection but are not commonly used for this purpose.

### Test-NET 1
192.0.2.0/24 

198.18.0.0/15 - Used for benchmark testing of inter-network communications between two separate subnets
### Test-NET 2
198.51.100.0/24

192.88.99.0/24 - Formerly used for IPv6 to IPv4 relay (included IPv6 address block 2002::/16).
### Test-NET 3
203.0.113.0/24

233.252.0.0/24 - Assigned as MCAST-TEST-NET, documentation and examples (This is part of the above multicast space.)
### Reserved Link Local Address
224.0.0.0-224.0.0.255

## Reasons for Subnetting
1. __Security__ - easier to manage network security when groups are subnetted.
2. __Address management__ - a network can easily scale up or down depending on the subnets and the assignable IP addresses.
3. __Improve network performance__ i.e VLAN technology during broadcasts.
4. __Fault isolation__ - easier to isolate network faults within subnets as opposed to larger networks.

## Benefits of CIDR
1. Allows us to summarize many network addresses into
a single address (aggregate route) which helps in
reducing the size of the routing table hence:
. Reduced router memory requirements and
. Reduced number of CPU cycles for routing processes
. Faster route resolution (due to fewer routing table entries)