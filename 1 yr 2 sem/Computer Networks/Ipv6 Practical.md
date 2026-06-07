# Addressing in Packet Tracer
When using ipv6 I recommend you use the 2911 router in packet tracer since PT Router is just an emulation of a router and does not recognise ipv6.
To setup ipv6 addressing on a Cisco Packet Router in Packet Tracer type the following:

1. You first need to enter privileged mode in order to configure the router. To enter privilege exec mode type
```sh
Router> enable
```
2. To start configuring the router we need to enter the global configuration mode. To enter global configuration mode from privilege EXEC mode type
```sh
Router# configure terminal
```
By default cisco router's disable ipv6 [unicast] routing. So to enable ipv6 unicast routing type the following command.
```sh
Router1(config)# ipv6 unicast-routing
```
makes the router allow ipv6 traffic to be routed
After deciding the prefix length of your ipv6 address type the following
```sh
Router1(config)# interface gigabitEthernet0/0
```
This switches to the gigabitEthernet0/0 interface.
```sh
Router1(config-if)# ipv6 address 2001:3200:BBBB::1/51
```
This sets the ipv6 address of interface gigabitEthernet0/0 to 2001:3200:BBBB::1 with a prefix length of 51 bits.
```sh
Router(config-if)# no shut
```
This essentially turns on this interface.
To clear ipv6 routes in your cisco terminal type the following
To add a ipv6 route in packet tracer. Type the following
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