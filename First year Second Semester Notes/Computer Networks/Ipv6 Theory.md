Internet Protocol Version 6 or simply IPv6 is an improvement to the IPv4 addressing scheme. It was mostly designed as a future replacement for the depletion of IPv4 addresses. It has a couple of improvements over IPv4 i.e anycast addressing.
This is a 128 bit address which usually represented using hexadecimal numbers.
It is represented as a 8 hextets separated by colons where a hextet is a 16 bit binary number represented as 4 hexadecimal numbers.
There are ~>340 unidecillion possible IPv6 addresses while there are ~>4 billion possible ipv4 addresses.
When writing a IPv6 addresses you should follow the following rules.
1. Omit any leading zeros only __do not omit__ any trailing zeros.
2. Replace any single contiguous string of one or more hextets consisting with zeros with a double colon.
## Leading zeros vs Trailing zeros

0110- in this example the most left number is a leading zero while the right most zero is a trailing zero.
0110 can therefore be replaced with 110 but 1100 remains with 1100.

__NB__:The second rule can only take place one in order to avoid ambiguity

2001:db8:cafe:1:0:0:0:1 (leading 0s omitted) could be represented as 2001:db8:cafe:1::1. The double colon (::) is used in place of the three all-0 hextets (0:0:0). The double colon (::) can only be used once within an address, otherwise there would be more than one possible resulting address. If an address has more than one contiguous string of all-0 hextets, best practice is to use the double colon (::) on the longest string. If the strings are equal, the first string should use the double colon (::).

First, it important to know IPv6 is not backward compatible with ipv4. However, IPv6 in not currently supported all vendors and websites so we use the IPv6 in the following ways when incompatibility issues arise:
1. __IPv6 Tunneling__ - IPv6 packets are encapsulated as ipv4 packets in an existing ipv5 network i.e 4to6 tunneling. The reverse also existed but was called 6to4 tunneling. Both of these are mostly deprecated and no longer supported since this was a hacky solution back in the day.
2. __Dual Stack__ - allows you to both run ipv4 and IPv6 seamlessly on the same device.
3. __Translation__ - allows you to translate ipv4 and IPv6 back and forth using a middle man i.e a dns serveror a router.

## Types of IPv6 Addressing

1. __Unicast__ - one to one i.e one sender and one receiver.
2. __Multicast__ - one to many i.e one sender and many receivers with one common ip. They have different prefixes but generally
3. __ff00::/8__.
4. __Anycast__ - one to many but only the packets are routed to the nearest node.

Under unicast addressing they are further subdivided into 3 namely:
1. __Global unicast__ - these are essentially like public ip addreses currently IANA has only assigned the __2000::/3__
2. __Unique local/site local__ - these are like private ipv4 address i.e cannot be routed in the internet. They have the prefix __fc00::/7__.
3. __Link local__ - these are used to communicate with other devices only on the same link. they have a prefix of __FE80::/10__
For AfriNIC  IANA has allocated they have allocated __2ABC:...___ while ARIN( North America) it has allocated __2001:...__ . Then AfriNIC and ARIN subnet this ip further to different ISPs and then your ISP eventually allocates you an IPv6 address block usually with a /48 block.
Typically an IPv6 subnet uses a /64 prefix length.
This means the first 48 bits are used for global unicast routing by the ISP and the next 16 bits for making different subnets for the enterprise. The remaining 64 bits are for the host bits for the subnet.