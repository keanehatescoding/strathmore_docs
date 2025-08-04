To show your current VLAN configuration type in privileged mode.
```terminal
show vlan brief
```
By default all interfaces should be in VLAN 1 which is the native vlan.
Use the following command to configure the VLAN x to all interfaces within the g1/x - k range
```terminal
vlan x
interface range g1/0 - 3
```

There are two types of modes for switch ports i.e. __trunk__ and __access__. 
To enable access mode on a range of ports type:
```shell
int range fa0/1 - 4
switchport mode access
```
To enable trunk mode on a switchport type:
```shell
int fa0/5
switchport mode trunk
```
To finally assign a VLAN number to a range of switch ports type
```shell
switchport access vlan x
```

To name/rename a VLAN
```shell
vlan x
name Sales
```
