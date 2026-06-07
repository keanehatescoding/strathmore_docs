A satellite has 3 main components
1. Transponder

The functions of the transponder is to
1. Change frequency
2. Remove noise
3. Amplify the signal power
A satellite can have 20 or more transponders.
**Fixed satellite service** - telephone networks, television signals distributed over cable systems. **Broadcasting satellite service** -  Direct broadcast to home is a subscription-based direct broadcast satellite (DBS) or direct-to-home satellite television and radio service.
**Mobile satellite service** - Land mobile, maritime mobile or acronautical mobile
**Navigation satellite service** - GPS
**Meteorological satellite service** - they are often used to perform search & rescue.
## Advantages
1. Reliable during disasters
2. Useful in remote areas
3. It supports long distance communication
4. Independent of terrestrial infrastructure.
5. Supports broadcasting( analog television)
6. It provides distance insensitive cost
7. It has a wide coverage area
## Disadvantages
1. High initial cost
2. Regulatory aspect/ licensing
3. Rain attenuation
4. Complex technology
5. Large propagation delay (high latency & jitter)
6. Spectrum crowding - satellite bandwidth
## Applications
1. Television broadcasting - analog tv
2. Internet services - broadband internet & remote area connectivity - starlink
3. Navigation - GPS system
4. Weather forecasting - monitoring storms and climate
5. Military applications - secure communication & surveillance
6. Disaster management - emergency communication during disasters

**Geostationary orbit** - at this height a stationary appears to be stationary over any point on the equator.
They are placed at 35,786 km from the earth's surface.
They are the ideal choice for television broadcasting.
It is crowded by satellite and managed by the <abbr title="International Telecommunicatons Unit">ITU</abbr>. 
It also has some navigational satellites.
3 GEO satellites are enough to cover the entire earth.
### Challenges of GEO
1. High delay signal causing voice echo, slow internet and video call delay.
2. High launch cost due to expensive rockets & satellite equipment
3. Large path loss causing weak signals over long distances.
4. Rain attenuation causing fading signals during thunderstorms.
5. Limited orbital slots leading to congestion & interference.
6. Difficult maintainability because satellite are far from the earth.
7. High power requirements which in turn increase operational costs.
8. Space debris risks that may damage satellites.
9. Poor polar coverage with weak signals near the poles.
10. Limited lifespan due to fuel & battery depletion
11. Complex station keeping requiring constant orbital correction.
**Low Earth Orbital(LEO) Satellites** - are placed between 160 and 2000km from the earth's surface.
The orbital period is around 5-15 minutes.
66 satellites are needed for continuous communication.
**Medium Eerth Oribital(MEO) satellites** 
It occurs at an altitude between 2000 km and 
GPS satellites are positioned here.
The orbital period is 12 hours.
We need about 24 MEO satellites to cover the entire earth.
It is mainly used by GPS satellites.
**High Earth Orbit(HEO)** - is used to provide coverage to high altitude ares not reachable by GEOs and those that require **longer contact periods** than available with LEO.
They are at an altitude approximately 40,000 km from the earth.
They are visible for 2-12 hrs.

## Link Budget Analysis
**Equivalent Isotropic Radiated Power(EIRP)** is the power that a theoretical isotropic antenna would emit to produce peak power density observed in the direction of maximum antenna gain.
The product of the gain $G_{t}$ and power $P_t$ of the transmitting antenna is called the **effective isotropic radiated power(EIRP)**.
$EIRP= P_{TX}G_{TX}$

The **flux density** crossing the spherical surface with distance $R$ taken as the radius
$$F=\frac{P_{T}}{4\pi R^2}W/m^2$$
Because the transmitting antenna would have a gain $G_T$ in the receiver $R_X$ direction, the flux density at the receiver is 
$$F=\frac{P_{T}G_{T}}{4\pi R^2}W/m^2$$
An effective aperture area $A_t$ is a measure of the effective absorption area an antenna present to an incident plane wave.}
$$P_{T}= FA_{e}=\frac{P_{T}G_{T}}{4\pi R^{2}}A_{e}\space\space W$$
But the effective aperture $A_e$ is 
$$A_{e}=\frac{\lambda^{2}}{4\pi}G_{r}\space\space W$$
The ratio of received power to the transmitted power can be written as
$$\frac{P_r}{P_T}=G_rG_T(\frac{\lambda}{4\pi R})^2$$
The power attenuation $a_p$ is this value expressed in $dB$
$$a_{p}=10\log(\frac{P_r}{P_T})=G_{r}+G_{T}+20[\log\lambda-\log R]-21.984$$
The squared component in the above equation is called the inverse of **freespace loss**, $L_{fs}$
$$L_{fs}=(\frac{4\pi R}{\lambda})^2$$
The received power $P_r$ is commonly referred to as the carrier power, C.

Alternatively we write the recieved power as
$$P_{r}=EIRP+G_{r}-L_{fs}\space \space dB$$
Factoring in the losses we get
$$P_{r}= EIRP +G_r-L_{p}\space\space dB$$
### Losses
1. Free space transmission
2. Antenna misalignment losses (AML)
3. Feeder losses(RFL)
4. Fixed atmospheric(AA) and ionospheric losses(PL)

### Link Equation
The power of the receiver that is the output can be considered as a simple calculation of EIRP - losses
$$Losses = [FSL]+[RFL]+[AML]+[AA]+[PL]\space\space dB$$
The received power $P$ 
$$P_r = EIRP+G_{r}-\text{Losses}\space\space dB$$

### Noise
The available noise power from a thermal noise source is given by:
$$P_{N}=kT_{N}B_{N}$$
Where $T_N$ is the equivalent noise temperature($K$)
$B_N$ is the equivalent noise bandwidth $Hz$
$k$ is **Boltzmann's constant** = $1.38\times10^{-23}$ 
For thermal noise noise power per unit bandwidth $N_o$ is constant (noise energy) and given as
$N_{o}= \frac{P_N}{B_N}=kT_N$ Joules
When the antenna beamwidth is broad enough that
different parts of the antenna pattern see different
background temperatures, the temperature now is
called as **effective noise temperature**, $T_e$ seen by the antenna.
System noise temperature
$$T_{s}= T_{in}+T_{e}$$
where $T_s$ is the system temperature, $T_{in}$ is the noise temperature of the antenna and cable and $T_{e}$ is the effective noise temperature.
If given noise in term of noise figure to find noise temperature 
$$F=1+\frac{T_e}{T_o}$$
$$T_e=T_o({F-1})$$
where $F$ is the noise figure and $T_o$ is the ambient temperature.
### Gain to Noise Ratio
The gain to noise ration is a key parameter in specifying the system performance
$$\frac{G}{T}=[G_R]-[T_{s}]\space\space dB/K^{-1}$$
$$GT(dB)=10\log(\frac{G_{R}}{T_{s}})\space\space dB/K$$
The $SNR$ at the input to the receiver can be calculated as
$$\frac{S_{i}}{N_{i}}=\frac{G_{r}P_{T}}{kTB}[\frac{\lambda}{4\pi R}]^{2}=\frac{G_{R}P_{T}}{kB}[\frac{\lambda}{4\pi R}]^{2}(\frac{G_{r}}{T_{s}})$$
Where the $SNR$ is proportional to the $G/T$ of the receive antenna. Only $G_r/T_s$  is controllable at the receiver and others are fixed by the transmitter design and location.
$G/T$ can be maximized by increasing the gain of the antenna -> usually minimizing the reception of noise from hot sources at low elevation angles -> but higher gain requires larger and more expensive antenna, and high gain may not be desirable for application of omnidirectional coverage.

$$SNR(dB)=P_{T}+G_{T}-L+G_{R}-(kTB-nf)$$

$$SNR(dB)=P_{T}-N_o$$ 
### Carrier to Noise Ratio
This is a measure of the performance of a satellite link in the ratio of carrier power to noise power at the receiving input.
Conventionally, the ratio is denoted as $C/N$ of $(CNR)$ which is equivalent to
$$\frac{C}{N}= EIRP+G_{r}-\text{Losses}-k-T_{s}-B_{N}\space\space dB$$
since $P_{N}=kT_{N}B_{N}$ then
$$\frac{C}{N}=\frac{C}{N_{o}B_{N}}=\frac{C}{N_{o}}-B_{N}$$
$$\frac{C}{N_{o}}=\frac{C}{N}+B_{N}$$
$$\frac{C}{N_{o}}=EIRP+\frac{G}{T}-\text{Losses}-k\space\space dBHz$$

### The Uplink

$$[\frac{C}{N_{o}}]_{U}=[EIRP]_{U} +[\frac{G}{T}]_{U}-[\text{Losses}]_{U}-k\space\space dBHz$$

### The Downlink

$$[\frac{C}{N_{o}}]_{D}=[EIRP]_{D} +[\frac{G}{T}]_{D}-[\text{Losses}]_{D}-k\space\space dBHz$$

### Overall Link Budget
The combined noise power is equivalent to the noise power of the uplink + noise power of the downlink
$$[\frac{C}{N}]_{C}=\frac{1}{(\frac{C}{N})_{U}^{-1}+(\frac{C}{N})^{-1}_{D}}$$
