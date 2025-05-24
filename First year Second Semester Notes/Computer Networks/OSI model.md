This is a reference model used to describe how devices in the internet communicate.
A __reference model__ is a model that describes the functions that must be completed at a particular layer, but not specify how exactly a function should be completed.
The Open Systems Interconnection model was developed by ISO(International Organization for Standards).
It has 7 layers namely

| Number | Layer        | PDU     |
| ------ | ------------ | ------- |
| 7      | Application  | Data    |
| 6      | Presentation | Data    |
| 5      | Session      | Data    |
| 4      | Transport    | Segment |
| 3      | Network      | Packet  |
| 2      | Data Link    | Frame   |
| 1      | Physical     | Bit     |

## 7. Application Layer
This layer interacts with software applications, i.e  Brave, Firefox, Chrome.
Examples are:
1. HTTP
2. HTTPS
### Functions of Application Layer
1. Identifying communication partners
2. Synchronizing communication

## 6. Presentation Layer
The function of this layer is to __translate__ data that is in the __application format__ to a different format that to be sent over the network.
Examples:
1. Encryption

## 5. Session Layer
It manages(initiates, controls, terminates) dialogues(sessions) between communicating hosts.


As network engineers we usually don't work with these top 3 layers and these layers are usually left for application developers to connect their applications over networks.
It is also important to note data is prepared by the top 3 layers.

## 2. Transport Layer
It segments and reassembles segments for communication between end devices/process.
Using segmentation it provides __host to host/end to end__ communication or __process to process/inter-process__ communication for application.
The transport layer adds a layer 4 header to the data and this is new blob of data is called a __segment__.
If the data is long then the data may be subdivided and a layer 4 header is appended to each data unit, this is what we called __segmentation__.
## 3. Network Layer
Provide connectivity between end hosts/applications on different networks i.e outside of the LAN.
Provide logical addressing(IP addressing).
Provide path selection between source and destination.
Routers operate at this layer.
At this layer, a layer 3 header is appended to the segment and the new blob of data is called a __packet__.

## 4. Data-Link Layer
This layer provides node-to-node connectivity and data transfer i.e PC to Switch, Switch to Switch etc.
Defines how data is formatted for transmission over physical medium i.e copper UTP cables.
It also detects and corrects Physical Layer errors.
Switches operate at this layer.
At this layer, the data-link layer appends a layer 2 header next to layer 3 header and a layer 2 trailer at the end of the body and thus this new blob of data becomes a __frame__.

## 1. Physical Layer
Defines the physical characteristics(voltage level, maximum transmission distance, physical connectors, cable specifications) of the medium used to transfer data between devices.
Digital bits are converted into electrical pulses for wired connection while radio signals for wireless communication
THE PDU for this layer is known as a bit.
