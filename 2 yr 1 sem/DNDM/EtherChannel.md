Link Agreggation Group
There are 3 methods of Etherchannel configuration on Cisco Switches namely:
1. PaGP - Port Aggregration Group Protocol, this protocol is a Cisco Proprietory protocol
2. LaCP - Link Aggregation Control Protocol, this is the industry standard protocol defined in __IEEE 802.3d__
3. Static Etherchannel - using this configuration we statically configure interfaces to be etherchannel hence if they fail therefore is no redundancy.

When making an Etherchannel the following should be the same for all interfaces:
1.  Speed
2. Duplex 
3. Native and allowed vlans
4. Switchport mode


Up to 8 interfaces can be configured to be a single etherchannel. For LACP this increases to 16, but only 8 may be used at a time and 8 for standby
Like DTP a channel may have different modes:
2. __active__ - enable LACP unconditionally
3. __passive__ - enable LaGP only if a LaGP device is detected
4. __auto__ - enable PaGP only if a PaGP device is detected
5. __desirable__ - enable PaGP uncoditionally
6. __on__ - enable etherchannel only

Note on and active/desirable will not form an etherchannel.

## Advantages

## Limitations
1. Interfaces cannot be mixed i.e an etherchannel cannot exist when there is a fastEthernet and GigaBitEthernet interface i.e. it violates same speed requirements.
2. It can only have a maximum of 8 interfaces per etherchannel
3. Cisco Catalyst 2960 only supports up to 6 interfaces per etherchannel.
4. Switchport modes MUST be consist between both devices i.e one interface cannot be a trunk port while another be an access port.