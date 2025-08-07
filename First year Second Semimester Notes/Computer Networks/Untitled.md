VLSM -Variable length subnet mask 
ipv6 this is a 128 bit addresss.
A mac address is a 48 bit address.
A ipv4 is s 32 bit address.
It uses hexadecimal characters instead of base 10 characters i.e. ipv4
It does not use subnetting instead it uses cidr notation to give us the number of bits making up the network portion of the ip address.
When a hextet or continuous hextet of zero appears once we can replace this hextet(s) with two colons but this rule can is used only one one continous zero hextet or zero continuous hextet.
Any leading zero(s) any octect can be omitted to further compress the address.
The global prefix of your global unicast ipv6 address is provided to you by your isp and is usually at least 48 bits long.
The next 16 bits to the rhs after the global prefix is the subnet id of your network.
The remaining 64 bits is usually the interface id and gives us the interface host.
Global unicast is publicly routable address and are usually given as 2000::/3 and usually start with a 2 or 3.
Unique local is essentially like a private network address in ipv4 i.e. (192.168. * . * )
and hence cannot be routed in a the internet these usually take the form FC00::/7 and thus with always start with an F then a C or D due to it taking 7 bits.
Link Local address are quick automatic private that are designed not to be routable over a network and are designed to communicate over a  single area of a network. They are analogous to the infamous 169.254. * . *  network which you see when you can't connect to other networks. They usually take the form 
FE80::/10
Multicast address - these are addresses that are sent to a group of computers or devices that are listening for that particular Multicast address. They usually take the form 
FF00::/8
Anycast address - these are interesting because ipv6 allows us to set up several devices with the same ip address. The data is then sent to the closest device with that ip address. They take the form
2000::/3
Routers do not forward broadcast messages( packets with FF:FF:FF:FF:FF:FF as the mac address).
Ethernet is defined in 802.3 while Wifi is defined in 802.11
TTL - this is the maximum number of router hops a packet can hop before the packet expires.
SMTP is for sending mail while POP3 and IMAP are for retrieving mail from a mail server. The difference between IMAP and POP3 is IMAP stores mail in a mail server and syncs them with multiple devices while POP3 deletes a mail after retrieving it from the mail server hence it cannot be used to sync across multiple devices.
To run ssh in a ssh in a unix based os use the -X flag which enables xorg server.