```bash
R1(config t)#
```
To enable [[Spanning Tree Protocol#Portfast|portfast]] in stp type the following in the switch.
```shell
spanning-tree portfast
```
To enable [[Spanning Tree Protocol#BPDU Guard|BDPU Guard]] in stp type the following in the switch:
```shell
spanning-tree bpduguard enable
```
To enable [[Spanning Tree Protocol#BPDU Guard| BPDU Guard]] by __default__ for <abbr title="Spanning Tree Protocol">STP</abbr> type the following:
```shell
spanning-tree portfast bpduguard default
```
Spanning tree has 3 modes
```shell
spanning-tree ?
mstp  - multiple vlan spanning tree
pstp - Per-Vlan spanning tree
rapid-pstp - rapid Per-Vlan spanning tree
```
To make a switch the root bridge type:
```shell
spaning-tree vlan 1 root primary
```
This is equivalent to typing
```shell
spanning-tree mode pvst
spanning-tree extend system-id
spanning-tree vlan 1 priority 24575
```
To make another switch the secondary root bridge type:
```shell
spanning-tree vlan 1 root secondary
```
To change the tree path cost of a interface
```shell
spanning-tree vlan 1 cost value
```
where value is a number between 1 and 2 million inclusive.
We can also change the port priority of an interface i.e
```shell
spanning-tree vlan 1 port-priority value
```
where port-priority is a number from 0 to 224 inclusive.