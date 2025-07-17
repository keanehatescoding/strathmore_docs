To show your current VLAN configuration type in privileged mode.
```terminal
show vlan brief
```
By default all interfaces should be in VLAN 1
Use the following command to configure the VLAN x to all interfaces within the g1/x - k range
```terminal
vlan x
interface range g1/0 - 3
```

There are two types of modes for switch ports i.e. __trunk__ and __access__. For you to enable access mode type
```shell
switchport mode access
```

To finally assign a VLAN number to a range of switch ports type
```shell
switchport access vlan x
```

To rename a VLAN
```shell
SW1(config)# vlan x
SW1(config-vlan)# name Sales
```
