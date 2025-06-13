It does not use subnetting it instead uses the prefix length of the IPv6 address i.e. number of bits making up the network portion of the ipv6 address.
Global unicast is publicly routable address and are usually given as 2000::/3 and usually start with a 2 or 3.
Unique local is essentially like a private network address in ipv4 i.e. (192.168. * . * ) and hence cannot be routed in a the internet; these usually take the form FC00::/7 and thus with always start with an F then a C or D due to it taking 7 bits.
Link Local address are quick automatic private that are designed not to be routable over a network and are designed to communicate over a  single area of a network. They are analogous to the infamous 169.254. * . *  network which you see when you can't connect to other networks. They usually take the form 
FE80::/10
Multicast address - these are addresses that are sent to a group of computers or devices that are listening for that particular Multicast address. They usually take the form 
FF00::/8
Anycast address - these are interesting because IPv6 allows us to set up several devices with the same ip address. The data is then sent to the closest device with that ip address. They take the form 2000::/3
Ethernet is defined in 802.3 while Wifi is defined in 802.11
SMTP is for sending mail while POP3 and IMAP are for retrieving mail from a mail server. The difference between IMAP and POP3 is IMAP stores mail in a mail server and syncs them with multiple devices while POP3 deletes a mail after retrieving it from the mail server hence it cannot be used to sync across multiple devices.