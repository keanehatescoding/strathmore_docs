A __media access control address__ or a __physical__ or __hardware__ address is unique identifier assigned to a network interface to identify it on a LAN.
The __first 24__ bits of a mac address are the __Organization Unique Identifier__ which identifies the manufacturer of the device.
The second half of the mac address identifies the device and represents the serial number assigned to the adapter by the manufacturer.
The __least significant bit__ of the __first octet__ is the __Individual/Group__ address bit. It is used to identify if the destination address is a unicast or multicast address.
0 - unicast
1 - multicast
The __second least significant bit__ of the __first octet__ is the __Universally or Locally administered address bit(U/L)__. It is used to tell if the MAC address has been changed/set up locally.
0 - universally administered/ global unique (BIA)
1 - Mac address has been changed-locally set up/administered
Mac addresses are formed according to the rules of one of the three numbering name spaces managed by <abbr title="Institue of Electrical and Electronics Engineers">IEEE</abbr> namely:
1. MAC-48
2. EUI-48
3. EUI-64
The distinction between MAC-48 and EUI-48 is purely nominal i.e.
__MAC-48 is for network hardware while EUI-48 is used to identify other devices and software__
IEEE now considers MAC-48 to be an obselete term.

Mac addresses are typically written in 3 conventional formats i.e
1. Colon separated i.e  01:23:ab:cd:ef:45
2. Hyphen separated i.e D8-D3-85-EB-12-E3
3. As three hexadecimal digits separated by dots i.e 1234.5678.9ABC
## The Ethernet Protocol
IEEE 802.3
An Ethernet frame looks like this:
The frame header consist of:
1. __Preamble__ - this part of the <abbr title="Protcol Defined Unit">PDU</abbr> is used for synchronization between the clock of the sender and receiver. it is 7 bytes long
2. <b><abbr title="Start of Frame Delimeter">SFD</abbr></b> - this notifies the receiving node to get ready for a new frame.
3. __Destination MAC Address__ - 6 bytes since a mac address is 48 bits.
4. __Source mac Address__ - 6 bytes
5. __Ether type/Data Length__ - describes what is in the payload e.g. IPv4, Ipv6, <abbr title='virtual local area network'>vlan</abbr> tagged traffic etc. 2 bytes long
Body:
6. __Payload__ (The packet)
The frame trailer:
7. __Frame Check sequence__ - this is used to confirm whether the frame had an error during transmission and/or reception using <abbr title="Cyclic Redundancy Check">CRC</abbr>. It is one byte in length

## Ether type
They are various types of payloads. The ether type is used to describe what is inside the payload of a frame e.g for an ARP payload the ether type is __0x0806__, for an IPv6 Frame it is __0x86DD__ and for an IPv4 frame it is __0x800__. This field is 2 bytes long.

## IEEE 802.1Q Frame
1. Preamble
2. <abbr title="Start of Frame Delimiter">SFD</abbr>
3. Destination mac address
4. Source mac address
5. Tag - which constitutes - Ethernet type - 2 Bytes
- Bridge id which comprise of the two below:
- Bridge Priority
- VLAN identifier
1. Type/Length
2. Data
3. Frame Check Sequence
### Frame Check Sequence
Before a frame is transmitted the sender calculates a number called a frame check sequence based on the type of data that is being send. It is then appended to the end of the frame. After transmission the recipient calculates this FCS based on the received frame. If it does not match the FCS then the frame is discarded.
The size of Ethernet frames is normally limited to a maximum of 1518 bytes and a minimum of 64 bytes.

To send a frame all other hosts in the broadcast domain use FF.FF.FF.FF.FF.FF as the destination mac address. This is a special mac addressed used to send broadcast frames within the broadcast domain.

## Special features
The first 3 bytes of a mac address tell us the Organization Unique Identifier defined by IEEE.
Mac addresses can have also be multicast or unicast. This is usually identified by a the last two bits of the first octet.
The second last bit in the first octet identifies whether the mac address is a __global 0UI__ defined by IEEE or a __locally administered__ MAC address.