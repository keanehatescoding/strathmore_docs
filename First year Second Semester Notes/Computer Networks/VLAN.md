<abbr title="Virtual Local Area Network"><b>VLAN</b></abbr> is technology that enables multiple devices to be connected to different virtual LANs and forward broadcast traffic only to those VLANs but all these devices shared one common switch i.e on one broadcast domain.Each VLAN is not aware of the other VLAN and that is why it needs a router to connect two or more VLAN.
The connection that connects the VLAN and the Router is called the trunk.
If you try to assign an interface to a VLAN that does not exist the switch will create that VLAN automatically.
VLAN1, 1002-1005 exist by default and cannot be deleted.
There are special VLANs i.e

| VLAN | Name               | Ports |
| ---- | ------------------ | ----- |
| 1    | default            | all   |
| 1002 | fddi-default       | -     |
| 1003 | token-ring-default | -     |
| 1004 | fddinet-default    | -     |
| 1005 | trnet-default      | -     |
These 5 VLANs exist by default on any Cisco Router.
## Benefits
1. More cost effective as opposed to buying multiple networking equipment for each network.
2. Security since each VLAN is isolated and not aware of any other VLAN on the switch.