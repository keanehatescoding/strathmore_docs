```cisco
R1(config-router)#router rip
R1(config-router)#version 2
R1(config-router)#no auto-summary
R1(config-router)#network <network-id>
```
By default RIP tries to summarize networks at major boundaries and this can be undesired, the no auto-summary command prevents this.
To enable interface that have an IP which lies in the addresses 192.168.0.0/24 or 11.0.0.0/8 type:
```cisco
network 192.168.0.0
network 11.0.0.0
```
The network command does not tell the router which networks to advertise, it tells the router which interfaces should have RIP routing enabled.
To configure a interface as a [[RIP|passive interface]]:
```cisco
R1(config-router)#passive-interface gigaEthernet2/0
```
To share a default route via RIP type:
```cisco
R1(config-router)#default-information originate
```
To change the maximum number of paths to the same destination type
```cisco
R1(config-router)#maximum-paths <1-32>
```
By default this is 4
RIPng
```cisco
Router(config-if)#int fa0/0
Router(config-if)#ipv6 rip 10 enable
```
The 10 that you see in the command is a number that identifies the process of RIPng that’s running. Just by typing this command, a new RIPng process is started (enabled) for you so you don’t have to go to global configuration mode to enable the