This is the process of converting binary data into a digital signal.

## Important Characteristics of Line Coding
1. Signal Level and Data Level
2. Pulse rate and bit rate
3. DC Component
4. Self synchronization

### Signal Level and Data Level
Number of __signal levels__ is the number of voltage levels allowed to represent data while the number of __data levels__ is the number of values allowed to represent data. 

### Pulse rate and Bit rate
__Pulse rate__ is the number of pulses per second while a pulse is the minimum amount of time required to transmit a symbol.
__Bit rate__ is the number of bits per second.
$$\text{Bitrate}=\text{Pulse rate}\times\log_{2}{L}=\text{Pulse rate}\times m$$
where $L=2^m$ and $m$ is the number of bits per sample.

### DC Component
Over a period of a waveform, if all the positive voltages are cancelled by negative voltages then DC Component of the waveform is zero.
In line coding, if the dc component of the signal is non zero it treated as distorted one and it can create errors in received signal.
The signals with a DC component cannot pass through a transformer hence the signals with a zero DC Component are preferred.

### Self Synchronization
If the senders bit intervals corresponds exactly to the receivers bit interval only then it is possible to receive a signal correctly.
If the clock frequency of the transmitter and receiver are different then data of the transmitter and receiver will be different.
Therefore to match data, clock frequency should be the same and synchronized.


Line encoding techniques:
1. Uni-polar non-return to zero
2. Polar non-return to zero
3. Bipolar non-return to zero
4. Uni-polar return to zero
5. Polar return to zero
6. Bipolar return to zero
7. Polar Manchester
### 1.Uni-polar Manchester

## Purpose
1. Spectral shaping
2. Synchronization considerations
3. Bandwidth considerations
4. 