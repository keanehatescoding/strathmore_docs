To enter privilege exec mode type
```sh
Router> enable
```
To enter global configuration mode from privilege EXEC mode type
```sh
Router# configure terminal
```
By default cisco router's disable ipv6 unicast routing. So to enable ipv6 unicast routing type the following command.
```sh
Router1(config)# ipv6 unicast-routing
```
makes the router allow ipv6 traffic to be routed
When using ipv6 I recommend you use the 2911 router in packet tracer since PT Router is just an emulation of a router and does not recognise ipv6.
After deciding the prefix length of your ipv6 address type the following
```sh
Router1(config)# interface gigabitEthernet0/0
```
This switches to the gigabitEthernet0/0 interface.
```sh
Router1(config)# ipv6 address 2001:3200:BBBB::1/51
```
This sets the ipv6 address of interface gigabitEthernet0/0 to 2001:3200:BBBB::1 with a prefix length of 51 bits.
```sh
Router(config)# no shut
```
This essentially turns on this interface so I will start appearing green in packet tracer.
To clear ipv6 routes in your cisco terminal type the following
```shell
clear ipv6 route *
show ipv6 int brief
```
_ FF02:1:2 __ is a reserved mutlicast address for all dhcp servants and ipv6 relay agent on the network.