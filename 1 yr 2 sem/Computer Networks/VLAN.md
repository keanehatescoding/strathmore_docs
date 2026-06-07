<abbr title="Virtual Local Area Network"><b>VLAN</b></abbr> is technology that enables multiple devices to be connected to different virtual LANs and forward broadcast traffic only to those VLANs but all these devices shared one or more common switch i.e on one broadcast domain.Each VLAN is not aware of the other VLAN and that is why it needs a router or <abbr title="Multi Layer Switch">MLS</abbr> to connect two or more VLAN.
## Common Types of VLANs
1. Default VLAN
2. Data VLAN
3. Native VLAN
4. Voice VLAN
5. Management VLAN

The connection that connects the VLAN and the Router is called the __trunk__.
If you try to assign an interface to a VLAN that does not exist the switch will create that VLAN automatically.
VLAN 1, 1002-1005 exist by default and cannot be deleted.
VLAN 1 is the default native VLAN and used to forward any untagged traffic.
It should be noted vlan 1 cannot be deleted or removed.
A native vlan is a special vlan where traffic traverses on the 802.1q trunk without a VLAN tag.
Any host that is not allocated to any vlan will automatically be allocated to the native vlan.
The default native vlan i.e vlan 1 should be changed by for security reasons because it allows a possible vlan hopping attack.
The native vlan should be the same for both ends of the vlan otherwise the vlan will not operate properly.
Native vlan exists for backward compatibility for older devices that don't support vlans.
It is also used by the switch to carry specific control and management protocol traffic like <abbr title="Cisco Discovery Protocal">CDP</abr>, <abbr title="VLAN Trunking Protocol">VTP</abbr> and [[Spanning Tree Protocol|STP]] or some other network managment traffic.
Native vlan is also useful when we use <abbr title="Voice over IP">VoIP</abbr>.
There are special VLANs i.e

| VLAN | Name                                                                      | Ports |
| ---- | ------------------------------------------------------------------------- | ----- |
| 1    | default native                                                            | all   |
| 1002 | <abbr title="legacy fiber distributed data interface">fddi</abbr>-default | -     |
| 1003 | token-ring-default                                                        | -     |
| 1004 | fddinet-default                                                           | -     |
| 1005 | trnet-default                                                             | -     |
These 5 VLANs exist by default on any Cisco Router.
VLAN Has 3 port types:
1. __Access ports__ - these types of ports are configured to carry untagged traffic for a single VLAN only.
2. __Trunk ports__ - these types of ports are a designed to carry tagged traffic for multiple VLANs at the same time.
3. __Hybrid ports__ - they are a combination of both access and trunk ports and carry both tagged and untagged frame traffic.
In 802.1Q protocol specification,the drop eligibility indicator field(DEI) indicates the frame can be dropped if the network is congested, it is 1 bit in length.
In 802.1Q protocol specification, the priority code point field (PCP) is used for class of service.
VLANs 0 and 4095 are reserved and cannot be used.
## Benefits
1. More cost effective as opposed to buying multiple networking equipment for each network.
2. Security since each VLAN is isolated and not aware of any other VLAN on the switch.
As the number of devices increases it can be cumbersome to configure all these VLANs therefore the [[DTP|DTP]] was created to help this challenge.