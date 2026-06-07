Configuring etherchannel requires 3 steps
1. Specify the interfaces that compose the EtherChannel group using the interface range interface global configuration mode command. The range keyword allows you to select several interfaces and configure them all together.
```cisco
interface range FastEthernet 0/1-6
```
2. Create the port channel interface with the channel-group identifier mode active command in interface range configuration mode. The identifier specifies a channel group number. The mode active keywords identify this as an <abbr title="Link Aggregation Control Protocol">LACP</abbr> EtherChannel configuration.
```cisco
(config-if-range)# channel-group 1 mode active
```
3. To change Layer 2 settings on the port channel interface, enter port channel interface configuration mode using the interface port-channel command, followed by the interface identifier.
```cisco
S1(config-if-range)# exit
S1(config-if)# interface port-channel 1
S1(config-if)# switchport mode trunk
S1(config-if)# switchport trunk allowed vlan 1,2,20
```
To display the current EtherChannel configuration type:
```cisco
show interfaces port-channel
```
A command that shows a summary of the EtherChannel is:
```
show etherchannel summary
```
If you want to see the EtherChannel modes of each interface use the following command:
```shell
show ether-channel  port-channel
```
The load balancing method can be configured using the 
```cisco
port-channel load-balance <hash>
```
The hash may be src & dst IP, MAC address or TCP/UDP port number.
To view the current load-balance criteria type:
```cisco
show etherchannel load-balance
```
To change the criteria for load balancing type
```
port-channel load-balance src-dst-mac
```
Other options are: dst-ip, dst-mac, src-dst-mac, src-dst-ip, src-ip, src-mac.
To configure an interface as an EtherChannel
```shell
interface range g0/0 -8
channel-group 1 mode desirable
```
The other different modes are active, passive for [[EtherChannel#Link Aggregation Control Protocol|LACP]] and auto, desirable for [[EtherChannel#Port Aggregation Group Protocol|PAgP]] and on to enable EtherChannel only.
__Note__: EtherChannel and [[Spanning Tree Protocol|STP]] must interoperate. For this reason, the order in which EtherChannel-related commands are entered is important, which is why you see interface Port-Channel 1 removed and then
re-added with the channel-group command, as opposed to directly changed. If one tries to change the configuration directly, STP errors cause the associated ports to go into blocking or errdisabled state.
```bash
interface range FastEthernet 0/1 -2
no switchport  # WITHOUT THIS IT WILL BE A LAYER 2 etherchannel
channel-group 1 mode on
```