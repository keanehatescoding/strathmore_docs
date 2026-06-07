PC1 wants to communicate with an outside web server
with public address 209.165.201.1.
1. PC1 sends a packet addressed to the web server.
2. R2 receives the packet and reads the source IPv4
address to determine if it needs translation.
3. R2 adds mapping of the local to global address to the NAT table.
4. R2 sends the packet with the translated source
address toward the destination.
5. The web server responds with a packet addressed to the inside global address of PC1 (209.165.200.226).
6. R2 receives the packet with destination address 209.165.200.226. R2 checks the NAT table and finds an entry for this mapping. R2 uses this information and translates the inside global address (209.165.200.226) to the inside local address (192.168.10.10), and the packet is forwarded toward PC1.

NAT includes four types of addresses always applied from the perspective of the device with the translated address
1. **Inside address** - The address of the device which is being translated by NAT.
2. **Outside address** - The address of the destination device.
3. **Local address** - A local address is any address that appears on the inside portion of the network.
4. **Global address** - A global address is any address that appears on the outside portion of the network.
### Inside Local Address
The address of the source as seen from inside the network. This is typically a private IPv4 address. The inside local address of PC1 is 192.168.10.10.
### Inside global addresses
The address of source as seen from the outside network. The inside global address of PC1 is 209.165.200.226.

### Outside global address
The address of the destination as seen from the outside network. The outside global address of the web server is 209.165.201.1

### Outside local address
The address of the destination as seen from the inside network. PC1 sends traffic to the web server at the IPv4 address 209.165.201.1. While uncommon, this address could be different than the globally routable address of the destination.

## Types of NAT
### 1. Static NAT
It uses a __one-to-one mapping__ of a local and global address configured by the network admin that remains constant.
![[Pasted image 20251201163538.png]]
Static NAT is useful for web servers or devices that must have a consistent address that is accessible from the internet,
It is also useful for devices that must be accessible by authorized personnel when offsite, but not by the general public on the internet.
### 2. Dynamic NAT
Dynamic NAT uses a pool of public addresses and assigns them on a first-come, first-served basis.
When an inside device requests access to an outside network, dynamic NAT assigns an available public IPv4 address from the pool.
If all addresses in the pool are in use, a device must wait for an available address before it can access the outside network.
![[Pasted image 20251201163733.png]]

### 3. Port NAT
Port Address Translation (PAT), also known as **NAT overload**, maps multiple private IPv4 addresses to a single public IPv4 address or a few addresses.
With PAT, when the NAT router receives a packet from the client, it uses the source port number to uniquely identify the specific NAT translation.
PAT attempts to preserve the original source port. If the original source port is already used, PAT assigns the first available port number starting from the beginning of the appropriate port group **0-511, 512-1,023, or 1,024-65,535.**
When there are no more ports available and there is more than one external address in the address pool, PAT moves to the next address to try to allocate the original source port.
The process continues until there are no more available ports or external IPv4 addresses in the address pool.
![[Pasted image 20251201163821.png]]
Some packets do not contain a Layer 4 port number,
such as ICMPv4 messages. Each of these types of
protocols is handled differently by PAT.
For example, ICMPv4 query messages, echo requests,
and echo replies include a Query ID. ICMPv4 uses the
Query ID to identify an echo request with its
corresponding echo reply.
This query ID field only applies to this type of packet and not every other exception.

The main difference between NAT and PAT is NAT only modifies the IP addresses while PAT modifies both the IP addresses and port number.

## Advantages of NAT
1. NAT conserves the legally registered addressing scheme by allowing the privatization of intranets.
2. NAT conserves addresses through application port-level multiplexing.
3. NAT increases the flexibility of connections to the public network.
4. NAT provides consistency for internal network addressing schemes.
5. NAT allows the existing private IPv4 address scheme to remain while allowing for easy change to a new public addressing scheme.
6. NAT hides the IPv4 addresses of users and other devices.
## Drawbacks of NAT
1. Increases forwarding delays
2. End-to-end addressing is lost
3. End-to-end IP traceability is lost
4. NAT complicates the use of tunneling protocols i.e IPSec.
5. Services that require the initiation of TCP connections from the outside network, or stateless protocols, such as those using UDP, can be disrupted.

## Port Forwarding
Port forwarding allows an external device to reach a device on a specific port number and the device is located on an internal (private) network.

## NAT for IPv6
IPv6 unique local addresses (ULAs) are similar to IPv4 private addresses
<abbr title="Unique Link-Local Addreess">ULAs</abbr> are to provide IPv6 address space for communications within a local site.
First 64 bits of a ULA
1. Prefix of FC00::/7 (FC00 to
FDFF)
2. Next bit is a 1 if the prefix
is locally assigned
3. Next 40 bits define a global
ID
4. Next 16 bits is a subnet ID

Last 64 bits of a ULA is the
1. interface ID or host portion of the
address

### Advantages
1. Allows sites to be combined without address conflicts
2. Allows internal connectivity
### Disadvantages
Not routable on the Internet

## NAT64
IPv6 was developed with the intention of making NAT for IPv4 with translation between public and private IPv4 addresses unnecessary.
However, IPv6 does include its own IPv6 private address space, unique local addresses (ULAs).
IPv6 unique local addresses (ULA) are similar to RFC 1918 private addresses in IPv4 but have a different purpose.
ULA addresses are meant for only local communications within a site. ULA addresses are not meant to provide additional IPv6 address space, nor to provide a level of security.
IPv6 does provide for protocol translation between IPv4 and IPv6 known as **NAT64.**
NAT for IPv6 is used in a much different context than NAT for IPv4.
The varieties of NAT for IPv6 are used to transparently provide access between IPv6-only and IPv4-only networks, as shown. It is not used as a form of private IPv6 to global IPv6 translation. NAT for IPv6 should not be used as a long-term strategy, but as a temporary mechanism to assist in the migration from IPv4 to IPv6.