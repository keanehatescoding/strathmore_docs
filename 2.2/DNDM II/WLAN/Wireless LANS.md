Defined in __IEEE 802.11__.
<abbr title="international telecommunications unit">ITU</abbr> is responsible
<abbr title="Collision Sense Multiple Access Collision Avoidance">CSMA CA</abbr> is used in wireless networks to avoid data collision. It works by waiting for a random amount of time for a device to stop sending data for it to start sending data. This time is known as __back-off period__. After receiving the transmission, the recipient sends back an acknowledgement(ACK) to confirm successful delivery.
To further reduce collisions, an optional Request to Send/Clear to Send (RTS/CTS) mechanism can be used. With RTS/CTS, a device first requests permission from the access point before sending data. If approved, it proceeds with transmission, ensuring no other device transmits at the same time.
Since only one device is able to send data at a time it means all wireless networks operate at half-duplex mode.
Signal impairments
1. __Absorption__- happens when  wireless signal is transmitted over a material and is converted to heat, weakening the original signal. Happens when a signal bounces of a material.
2. __Refraction__ happens when a wave is bent as it travels from one media to another where the signal travels at a different speed.
3. __Diffraction__ happens when a wave encounters an obstacle and travels around it.
4. __Scattering__- happens when a material causes a signal to scatter across all directions.
5. __Interference__ this happens when two or more radio waves superimpose and therefore constructively or destructively interfere altering the amplitude of the received rf signal.

Wi-Fi uses 3 main bands:
1. 2.4 GHz band i.e from 2.400 GHz to 2.4835 GHz
2. 5 GHz band i.e from 5.150 GHz to 5.825 GHz but it is further sub divided into 4 smaller bands.
3. 6 GHz band defined in 802.11ax for Wi-Fi 6
2.4 GHz has a further reach in open space and better penetration of obstacles.
Since 2.4 GHz band is used by most devices then it can have more interference than the 5 GHz band but most modern devices offer both.
The 2.4 GHz band is further subdivided into multiple channels each with a 22 Mhz Range.
It is recommended to use the 1, 6 and 11 channels as these channels don't interfere with each other.
As for the 5 GHz band, it consists of non-overlapping channels, so it is much easier to avoid interference between adjacent channels.

| Standard | Frequencies | Max Data Rate<br>(Theoretical) | Alternate Name |
| -------- | ----------- | ------------------------------ | -------------- |
| 802.11   | 2.4 GHz     | 2 mbps                         |                |
| 802.11b  | 2.4 GHz     | 11 mbps                        |                |
| 802.11a  | 5 GHz       | 54 mbps                        |                |
| 802.11g  | 2.4 GHz     | 54 mbps                        |                |
| 802.11n  | both        | 600 mbps                       | Wi-Fi 4        |
| 802.11ac | 5 GHz       | 6.93 Gbps                      | Wi-Fi 5        |
| 802.11ax | 2.4/5/6     | 4*802.11ac                     | Wi-Fi 6        |
802.11n aka Wi-Fi 4 is also known as __high throughput(HT) Wi-Fi__.
802.11ac aka Wi-Fi 5 is also known as __very high throughput(VHT) Wi-Fi__.
## Service Sets
A __service set__ is a group of wireless devices.
There are 3 main types:
1. Independent
2. Infrastructure
3. Mesh
All devices in a service set share the same <abbr title="Service Set Identifier">SSID</abbr>.
An <abbr title="Independent Basic Service Set">IBSS</abbr> is a wireless network which 2 or more devices connect directly __without__ using and __access point__.
It is also __ad hoc__ network and it does not scale.
It is also used for basic file transfer file i.e airdrop.
<abbr title="Basic service set">BSS</abbr> is a kind of infrastructure service set whereby clients connect to each other __via an Access Point(AP) but not directly to each other__.
A basic service set identifier is used to uniquely identify a AP, therefore two AP may have the same SSID but not the same BSSID. BSSID is the mac address of the SSID/AP radio.
Clients can join a BSS by requesting to __associate__ to a BSS.
<abbr title="Basic Service Area">BSA</abbr> is the area around a BSS where the signal is usable.
It is possible a AP to provide more than one wireless LAN, each with a same SSID and different BSSID.
Usually the BSSID is gotten by incrementing 1 to the older BSSID.
Functionally, each wireless lan is it's own vlan and they are connected together via a trunk connected to the distrubution system.

To create larger networks beyond a single BSS we use <abbr title="Extended Basic Service Set">ESS</abbr>.
APs with in one ESS are connected by a wired network and:
1. Usually have the same SSID
2. Have different BSSID
3. Use different channel to avoid interference
Clients can pass between APs without having to reconnect providing a seamless wireless experience known as __roaming__.
There is should be some overlap between two APs between 10-15% otherwise the device will lose the connection as it moves from one AP to another.

The final kind of service set is a <abbr title="Mesh Basic Service Set">MBSS</abbr>, which is used to provide inter-connectivity between BSSs when an Ethernet connection cannot be created between different BSS.
Mesh APs use two radio namely:
1. A BSS radio for clients or stations
2. Another one to form a backhaul network which is used to bridge traffic from AP to AP.
At least one AP is connected to the wired network and it is known as the <b><abbr title="root access point">RAP</abbr></b>.
Any other AP is known as a <b><abbr title="Mesh Access Point">MAPs</abbr></b>.
A protocol is used to identify the best route to the <abbr title="Root Access Point">RAP</abbr>.
Most wireless networks aren't standalone networks, rather they are a way for wireless clients to connect to the wired network infrastructure.
In 802.11 the upstream wired network is known as the __(DS)distribution system__.
Each wireless BSS or ESS ix mapped to a VLAN in the network.

Access points can work in different mode:
1. <b>Repeater mode</b> - where it extend the range of a BSS
2. <b>WorkGroup Bridge</b> - allows a client without wireless capabilities to connect to a wireless network. 
3. <b>Outdoor Bridge</b> - used to connect networks over longer distances without a physical connection kind of a satellite.

The structure of an 802.11 Frame is as follows:
1. Frame Control - 2 bytes
2. Duration/ID - 2 bytes
3. Address 1 - 6 bytes
4. Address 2 - 6 bytes
5. Address 3 - 6 bytes
6. Sequence Control - 2 bytes
7. Address 4 - 6 bytes
8. <abbr title="Quality of Service">QOS</abbr> Control - 2 bytes
9. <abbr title="High Throughput Control">HT</abbr> Control - 4 bytes
10. Frame body(Packet)
11. <abbr title="frame check sequence">FCS</abbr> - 4 bytes

Frame Control - provides the message type and sub type.
Duration/ ID - depending on the message type it can indicate:
1. time in $\micro$ seconds the channel will be dedicated for transmission of the frame.
2. the identifier of the association(connection)

Addresses - which addresses are present are dependant on the message type. The 4 addresses are:
1. Receiver address - immediate recipient
2. Transmitter address - original sender
3. Destination address - final recipient
4. Source address - intermediate sender
![[Pasted image 20251126173021.png]]
Sequence control - used to reassemble the frame and eliminate duplicate frame
<abbr title="Quality of Service">QOS</abbr> control - used in <abbr title="Quality of Service">QOS</abbr> to prioritize certain traffic.
<abbr title="High Throughput Control">HT</abbr> control- enabled in 802.11n to enable high throughput operations.

## Association Process
For a client to send traffic across an AP it must first be authenticated and associated with the AP.
There are 3 802.11 association states namely:
1. Not Authenticate, Not associated
2. Authenticated but Not associated
3. Authenticated and associated

There are 2 ways for a station to scan for an AP.
1. __Active scanning__ - the client sends probe requests and listens for probe responses.
2. __Passive scanning__ - the station listens for __beacons__ from the AP.
Beacons messages are periodically sent by the APs to advertise the BSS.

There are 3 802.11 message types namely:
1. __Management__ which are used to manage the BSS i.e probe requests & responses, beacons messages, authentication requests & responses, association requests and responses.
2. __Control__ - used to control access to the medium i.e <abbr title="request to send">RTS</abbr> and <abbr title="control to send">CTS</abbr>, <abbr title="acknowledgement">ACKs</abbr>.
3. __Data__ - used to send actual packets.

Wireless APs deployment methods:
1. __Autonomous__ - are self contained and do not rely on an <abbr title="wireless LAN controller">WLC</abbr> i.e configured individually via a console , ssh, telnet or web browser connection.
2. __Lightweight__ - these separate the functions of APs and a wireless LAN Controller(WLC).
3. __Cloud__ - this is kind of a mixture of both.
# Autonomous AP
An autonomous AP is managed as a standalone
device; meaning every parameter (SSIDs, VLANs,
IP addresses, Security mode, Encryption types,
Channel settings, Transmit Power settings, QoS
policies, ACLs, Failover settings, etc.) is configured manually directly on the device.
## Advantage of Autonomous APs
1. __Independence__ the failure of one AP does not lead to the collapse of the entire network.
2. __Cost effective for small deployments.__ It works well for smaller networks because no need for expensive automation or wireless controller.s
3. **No single point of failure** unlike for controller based architectures.
## Disadvantages of Autonomous APs
1. __No centralized management__- each ap needs to be configured individually unless you use automation or a centralized management solution i.e Cisco DNA Center, Ruckus smartzone.
2. __Does not scale__ - when a network administrator needs to set up an enterprise wireless network it becomes cumbersome and impractical.
3. Roaming requires stretching the VLANs and SSIDs on all APs. The VLANsmust span the entire wired network, which is uncommon in modern network designs.
4. If a network administrator wants to configure a new SSID, he has to create a new VLAN on all switches.
5. The RF parameters of each AP are configured manually.
6. No centralized node manages wireless traffic, such as policing, QoS, or intrusion detection. Everything is done manually.
# Lightweight AP Architecture
To address the scaling limitations of the autonomous AP architecture, there is need to
separate the control-plane functions of the autonomous APs into a centralized management
controller, as shown.
All control-plane functions are separated into a centralized wireless controller called WLC. It pushes the AP firmware and configuration and handles security policies, client authentication,
RF management, and transmit power—making the access point fully dependent on it.
Since the control and data plane are separated, CAPWAP two tunnels
1. Control tunnel ( UDP 5246)
2. Data tunnel (UDP 5247)
Unlike autonomous APs, a lightweight AP sends the client's traffic to the WLC by default. The controller is responsible for bridging the client's traffic into the wired network, as shown.
__FlexConnect__ mode can be used for remote <abbr title="Lighweight APs">LAPs</abbr>, this mode allows traffic reaching the WLC to travel through the CAPWAP tunnel as usual. However, local traffic such as communication between clients at the remote site can be switched directly by the LAP without the CAPWAP tunnel.
Lighweight APs modes
3. Local - default 
4. Flexconnect - when the WLC is down it defaults to forwarding traffic via the switches.
5. Sniffer - 
6. Rogue Detector 
## WLC Placement
### 1. WLC at the Core Layer
1. Very scalable

### 2. WLC at the Access Layer
1. Less scalable

### 3. One Master AP as WLC
Instead of requiring a separate controller (WLC), one of the access points takes on the role of the controller(master) while also functioning as a regular AP. This eliminates the need for additional hardware and simplifies network deployment, as shown.
It is the most cost-efficient placement method for small and medium sized entreprises.
## Advantages of Lightweight APs

## Disadvantages of Lightweight APs

Different <abbr title="wireless LAN Controller">WLC</abbr> Deployment models
1. Unified - supports up to 6000 APs
2. Cloud based - supports up to 3000 APs
3. Embedded - support up to 200 APs
4. Mobility express - supports up to 100 APs
# Roaming

## Disadvantages
1. In wireless communication there often happens collisions, though this is minimized using <abbr title="Collision Sense Multiple Access Collision Avoidance">CSMA CD</abbr>.
2. We cannot used any frequency to communicate, only specified channels are allowed for communication according to a country's laws
3. Wireless communication is limited by range and other factors such as absorption, reflection, refraction, diffraction, scattering, interference.