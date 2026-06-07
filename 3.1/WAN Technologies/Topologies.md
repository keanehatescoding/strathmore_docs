1. Hub-and-Spoke Topology
2. Multi Protocol Label Switching
3. Point to Point Topology
4. Dual-homed Topology
5. Multi-homed Topology
6. Fully meshed Topology
7. Partially meshed Topology
## 1. Hub-and-Spoke Topology

A single interface to the hub can be shared by all spoke circuits
Leased lines use serial connections **PPP** or **HDLC** connections.
There are various standards that provide different speeds in available in different countries.
Ethernet/Fiber lines are becoming more popular than leased lines because they leased lines have higher cost, higher installation lead time and offer slower speeds.
Applicable when a private connection between multiple sites is required.
## Hub-and-Spoke Topology
Below is an analogy of hub-and-spoke topology.
## Advantages
1. It is easier to control which traffic is permitted across the network.
## 2. MPLS
Similar to the internet, service providers' MPLS networks are shared infrastructure because many customers enterprises connect to and share the same infrastructure to make WAN connections.
However the *label switching* in MPLS allows VPNs to be created over the MPLS infrastructure through the use of **labels**.
These labels are use to ensure the traffic of one customer does not mix the the traffic of another customer.
MPLS terms:
- CE router = Customer Edge router
- PE router = Provider Edge router
- P router = provider core router
When the PE routers receive frames from the CE routers, then they add a label to the frame.
These labels are then used to make forwarding decisions within the service providers networks, not the destination IP therefore the CE routers do not use MPLS.
When using a layer 3 MPLS VPN, the CE and PE routers peer using either a static routes or a dynamic routing protocol, to share routing information.
When using a layer 2 MPLS VPN, the CE and PE routers do not form peerings, therefore the entire service providers network is transparent to the CE routers.
Essentially, it behaves like the two CE routers are directly connected and their WAN interfaces will be in the same subnet.
If a routing protocol is used. the two CE routers will peer directly with each others.
## Digital Subscriber Line DSL
It provided internet connectivity over phone lines and can share the same phone line that is already installed in most homes.

## 3. Point To Point Topology
It employs a point to point circuit between two endpoints.
It often involves a leased-line connection i.e E1 or T1.
A P2P connections involves a layer 2 transport service through the service provider network.
This type of connection is transparent to the customer and appears as if there was a direct connection between two endpoints.
### Disadvantages
1. It is not scalable
## 4. Dual-homed Topology
Spoke routers are dual-homed and redundantly
attached to two hub routers across a WAN cloud. 
It is important to note that the WAN cloud are owned by one service provider.
### Advantages
1. Redundancy
2. Load Balancing
3. Offer distributed computing/processing
4. Ability to backup service provider connections
### Disadvantages
1. It is more difficult to implement to implement because it requires complex configurations.
2. Requires additional hardware such as routers & switches
## 5. Full Mesh Topology
It suites a situation whereby sites are dispersed and highly reliable access is required.
### Disadvantages
1. All communications has to go through the hub
2. A large number of virtual interfaces need to be configured and maintained.

## 6. Partial Mesh Topology
Here there are more interconnections than required hub-and spoke arrangement, but not as many as full mesh topology.
The actual topology depends on the data flow requirements.
