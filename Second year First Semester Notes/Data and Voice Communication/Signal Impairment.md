## 1. Attenuation

This is the loss of energy of a signal during transmission.
It can happen due to conduction loss, dielectric loss or propagation loss.
It is given by
$$10\log(\frac{P_2}{P_1})$$
But $P\propto V^2$ therefore by the rules of logarithms
$$=20\log(\frac{V_2}{V_1})$$
hence measured in __decibels__.
To compensate attenuation we use an __amplifier__ to __amplify__ the signal.
Attenuation only decays the amplitude of the signal but the shape of the signal remains as before.

## 2. Distortion

Change in the shape or form of the signal.
Composite signal -> multiple frequencies -> Different Propagation Speed -> Delay in Arrival at Receiver -> Change in the Phase of the Signal -> Distortion of the Signal


## 3. Noise
Any external source that is inducing/incorporating an external sequencing to the signal
There are 4 types of signals namely:
1. __Thermal noise__: random motion of electrons in a wire(medium)
2. __Induced noise__: external noise like motors & appliances
3. __Cross-talk__: effect of one wire on another
4. __Impulse Noise__: any sharp spike in the signal

$$\text{SNR}=\frac{\text{Avg signal power}}{\text{Avg noise power}}$$
$$\text{SNR}=\frac{P_\text{signal}}{P_{\text{noise}}}$$
$$\text{SNR}_{\text{dB}}=10\log{\text{SNR}}$$