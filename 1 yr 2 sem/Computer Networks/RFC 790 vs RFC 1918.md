Reasons for partitioning of networks
1. Performance issues
2. Addressing management
3. Security issues
# Classful addressing RFC 790
## Network Classes
Class A 1.0.0.0/8 - 126.0.0.0/8
Class B 128.0.0.0/16 - 191.255.0.0/16
Class D 192.0.0.0/24 - 223.255.255.0 /24

## Classless addressing RFC 1918
## 1. Private Network addresses
Cannot be routed through the internet
10.* .* .* /8
172.16.* .* /12
192.168.* .* /16 

## 2. Public IP Addresses
Any other network address which is not a private address as shown above or APIPA/Link-Local Address, software address,experimental address or a loopback address.
### Unicast addresses
Class A 1.0.0.0-126.255.255.255 
Class B 128.0.0.0-191.255.255.255 
Class C 192.0.0.0-223.255.255.255
## Special addresses
### Multicast addresses
Class D 224.0.0.0-239.255.255.255 

### Experimental addresses
Class E 240.0.0.0-255.255.255.254 
### software
0.0.0.0-.255.255.255 

### Loopback Addresses
127.0.0.0-.255.255.255 - local host

### Reserved Link Local Address
224.0.0.0-224.0.0.255

### Broadcast Addresses
255.255.255.255 - limited broadcast address

__Link-local addresses__- for ipv4 addresses (169.254.0.0/16) are more commonly known as the Automatic Private IP Addressing (APIPA) addresses or self-assigned addresses. They are used by a Windows clients to self-configure in the event that the client cannot obtain an IP addressing through other methods. Link-local addresses can be used in a peer-to-peer connection but are not commonly used for this purpose.