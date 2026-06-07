<abbr title="Internet Protocol Version 6"><b>IPv6</b></abbr> is an improvement to the <abbr title="internet protocol version 4">IPv4</abbr> addressing scheme. It was mostly designed as a future replacement for the depletion of <abbr title="internet protocol version 4">IPv4</abbr> addresses. 
The Ether type of an <abbr title="internet protocol version 6">IPv6</abbr> Frame is __0x86DD__.
## Reasons for IPv6/ Problems of IPv4
1. <b>Depletion of <abbr title="internet protocol version 4">IPv4</abbr> addresses</b> i.e there are  $340,282,366,920,938,463,463,374,607,431,768,211,456$ possible <abbr title="internet protocol version 6">IPv6</abbr> addresses while there are $4,294,967,296$ possible <abbr title="internet protocol version 4">IPv4</abbr> addresses and currently ~8 billion people alive.
2. <b><abbr title="internet protocol version 4">IPv4</abbr> addresses are non-hierarchical</b> meaning they are assigned irrespective of geographical topology which leads to fragmentation and thus big routing tables.
3. <b>Disproportionate <abbr title="internet protocol version 4">IPv4</abbr> address assignment</b> i.e IN 2005 75% allocated to US and only 10% to China and China got <1%.
4. <b><abbr title="internet protocol version 4">IPv4</abbr> address management is difficult</b>- <abbr title="internet protocol version 4">IPv4</abbr> does not support host auto-configuration except <abbr title="automatic private IP addressing">APIPA</abbr> and reduces management overhead like configuring <abbr title="Dynamic Host Configuration protocol">DHCP</abbr> or <abbr title="network address translation">NAT</abbr>.

## Advantages of IPv6
1. __Larger Address Space__ it offers $2^{32}$ possible addresses as opposed to <abbr title="internet protocol version 4">IPv4</abbr> which only offers $4,294,967,296$ possible addresses.
2. __Enhanced priority support__ - <abbr title="internet protocol version 4">IPv4</abbr> uses 6 bits DSCP and 2 bits ECN to provide QoS and if and only if the underlying network devices and end devices support it while IPv6 has a traffic class and flow control label that are used to tell the underlying routers how to effectively process the packets and route them.
3. __Mobility__- IPv6 allows you to use different networks but with the same IP address using auto IPv6 configuration and extension headers.
4. __Faster Forwarding/Routing__: Simplified header puts all unnecessary information at the end of the header. The information contained in the first part of the header is adequate for a Router to take routing decisions, making routing decision as quickly as looking at the mandatory headers.
5. __IP security__ - through IPSec it is optional.
6. __Extensible__ - <abbr title="internet protocol version 4">IPv4</abbr> only offers 40 bytes for options while options in <abbr title="internet protocol version 6">IPv6</abbr> can be as much as the size of the a <abbr title="internet protocol version 6">IPv6</abbr> packet itself.
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

First, it important to know IPv6 is not backward compatible with <abbr title="internet protocol version 4">IPv4</abbr>. However, IPv6 in not currently supported all vendors and websites so we use the IPv6 with the following transition mechanisms:
2. __Dual Stack__ - allows you to both run <abbr title="internet protocol version 4">IPv4</abbr> and IPv6 seamlessly on the same device i.e native IPv6 support.
3. __Tunneling__ - IPv6 packets are encapsulated as <abbr title="internet protocol version 4">IPv4</abbr> packets in an existing <abbr title="internet protocol version 4">IPv4</abbr> network i.e 4to6 tunneling. The reverse also existed but was called 6to4 tunneling. Both of these are mostly deprecated and no longer supported since this was a hacky solution back in the day.
4. __Header Translation__ - allows you to translate IPv4 and <abbr title="internet protocol version 6">IPv6</abbr> back and forth using a middle man i.e a <abbr title="domain name system">DNS</abbr> server a router and a IPv4 mapped address. 

## Types of IPv6 Addressing

1. __Unicast__ - one to one i.e one sender and one receiver.
2. __Multicast__ - one to many i.e one sender and many receivers with one common IP.
3. __Anycast__ - one to many but only the packets are routed to the nearest node.
In addition we have a <b><abbr title="internet protocol version 4">IPv4</abbr> mapped</b> addressing mode which is used in the transition from <abbr tittle="internet protocol version 4">IPv4</abbr> to IPv6.
<abbr title="internet protocol version 4">IPv4</abbr> mapped allows IPv6 devices to communicate within a IPv4 network.
The format of <abbr title="internet protocol version 4">IPv4</abbr> mapped address is the first 80 bits are set to zero, followed by the next 16 bits set to 1 i.e FFFF and the last 32 bits written in dotted decimal are appended to the end of the IPv6 address an example is:
0000:0000:0000:0000:0000:FFFF:12.155.166.101 or FFFF:12.155.166.101 in short form

Under unicast transmission they are further subdivided into 3 namely:
1. __Global unicast addresses(GUA)__ - these are essentially like public <abbr title="internet protocol version 4">IPv4</abbr> addresses. They can be routed and are globally identifiable and uniquely addressable.
![[Pasted image 20250603194621.png]]
2. __Link local__ - these are used to communicate with other devices only on the same link. It always have a prefix of __FE80::/10__. They are used for communication between <abbr title="internet protocol version 6">IPv6</abbr> hosts on the same link(broadcast segment) only. They also are cannot be routed.
3. __Unique local/site local__ - these type of <abbr title="internet protocol version 6">IPv6</abbr> address is globally unique but should only be used for local communication. The second half of this address contains the interface ID while the first half is divided among the prefix, local bit, global id and subnet ID. They have the prefix __fd00::/7__. The l bit is set to one if it is locally assigned otherwise L being set to zero has not be defined.
![[Pasted image 20250603191849.png]]
For AfriNIC, <abbr title="Internet Assign Numbers Authority">IANA</abbr> has allocated the allocated __2ABC:...___ while ARIN(North America) it has allocated __2001:...__ . Then AfriNIC and ARIN subnet this <abbr title="internet protocol version 6">IPv6</abbr> pool further to different ISPs and then your ISP eventually allocates you an <abbr title="internet protocol version 6">IPv6</abbr> address block usually with a  /48 prefix length.
Typically an <abbr title="internet protocol version 6">IPv6</abbr> subnet uses a /64 prefix length.
This means the first 48 bits are used for global unicast routing by the ISP and the next 16 bits for making different subnets for the enterprise. The remaining 64 bits are for the host bits for the subnet.

### Extended Unique Identifier (EUI-64)
The <abbr title="extended unique identifier">EUI</abbr> allows a host to assign itself a 64-bit <abbr title="internet protocol version 6">IPv6</abbr> interface identifier (<abbr title="extended unique identifier">EUI</abbr>-64).
The second half of your <abbr title="internet protocol version 6">IPv6</abbr> address is always used for the __interface ID__. Mac addresses are considered to be unique world wide. When setting up your <abbr title="internet protocol version 6">IPv6</abbr> address your computer can take advantage of this by auto-configuring using <abbr title="extended unique identifier">EUI</abbr>-64.
Steps
4. Your host divides your mac address to two equal 24 bit parts
5. Then a 16 bit hex value __FFFE__ is sandwiched between your mac address resulting in a EUI-64 interface ID.
6. Next the universal/local bit(U/L) needs to be inverted.
An advantage of this is local administration of the 7 bit eliminates the need for <abbr title="address resolution protocol">ARP</abbr> since the mac address of any host can be simply determined hence no manual configuration/ <abbr title="Dynamic Host Configuration Protocol">DHCP</abbr> as done in <abbr title="internet protocol version 4">IPv4</abbr>. 

Multicast addresses have the prefix ff00::/8.
There are two types of multicast addresses:
1. Well-known multicast addresses.
2. Solicited node multicast addresses.

Well-known <abbr title="internet protocol version 6">IPv6</abbr> multicast addresses are assigned. Assigned multicast addresses are reserved multicast addresses for predefined groups of devices. An assigned multicast address is a single address used to reach a group of devices running a common protocol or service. Assigned multicast addresses are used in context with specific protocols such as DHCPv6.
These are two common <abbr title="internet protocol version 6">IPv6</abbr> assigned multicast groups:
1. __ff02::1__ All-nodes multicast group - This is a multicast group that all IPv6-enabled devices join. A packet sent to this group is received and processed by all IPv6 interfaces on the link or network. This has the same effect as a broadcast address in IPv4. The figure shows an example of communication using the all-nodes multicast address. An IPv6 router sends ICMPv6 RA messages to the all-node multicast group.
2. __ff02::2__ All-routers multicast group - This is a multicast group that all IPv6 routers join. A router becomes a member of this group when it is enabled as an IPv6 router with the ipv6 unicast-routing global configuration command. A packet sent to this group is received and processed by all IPv6 routers on the link or network.
A solicited-node multicast address is similar to the all-nodes multicast address. The advantage of a solicited-node multicast address is that it is mapped to a special Ethernet multicast address. This allows the Ethernet NIC to filter the frame by examining the destination MAC address without sending it to the IPv6 process to see if the device is the intended target of the IPv6 packet.

An <abbr title="internet protocol version">IPv6</abbr> Header consists of:
2. IP Version
3. Traffic Class
4. Flow Label
5. Payload Length
6. Next Header
7. Hop Limit
8. Source Address
9. Destination Address