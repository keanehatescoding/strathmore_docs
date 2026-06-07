EtherChannel or __Port Channel__ or <b><abbr title="Link Aggregation Groups">LAG</abbr></b> multiple interfaces together to act as a single interface.

When making an EtherChannel the following must be the same for all interfaces:
1. All Ethernet interfaces must support EtherChannel with no requirement that interfaces be physically contiguous.
2. Speed
3. Duplex 
4. Native and allowed <abbr title="virtual local area network">vlans</abbr>
5. Switchport mode (access of trunk)

There are 3 methods of EtherChannel configuration on Cisco Switches namely:
1. __PaGP__ - Port Aggregation Group Protocol, this protocol is a __Cisco proprietary protocol__. It  __dynamically__ negotiates the creation/maintenance of EtherChannels.
2. __LaCP__ - Link Aggregation Control Protocol, this is the industry standard protocol defined in __IEEE 802.3d__. It __dynamically__ negotiates the creation/maintenance of EtherChannels.
3. __Static EtherChannel__ - using this configuration we statically configure interfaces to be EtherChannel hence if they fail therefore is no redundancy.
<abbr title="Port Aggregation Group Protocol">PAgP</abbr> and <abbr title="Link Aggregation Control Protocol">LACP</abbr> will automatically check if the configuration of the interfaces that you use is the same. Any port modification after the creation
of the channel also changes all other channel ports.
Up to 8 interfaces can be configured to be a single EtherChannel. For <abbr title="Link Aggregation Control Protocol">LACP</abbr> this increases to 16, but only 8 may be used at a time and 8 for standby
For Cisco Catalyst 2960 Layer 2 Switch, it only supports up to 6 six EtherChannels.
If these settings must be changed, configure them in port channel interface configuration mode. Any configuration that is applied to the port channel interface also affects individual interfaces. However, configurations that are applied to the individual interfaces do not affect the port channel interface. Therefore, making configuration changes to an interface that is part of an EtherChannel link may cause interface compatibility issues.
# Port Aggregation Group Protocol
When a etherchannel link is configured between etherchannel-capable port, PAgP packets are sent between etherchannel-capable ports to negotiate forming of a channel.
When PAgP identifies matched Ethernet links, it groups the links into an EtherChannel. The EtherChannel is then added to the spanning tree as a single port.
PAgP helps create the EtherChannel link by detecting the configuration of each side and ensuring that links are compatible so that the EtherChannel link can be enabled when needed.
When enabled, PAgP also manages the EtherChannel. PAgP packets are sent every 30 seconds. PAgP checks for configuration consistency and manages link additions and failures between two switches. It ensures that when an EtherChannel is created, all ports have the same type of configuration.
The modes for PAgP are:
1. __on__ - This mode forces the interface to channel without PAgP. Interfaces configured in the on mode do not exchange PAgP packets.
2. __PAgP desirable__ - This PAgP mode places an interface in an active negotiating state in which the interface initiates negotiations with other interfaces by sending PAgP packets.
3. __PAgP Auto__ - This PAgP mode places an interface in a passive negotiating state in which the interface responds to the PAgP packets that it receives but does not initiate PAgP negotiation.
If all modes are disabled by using the no command, or if no mode is configured, then the EtherChannel is disabled.
The on mode manually places the interface in an EtherChannel, without any negotiation. It works only if the other side is also set to on. If the other side is set to negotiate parameters through PAgP, no EtherChannel forms, because the side that is set to on mode does not negotiate.
No negotiation between the two switches means there is no checking to make sure that all the links in the EtherChannel are terminating on the other side, or that there is PAgP compatibility on the other switch.

| S1             | S2             | Channel Establishment? |
| -------------- | -------------- | ---------------------- |
| On             | On             | Yes                    |
| On             | Desirable/Auto | No                     |
| Desirable/Auto | On             | No                     |
| Desirable      | Desirable      | Yes                    |
| Desirable      | Auto           | Yes                    |
| Auto           | Desirable      | Yes                    |
| Auto           | Auto           | No                     |

# Link Aggregation Control Protocol
LACP is part of an IEEE specification (802.3ad) that allows several physical ports to be bundled to form a single logical channel. LACP allows a switch to negotiate an automatic bundle by sending LACP packets to the other switch. It performs a function similar to PAgP with Cisco EtherChannel. Because LACP is an IEEE standard, it can be used to facilitate EtherChannels in multi-vendor environments. On Cisco devices, both protocols are supported.
LACP provides the same negotiation benefits as PAgP. LACP helps create the EtherChannel link by detecting the configuration of each side and making sure that they are compatible so that the EtherChannel link can be enabled when needed.
The modes for LACP are as follows:
1. __On__ - This mode forces the interface to channel without LACP. Interfaces configured in the on mode do not exchange LACP packets.
2. __LACP active__ - This LACP mode places an interface in an active negotiating state in which the interface initiates negotiations with other interfaces by sending LACP packets.
3. __LACP passive__ - This LACP mode places an interface in a passive negotiating state in which the interface responds to the LACP packets that it receives but does not initiate PAgP negotiation.

| S1             | S2             | Channel Establishment? |
| -------------- | -------------- | ---------------------- |
| On             | On             | Yes                    |
| On             | Active/Passive | No                     |
| Active/Passive | On             | No                     |
| Active         | Active         | Yes                    |
| Active         | Passive        | Yes                    |
| Passive        | Active         | Yes                    |
| Passive        | Passive        | No                     |
__Note:__ On and active/desirable will not form an etherchannel.
# Load Balancing
EtherChannel supports load balancing. However, it does not mean that the traffic is distributed equally among the links. The traffic that goes through the port-channel interface is not forwarded
on a round-robin basis. Instead, EtherChannel load balancing uses a hash algorithm to forward packets.
The calculated load balancing hash determines which physical interface will be used to forward the packet.
Frames are forwarded(load balanced) from different physical interfaces based on:
1. Source <abbr title="Media Access Control">MAC</abbr> address
2. Destination <abbr title="Media Access Control">MAC</abbr> address
3. Source <abbr title="Media Access Control">MAC</abbr> address AND destination <abbr title="Media Access Control">MAC</abbr> address
4. Source <abbr title="Internet Protocol">IP</abbr> address
5. Destination <abbr title="Internet Protocol">IP</abbr> address
6. Source <abbr title="Internet Protocol">IP</abbr> address AND destination <abbr title="Internet Protocol">IP</abbr> address
7. <abbr title="Transmission control protocol">TCP</abbr> or <abbr title="user datagram protocol">UDP</abbr> port numbers ( for newer devices only)

# Layer 3 EtherChannel
A layer three etherchannel is similar to an interface on a router. The switch won’t “switch” traffic on this interface but route it. Because it’s a layer three interface, we configure an IP address on it.
Once you use the channel-group command, the port-channel interface will automatically inherit all settings from your physical interface. If you forget to run the no switchport command on an interface, your etherchannel will be layer 2 instead of layer 3
## Advantages
1. They really on the already existing switchports hence no need to buy a more expensive switch.
2. Most of the configuration can be done on the etherchannel interface instead of individual port, ensuring consistency throughout the links.
3. Load balancing takes place between the different links that are part of the same etherchannel.

## Limitations
1. Interfaces cannot be mixed i.e a single Etherchannel cannot exist when there is a fastEthernet and GigaBitEthernet interface i.e. it violates same speed requirements.
2. It can only have a maximum of 8 interfaces per EtherChannel
3. Switchport modes MUST be consist between both devices i.e one interface cannot be a trunk port while another be an access port.
4. The individual EtherChannel group member port configuration must be consistent on both devices. If the physical ports of one side are configured as trunks, the physical ports of the other side must also be configured as trunks within the same native <abbr title="virtual LAN">VLAN</abbr>. Additionally, all ports in each EtherChannel link must be configured as Layer 2 ports.
5. Cisco Catalyst 2960 only supports up to 6 interfaces per etherchannel.