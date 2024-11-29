## The Ethernet Protocol
An ethernet looks like this:
1. Preamble - is used for sequencing and timing.
2. Start Frame Delimeter
3. Destination M.A.C Address
4. Source mac Address
5. Length of the frame
6. Data
7. Frame Check sequence - this is used to confirm whether the frame had an error during transmission and/or reception.
### Frame Check Sequence
Before a frame is transmitted the sender calculates a number called a frame check sequence based on the type of data that is being send. It is then appended to the end of the frame. After transmission the recipient calculates this FCS based on the received frame. If it does not match the FCS then the frame is discarded.
The size of Ethernet frames is normally limited to a maximum of 1518 bytes and a minimum of 64 bytes.