<abbr title="Virtual Local Area Network"><b>VLAN</b></abbr> is technology that enables multiple devices to be connected to different virtual LANs and forward broadcast traffic only to those VLANs but all these devices shared one or more common switch i.e on one broadcast domain.Each VLAN is not aware of the other VLAN and that is why it needs a router to connect two or more VLAN.
## Common Types of VLANs
1. Default VLAN
2. Data VLAN
3. Native VLAN
4. Voice VLAN
5. Management VLAN

The connection that connects the VLAN and the Router is called the trunk.
If you try to assign an interface to a VLAN that does not exist the switch will create that VLAN automatically.
VLAN1, 1002-1005 exist by default and cannot be deleted.
VLAN1 is the native VLAN and used to forward any untagged traffic.
There are special VLANs i.e

| VLAN | Name               | Ports |
| ---- | ------------------ | ----- |
| 1    | default            | all   |
| 1002 | fddi-default       | -     |
| 1003 | token-ring-default | -     |
| 1004 | fddinet-default    | -     |
| 1005 | trnet-default      | -     |
These 5 VLANs exist by default on any Cisco Router.
VLAN Has 3 port types:
1. __Access ports__ - these types of ports are configured to carry traffic for a single VLAN only.
2. __Trunk ports__ - these types of ports are a designed to carry traffic for multiple VLANs at the same time.
3. __Hybrid ports__ - they are a combination of both access and trunk ports and carry both tagged and un-tagged frame traffic.
## Benefits
1. More cost effective as opposed to buying multiple networking equipment for each network.
2. Security since each VLAN is isolated and not aware of any other VLAN on the switch.
As the number of devices increases it can be cumbersome to configure all these VLANs therefore the <abbr title="Dynamic Trunking Protocol">DTP</abbr> was created to help this challenge.
