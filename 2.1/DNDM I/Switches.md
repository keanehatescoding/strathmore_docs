They can be categorised into two:
1. Modular Switches
2. Fixed Configuration Switches
## 1. Modular Switches
Allow you to add and remove expansion modules depending on your traffic.

## 2. Fixed Configuration Switches
These are switches with a fixed number of ports and are typically not expandable.
They are further broken down into 
1. Unmanaged switches (basically plug and play switches)
2. Smart switches- the general rule is these switches offer some management, Qos and security but are lighter than managed switches
3. Managed switches - offer the most functionality but require a lot of management.

### 1. Unmanaged switches

### 2. Smart switches
### 3. Managed Switches
Difference between a cluster switch and stackable switch.
#### Features
1. Higher security - Dos protection
2. IGMP and MLD Snooping
3. IPv4 DHCP Snooping

## Consideration when selecting a switch
1. Network switch speed
2. Number of ports
3. PoE vs Non-PoE
4. Stackability vs standalone switches

Switches can also be categorised according to their  frame forwarding methods i.e
1. Store and forward switching
2. Cut-through switching

## 1. Store and Forward Switching
The switch waits until it receives an entire frame and then calculates it's CRC to determine if the frame had an error during transmission. If it had an error then it drops the frame otherwise it forwards the frame.
## 2. Cut-through Switching
This frame forwarding method forwards the frame before it is entirely received. At a minimum, the destination address of the frame must be read before the frame can be forwarded.
There are 2 variants of cut-through switching:
1. Fast-forward switching
2. Fragment-free switching

### 1. Fast-forward switching
 Fast-forward switching offers the lowest level of latency. Fast-forward switching immediately forwards a packet after reading the destination address.
### 2. Fragment-free switching
In fragment-free switching, the switch stores the first 64 bytes of the frame before forwarding. Fragment-free switching can be viewed as a compromise between store-and-forward switching and fast-forward switching. The reason fragment-free switching stores only the first 64 bytes of the frame is that most network errors and collisions occur during the first 64 bytes. Fragment-free switching tries to enhance fast-forward switching by performing a small error check on the first 64 bytes of the frame to ensure that a collision has not occurred before forwarding the frame. 

It may also be classified according to memory buffering technique used namely:
1. Port-based memory
2. Shared memory

## 1. Port-based memory
Frames are stored in specific queues which are linked to specific incoming and outgoing ports
A frame is transmitted to the outgoing port when all the frames ahead in the queue have been successfully transmitted.
It is possible for a single frame to delay the transmission of all the frames because of a busy destination port.

## 2. Shared memory
Stores all frames into a common memory buffer shared by all switch ports and amount of buffer memory required by a port is dynamically allocated.
The frames in the buffer are dynamically linked into the destination port enabling a packet to be received on one port and then transmitted on another, without moving it to a different queue.

Cisco switches come in:
1. 2900 Series