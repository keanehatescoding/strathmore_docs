## The Ethernet Protocol
An ethernet looks like this:
1. Preamble - is used for sequencing and timing.
2. Start Frame Delimeter
3. Destination mac Address
4. Source mac Address
5. Ether type - describes what is in the payload
6. Payload
7. Frame Check sequence - this is used to confirm whether the frame had an error during transmission and/or reception.

## Ether type
They are various types of payloads. The ether type is used to describe what is inside the payload of a frame i.e for an ARP payload the ether type is 0806.
### Frame Check Sequence
Before a frame is transmitted the sender calculates a number called a frame check sequence based on the type of data that is being send. It is then appended to the end of the frame. After transmission the recipient calculates this FCS based on the received frame. If it does not match the FCS then the frame is discarded.
The size of Ethernet frames is normally limited to a maximum of 1518 bytes and a minimum of 64 bytes.
