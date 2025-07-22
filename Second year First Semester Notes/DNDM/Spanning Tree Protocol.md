Defined in __802.1D__
Switches on all routers run STP by default.
This protocol is used to prevent __broadcast storms__ in networks with more than 1 switch.
A broadcast storm is a situation where a broadcast frame is infinitely send over two or more switches because frames lack a TTL.
Root bridge is the switch with the __lowest bridge id__.
Bridge id is a field concatenated from a bridge priority + mac address of a switch.
The default bridge priority for all switches is 32768.
At the beginning all the switches believe they are the root bridge, we compare first the bridge priorities between the switches, if all are the same then the switch with the lowest mac address is elected the root bridge.
All these is communicated via <b><abbr title="Bridge Protocol Data Unit">BPDU</abbr></b> frames.
Once a root bridge is elected the following happens:
All ports on the root bridge are automatically made designated ports.
Each remaining switch will select one of it's ports to be a root port(forwarding state).
Factors to consider when choosing a root port:
1. Lowest root cost
2. Lowest neighbor bridge id
3. Lowest neighbor port id

Each remaining collision domain will select ONE interface to be a __designated port__(forwarding state), the other port in the same collision domain will be __non-designated port__(blocking state).
Factors to consider when choosing a root port:
1. Interface on the switch with the lowest root cost.
2. Interface on the switch with the lowest bridge id.
Ports that are connect to across root port are automatically designated ports.
Blocked ports are ports which cannot forward traffic and only send and receive <abbr title="Border Protocol Data Unit">BPDU</abbr> traffic.
STP enabled switches send and receive <abbr title="Border Protocol Data Unit">BPDU</abbr> traffic from all interfaces every 2 seconds by default.
If a switch receives a <abbr title="Border Protocol Data Unit">BPDU</abbr> in an interface it knows that interface is connected to a switch since only switches send <abbr title="Border Protocol Data Unit">BPDU</abbr> traffic.
Process:
3. Electing the root bridge
4. Define root ports
5. Select designated ports
6. Determine alternate (blocked ports)

| Speed   | Cost |
| ------- | ---- |
| 10gb/s  | 2    |
| 1gb/s   | 4    |
| 100mb/s | 19   |
| 10mb/s  | 100  |
| 4mb/s   | 250  |

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

| STP Port State | Stable/Transitional |
| -------------- | ------------------- |
| Forwarding     | Stable              |
| Blocking       | Stable              |
| Listening      | Tranistional        |
| Learning       | Transitional        |
| Disabled       | Stable              |
By disabled we mean the port is completely shutdown

Interfaces in a blocking state:
1. Receive STP <abbr title="Bridge Protocal Data Unit">BPDU</abbr> frames
2. Do not update the cam table i.e learn mac addresses.
3. Do not forward STP <abbr title="Bridge Protocal Data Unit">BPDU</abbr> frames.
4. Does not learn mac adderess from regular traffic that reaches the interface.
5. Do not forward regular traffic.

When a port in blocking state switches to listening state by default it remains in listening state __15 secs__. This is determined by the __forward delay__ timer.
Interfaces in the listening state:
1. Can receive STP <abbr title="Bridge Protocal Data Unit">BPDU</abbr> frames.
2. Can Forward STP <abbr title="Bridge Protocal Data Unit">BPDU</abbr> frames.
3. Does not learn mac address from regular traffic that reaches the interface.
4. Do not forward regular traffic.
5. Do not receive regular frames.

The learning state is __15 secs__ by default. This is known as the default __forward delay__ timer but may be changed.
Interfaces in the learning state:
1. Receive STP <abbr title="Bridge Protocol Data Unit">BPDU</abbr> frames.
2. Forward STP <abbr title="Bridge Protocol Data Unit">BPDU</abbr> frames.
3. Learn mac addresses from regular traffic that reaches the interface.
4. Do not forward regular traffic.
5. Do not receive regular traffic. 

After a port has moved from the listening and learning state it goes to this stable state. By default this takes 30 seconds but it may be changed.
Interfaces in the forwarding state:
1. Send and receive STP <abbr title="Bridge Protocol Data Unit">BPDU</abbr> frames.
2. Send and receive normal traffic.
3. Learns mac addresses.

| STP Port State | Send/Receive BPDU | Foward regular traffic | Mac Address learning | Stable/Transitional |
| -------------- | ----------------- | ---------------------- | -------------------- | ------------------- |
| Blocking       | No/Yes            | No                     | NO                   | Stable              |
| Listening      | Yes/Yes           | No                     | No                   | Transitional        |
| Learning       | Yes/Yes           | No                     | Yes                  | Transitional        |
| Forwarding     | Yes/Yes           | Yes                    | Yes                  | Stable              |
| Disabled       | No/No             | No                     | No                   | Stable              |

| STP Timer     | Purpose                                                                                                                                                          | Duration |
| ------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------- |
| Hello         | How often the root bridge sends BPDU frames                                                                                                                      | 2s       |
| Forward delay | How long a port will remain in listening state or learning state before going becoming a forwarding port                                                         | 15s      |
| Max age       | How long an interface will wait to change the STP topology after ceasing to receive a Hello BPDU frames. Timer is reset every time the interface receives a BPDU | 20s      |
## Portfast

Whenever you connect a switch to any device even an end device it takes 30 seconds for it to start forwarding frames. This is because the interface is blocked by default and needs to move blocked->listening->learning to finally forwarding state. To circumnavigate this slow side effect we have a feature known as __portfast__.
Portfast changes the state of an interface directly from blocking to forwarding.
NB: It should be noted that using plain portfast comes with a risk and may cause a broadcast storm.

## BPDU Guard
Since using plain portfast comes at a risk <abbr title ="Bridge Protocol Data Unit">BPDU</abbr> Guard was created.
If an interface with <abbr title ="Bridge Protocol Data Unit">BPDU</abbr> Guard receives a Hello <abbr title ="Bridge Protocol Data Unit">BPDU</abbr> frame another switch, the interface will be shutdown to prevent a loop from forming.
If a port receives a <abbr title ="Bridge Protocol Data Unit">BPDU</abbr> frame while it has <abbr title="Bridge Protocol Data Unit">BPDU</abbr> Guard enabled them it is changed to error-disabled state. To enable it again you need to shut it down first then no shutdown it.

In addition to <abbr title="Bridge Protocol Data Unit">BPDU</abbr> Guard we also have root guard and loop guard. If a switch's interface is __root guard__ enabled then if it receives a frame with the superior <abbr title="Bridge Protocol Data Unit">BPDU</abbr> on that interface, the switch will not accept the new switch as the root switch.
Additionally, if a Loop guard, If an interface is __loop guard__ enabled then if it stops receiving <abbr title="Bridge Protocol Data Unit">BPDU</abbr> then it will not start forwarding them. The interface is disabled.
If an interface is __loop guard__ enabled then if it stops receiving <abbr title="Border Protocol Data Unit">BPDU</abbr> then it will not start forwarding them. The interface is disabled.