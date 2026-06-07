## Addressing in Packet Tracer
To setup <abbr title='internet protocol version 6'>Ipv6</abbr> addressing on a Cisco Packet Router in Packet Tracer type the following:

By default Cisco router's Disable <abbr title="internet protocol version 6">Ipv6</abbr> unicast routing. So to enable <abbr title="internet protocol version 6">Ipv6</abbr> unicast routing type the following command.
```sh
Router1(config)# ipv6 unicast-routing
```
After deciding the prefix length of your <abbr title="internet protocol version 6">IPv6</abbr> address type the following
```sh
Router1(config)# interface gigabitEthernet0/0
Router1(config-if)# ipv6 address 2001:3200:BBBB::1/51
```
This sets the <abbr title="internet protocol version 6">IPv6</abbr> address of interface gigabitEthernet0/0 to global unicast address 2001:3200:BBBB::1 with a prefix length of 51 bits.
```sh
Router(config-if)# no shut
```
To give that interface a link-local <abbr title='internet protocol version 6'>IPv6</abbr> address type
```shell
ipv6 addresss fe80::1:1 link-local
```
To clear <abbr title="internet protocol version 6">IPv6</abbr> routes in your Cisco terminal type the following:
To add a <abbr title="internet protocol version 6">IPv6</abbr> route in packet tracer. Type the following
```shell
Router(config-if)# ipv6 route 2001:acde:1::0/64 2001:acd::2
```
This tells the router there is an ipv6 2001:acda:1::0 with a prefix length of /64 via the interface with the network id 2001:acd::2.
To clear routes type the following:

```shell
Rouer(config)#clear ipv6 route *
```
To see how the interfaces are configured on the network enter:
```shell
Rouer(config)#show ipv6 int brief
```
__FF02:1:2__ is a reserved mutlicast address for all dhcp servants and ipv6 relay agent on the network.