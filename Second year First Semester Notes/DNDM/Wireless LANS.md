Defined in __IEEE 802.11__.
<abbr title="Collision Sense Multiple Access Collision Avoidance">CSMA CD</abbr> is used in wireless networks to avoid data collision. It works by waiting for a device to stop sending data for it to start sending data.
Wi-Fi uses two main bands:
1. 2.4 GHz band i.e from 2.400 GHz to 2.4835 GHz
2. 5 GHz band i.e from 5.150 GHz to 5.825 GHz but it is further sub divided into 4 smaller bands.
3. 6 GHz band defined in 802.11ax for Wi-Fi 6
2.4 GHz has a further reach in open space and better penetration of obstacles.
Since 2.4 GHz band is used by most devices then it can have more interference than the 5 GHz band but most modern devices offer both.
The 2.4 GHz band is further subdivided into multiple channels each with a 22 Mhz Range.
It is recommended to use the 1, 6 and 11 channels as these channels don't interfere with each other.

| Standard | Frequencies | Max Data Rate<br>(Theoretical) | Alternate Name |
| -------- | ----------- | ------------------------------ | -------------- |
| 802.11   | 2.4 GHz     | 2 mbps                         |                |
| 802.11b  | 2.4GHz      | 11 mbps                        |                |
| 802.11a  | 5 GHz       | 54 mbps                        |                |
| 802.11g  | 2.4GHz      | 54 mbps                        |                |
| 802.11n  | both        | 600 mbps                       | Wi-Fi 4        |
| 802.11ac | 5 GHz       | 6.93 Gbps                      | Wi-Fi 5        |
| 802.11ax | 2.4/5/6     | 4*802.11ac                     | Wi-Fi 6        |

## Service Sets
A __service set__ is a group of wireless devices.
There are 3 main types:
1. Independent
2. Infrastructure
3. Mesh
All devices in a service set share the same <abbr title="Service Set Identifier">SSID</abbr>.
An <abbr title="Independent Basic Service Set">IBSS</abbr> is a wireless network which 2 or more devices connect directly __without__ using and __access point__.
It is and __ad hoc__ network and not scalable.
It is also used for basic file transfer file airdrop.
<abbr title="Basic service set">BSS</abbr> is a kind of infrastructure service set whereby clients connect to each other __via an Access Point(AP) but not directly__.
A basic service set identifier is used to uniquely identify a AP, therefore two AP may have the same SSID but not the same BSSID. BSSID is the mac address of the SSID/AP radio.
<abbr title="Basic Service Area">BSA</abbr> is the area around a BSS that is usable.
It is possbile a AP to provide more than one wireless LAN, each with a unique SSID and BSSID.
Usually the BSSID is gotten by incrementing 1 to the older BSSID.
Functionally, each wireless lan is it's own vlan and they are connected together via a trunk connected to the distrubution system.

To create larger networks beyond a single BSS we use <abbr title="Extended Basic Service Set">ESS</abbr>.
APs with in one ESS are connected by a wired network and:
1. Usually have the same SSID
2. Have different BSSID
3. Use different channel to avoid interference
Clients can pass between APs without having to reconnect providing a seamless wireless experience known as __roaming__.

The final kind of service set is a <abbr title="Mesh Basic Service Set">MBSS</abbr>, which is used to provide inter-connectivity between BSSs when an Ethernet connection cannot be created between different BSS.
Mesh APs use two radio namely:
1. BSS radio for clients or stations
2. One to form a backhaul network which is used to bridge traffic from AP to AP.
At least one AP is connected to the wired network and it is known as the __root Access Point__.
Any other AP is known as a __Mesh Access Point__.
In 802.11 the upstream wired network is known as the __(DS)distribution system__.
Each wireless BSS or ESS ix mapped to a VLAN in the network.

Access points can work in different mode:
1. Repeater mode - where it extend the range of a BSS
2. WorkGroup Bridge - allows a client without wireless capabilities to connect to a wireless network. 
3. Outdoor Bridge - used to connect networks over longer distances without a physical connection kind of a satelite.

## Disadvantages
1. In wireless communication there often happens collisions, though this is minimized using <abbr title="Collision Sense Multiple Access Collision Avoidance">CSMA CD</abbr>.
2. We cannot used any frequency to communicate, only specified channels are allowed for communication according to a country's laws
3. Wireless communication is limited by range and other factors such as absorption, reflection, refraction, diffraction, scattering, interference.