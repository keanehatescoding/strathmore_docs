Defined in 802.1D
This protocol is used to prevent __broadcast storms__ in networks with more than 1 switch.
A broadcast storm is a situation where a broadcast is infinitely send over two or more switches.
Root bridge is the switch with the __lowest bridge id__.
The default bridge priority is 32768.
If we are in a broadcast domain with similar switches then we use the mac address to find the switch with the mac address that is the lowest number since they are likely to have the same default bridge priority.
At the beginning all the switches believe they are the root bridge, using the mac address we find the switch which is the root bridge.
To get the root bridge switches uses <b><abbr title="Border Protocol Data Unit">BPDU</abbr></b>.
Designated ports are ports that forward from the root bridge.
Every port that is connected to the root bridge or an end device is a designated port.

Process:
1. Electing the root bridge
2. Define root ports
3. Select designated ports
4. Determine alternate (block ports)

| Speed   | Cost |
| ------- | ---- |
| 10gb/s  | 2    |
| 1gb/s   | 4    |
| 100mb/s | 19   |
| 10mb/s  | 100  |

An updated version is:

| Speed   | Cost |
| ------- | ---- |
| 1tb/s   |      |
| 100gb/s |      |
| 10gb/s  |      |
| 1gb/s   |      |
| 100mb/s |      |
| 10mb/s  |      |

### Port states
1. Disabled
2. Blocking
3. Listening
4. Learning
5. Forwarding