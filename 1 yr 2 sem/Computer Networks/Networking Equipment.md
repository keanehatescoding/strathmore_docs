# Networking Equipment
Networking uses various equipment to transfer data i.e:
## 1.Hubs
Hubs broadcast any data sent to it to all ports connected to it except the source port. They are repeaters. Hubs are also simplex.

## 2.Switches
These are smarter hubs that learn the location of various nodes on their network based on the source mac address. They then fill these addresses in their mac address tables. If they don't know the location of the destination mac address of a frame then they just broadcast it to all the ports except the source port. Switches are also duplex. A switch is still kind of dumb in that say it knows a few nodes in a network, if it receives a frame whose destination mac address is unknown it will still forward them to those nodes even if it knows these nodes have a different mac address. Switches forward broadcasts to all the ports except the source port.

## 3.Routers
These devices have very different meaning today but their original meaning was they route layer 3 traffic. Layer 3 traffic involves ipv4 and ipv6 addresses. So it is the job of a router to route ipv4 and/or ipv6 packets from one router/switch/bridge to another. Routers do not forward broadcast packets.
In the modern day routers are multipurpose devices which come as 4 in one. A router is a Wireless Access Point, Switch, Default Gateway and DHCP server for the LAN.
A default Gateway is essentially a device that connects your LAN to connect to the internet.
