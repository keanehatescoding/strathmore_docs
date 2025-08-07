<abbr title="Internet Protocol Version 6"><b>IPv6</b></abbr> is an improvement to the IPv4 addressing scheme. It was mostly designed as a future replacement for the depletion of IPv4 addresses. 
The Ether type of an IPv6 Frame is __0x86DD__.
## Reasons for IPv6/ Problems of IPv4
1. __Depletion of IPv4 addresses__ i.e there are  $340,282,366,920,938,463,463,374,607,431,768,211,456$ possible IPv6 addresses while there are $4,294,967,296$ possible IPv4 addresses and currently ~8 billion people alive.
2. __IPv4 addresses are non-hierachical__ meaning they are assigned irrespective of geographical topology which leads to fragmentation and thus big routing tables.
3. __Disproportionate IPv4 address assignment__ i.e IN 2005 75% allocated to US and only 10% to China and China got <1%.
4. __IPv4 address management is difficult__- IPv4 does not support host auto-configuration except APIPA and reduces management overhead like configuring DHCP or NAT.

## Advantages of IPv6
1. __Larger Address Space__ it offers $2^{32}$ possible addresses as opposed to IPv4 which only offers $4,294,967,296$ possible addresses.
2. __Enhanced priority support__ - IPv4 uses 6 bits DSCP and 2 bits ECN to provide QoS and if and only if the underlying network devices and end devices support it while IPv6 has a traffic class and flow control label that are used to tell the underlying routers how to effectively process the packets and route them.
3. __Mobility__- IPv6 allows you to use different networks but with the same IP address using auto IPv6 configuration and extension headers.
4. __Faster Forwarding/Routing__: Simplified header puts all unnecessary information at the end of the header. The information contained in the first part of the header is adequate for a Router to take routing decisions, making routing decision as quickly as looking at the mandatory headers.
5. __IP security__ - through IPSec it is optional.
6. __Extensible__ - IPv4 only offers 40 bytes for options while options in IPv6 can be as much as the size of the a IPv6 packet itself.
This is a 128 bit address which usually represented using hexadecimal numbers.
It is represented as a 8 hextets separated by colons where a hextet is a 16 bit binary number represented as 4 hexadecimal numbers.

When writing a IPv6 addresses you should follow the following rules.
1. Omit any leading zeros only __do not omit__ any trailing zeros.
2. Replace any single contiguous string of one or more hextets consisting with zeros with a double colon.
Difference between trailing zeros and leading zeros:
0110- in this example the most left number is a leading zero while the right most zero is a trailing zero.
0110 can therefore be replaced with 110 but 1100 remains with 1100.

__NB__:The second rule can only take place one in order to avoid ambiguity.

2001:db8:cafe:1:0:0:0:1 (leading 0s omitted) could be represented as 2001:db8:cafe:1::1. The double colon (::) is used in place of the three all-0 hextets (0:0:0). The double colon (::) can only be used once within an address, otherwise there would be more than one possible resulting address. If an address has more than one contiguous string of all-0 hextets, best practice is to use the double colon (::) on the longest string. If the strings are equal, the first string should use the double colon (::).

First, it important to know IPv6 is not backward compatible with IPv4. However, IPv6 in not currently supported all vendors and websites so we use the IPv6 with the following transition mechanisms:
1. __IPv6 Tunneling__ - IPv6 packets are encapsulated as IPv4 packets in an existing IPv4 network i.e 4to6 tunneling. The reverse also existed but was called 6to4 tunneling. Both of these are mostly deprecated and no longer supported since this was a hacky solution back in the day.
2. __Dual Stack__ - allows you to both run ipv4 and IPv6 seamlessly on the same device.
3. __Header Translation__ - allows you to translate IPv4 and IPv6 back and forth using a middle man i.e a DNS server a router and a IPv4 mapped address. 

## Types of IPv6 Addressing

1. __Unicast__ - one to one i.e one sender and one receiver.
2. __Multicast__ - one to many i.e one sender and many receivers with one common IP.
3. __Anycast__ - one to many but only the packets are routed to the nearest node.
In addition we have a __IPv4 mapped__ addressing mode which is used in the transition from IPv4 to IPv6.
IPv4 mapped allows IPv6 devices to communicate within a IPv4 network.
The format of IPv4 mapped address is the first 80 bits are set to zero, followed by the next 16 bits set to 1 i.e FFFF and the last 32 bits written in dotted decimal are appended to the end of the IPv6 address an example is:
0000:0000:0000:0000:0000:FFFF:12.155.166.101 or FFFF:12.155.166.101 in short form

Under unicast addressing they are further subdivided into 3 namely:
1. __Global unicast__ - these are essentially like public IPv4 addresses. They can be routed and are globally identifiable and uniquely addressable.
2. __Unique local/site local__ - this type of IPv6 address is globally unique but should only be used for local communication. The second half of this address contains the interface ID while the first half is divided among the prefix, local bit, global id and subnet ID. They have the prefix __fd00::/7__. The l bit is set to one if it is locally assigned otherwise L being set to zero has not be defined.
![[Pasted image 20250603194621.png]]
3. __Link local__ - these are used to communicate with other devices only on the same link. It always have a prefix of __FE80::/10__. They are used for communication between IPv6 hosts on the same link(broadcast segment) only. They also are cannot be routed.
![[Pasted image 20250603191849.png]]
For AfriNIC, <abbr title="Internet Assign Numbers Authority">IANA</abbr> has allocated the allocated __2ABC:...___ while ARIN(North America) it has allocated __2001:...__ . Then AfriNIC and ARIN subnet this IPv6 pool further to different ISPs and then your ISP eventually allocates you an IPv6 address block usually with a  /48 prefix length.
Typically an IPv6 subnet uses a /64 prefix length.
This means the first 48 bits are used for global unicast routing by the ISP and the next 16 bits for making different subnets for the enterprise. The remaining 64 bits are for the host bits for the subnet.

### Extended Unique Identifier (EUI-64)
The EUI allows a host to assign itself a 64-bit IPv6 interface identifier (EUI-64).
The second half of your IPv6 address is always used for the __interface ID__. Mac addresses are considered to be unique world wide. When setting up your IPv6 address your computer can take advantage of this by auto-configuring using EUI-64.
Steps
4. Your host divides your mac address to two equal 24 bit parts
5. Then a 16 bit hex value __FFFE__ is sandwiched between your mac address resulting in a EUI-64 interface ID.
6. Next the universal/local bit(U/L) needs to be inverted.
An advantage of this is local administration of the 7 bit eliminates the need for ARP since the mac address of any host can be simply determined hence no manual configuration/ DHCP as done in IPv4. 

An IPv6 Header consists of:
1. IP Version
2. Traffic Class
3. Flow Label
4. Payload Length
5. Next Header
6. Hop Limit
7. Source Address
8. Destination Address