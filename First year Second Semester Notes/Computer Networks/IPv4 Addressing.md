Types of addresses in a Network
1. Network address / network ID – uniquely identifies
or groups together hosts on the same network or
subnet.
2. Host address – uniquely identifies a device/host on
a network
3. Broadcast address – used to send a message to all devices on the same network segment/ subnet.

There are two types of broadcast addresses i.e.:
1. Limited broadcast i.e 255.255.255.255
2. Broadcast address i.e for 192.168.0.0/24 it's 192.168.255.255

The two documents that address IPv4 addressing are:
1. RFC 790 (Class addressing)
2. RFC 1918 (Classless addressing RFC 1918)

## Class addressing RFC 790
### Network Classes

| Class   | Prefix Length | Range                             | Function                     |
| ------- | ------------- | --------------------------------- | ---------------------------- |
| Class A | /8            | 1.0.0.0 to<br>126.255.255.255     | Large corporations           |
| Class B | /16           | 128.0.0.0 to<br>172.15.255.255    | Medium Size Enterprises      |
| Class C | /24           | 192.168.0.0 to<br>223.255.255.255 | SOHO networks                |
| Class D | /4            | 240.0.0.0 to<br>239.255.255.255   | Multicast addresses          |
| Class E | /4            | 240.0.0.0 to<br>255.255.255.4     | Experimental / Future<br>use |

## Reserved addresses
### Software 
0.0.0.0-.255.255.255 

### Loop-back Addresses
127.0.0.0-.255.255.255 - localhost

### Multicast addresses
Class D 224.0.0.0-239.255.255.255 

### Experimental addresses
Class E 240.0.0.0-255.255.255.254 

### Broadcast Addresses
255.255.255.255 - limited broadcast address

## Classless addressing RFC 1918
### 1. Private Network addresses
These are also called __unregistered address numbers__ and they cannot be routed through the internet.
They are classified mainly into 3 classes namely:
10.0.0.0 - 10.255.255.255 ( Class A private addresses)
172.16.0.0 - 192.15.255.255 (Class B private addresses) 
192.168.0.0 - 223.255.255.255 - (Class C private addresses) 
### 2. Public IP Addresses
These are also called __registered address numbers__ and can be routed through the internet. 
They are any other address which are not private addresses or special addresses.
They are assigned by __Regional Internet Registries(RIRs)__ i.e AfriNIC for Africa who then allocate to chunks to ISPs.

## Other reserved addresses
100.64.0.0/10 - Shared address space for communications between a service provider and its subscribers when using a carrier-grade NAT.
### Link-local IPv4 addresses 
For IPv4 addresses (169.254.0.0/16) are more commonly known as the __Automatic Private IP Addressing (APIPA) addresses__ or __self-assigned addresses__. They are used by a Windows clients to self-configure in the event that the client cannot obtain an IP addressing through other methods. Link-local addresses can be used in a peer-to-peer connection but are not commonly used for this purpose.

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