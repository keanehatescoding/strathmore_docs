This is the way radio waves travel through space from a transmitter to a receiver

## Key Considerations
1. Proper operation: required signal intensity, QoS over required Distance, Geographic are climatic region, time period.
2. Coexistence with other systems - degradation of QoS and/or service range due to potential radio interference.

## Factors Affecting Propagation
1. Frequency band - higher frequencies usually travel is a straight line and don't bounce over the ionosphere.
2. Atmospheric Conditions - weather, humidity, solar activity etc.
3. Terrain and obstacles - buildings, mountains, trees.
4. Electromagnetic interference - from man-made sources and natural phenomena

## Sky wave propagation
 This is a form of radio wave propagation whereby em waves are directed toward the sky at a specific angle and reflected/ refracted back to Earth by the ionosphere.
It can occur multiple types in the form of **mult-hop transmission** and therefore allowing very long-distance communication
### Advantages
1. Enabled massive global communication ranges without expensive physical infrastructure.
### Disadvantages
1. It is not immune to random fluctuations in signal strength due to changing atmospheric conditions and multi-path interference.
## Space Wave propagation
It is also known as **line of sight** or **tropospheric propagation** and it occurs when radio waves travel in a straight line from the transmitting antenna to the receiving antenna.
*N/B*: The **radio horizon** is slightly greater then the optical horizon because the atmosphere refracts radio waves slightly back towards earth.
The **maximum line-of-sight distance** is given by the equation
$$ d = \sqrt{2Rh_t}+\sqrt{2Rh_r}$$
where 
$d$ is the **Maximum line-of-sight**
$R$ is the **Effective radius of the earth**
$h_r$ is the **height of the transmitting antenna
$h_t$ is the height of the receiving antenna.**

### Transmission Line Impairments
| Impairment  | Meaning                 | Cause                                                | Effect on Signal       | Probable Solution                                                      |
| ----------- | ----------------------- | ---------------------------------------------------- | ---------------------- | ---------------------------------------------------------------------- |
| Attenuation | Loss of Signal Strength | Resistance, distance                                 | Signal becomes weak    | Amplifiers/ Repeaters                                                  |
| Distortion  | Change in Signal Shape  | Different frequencies travelling at different speeds | Signal becomes unclear | Use equalizers, proper bandwidth selection and limit long cable length |
| Noise       | Unwanted signals added  | External interference electronics                    | Errors in transmission | Shielding/Filtering                                                    |
## Free Space Loss
The **path loss** between a pair of antennas is the ration of the transmitted power to the received power.
It is usually expressed in **decibels (dB)**.
$$P_L = \frac{P_t}{P_r}$$
$$P_{{L}(dB)} = 10\log\frac{P_t}{P_r}$$
The **db path gain** is defined as the **negative** of the **dB path loss**
$$P_G = -P_L = 10\log \frac{P_r}{P_t}$$
The path loss depends on:
- Radio frequency
- Distance between transmitter and receiver
- Antenna characteristics ( height, location, gains)
- Nature of the terrain ( vegetation,clear,rural/urban)
- Propagation medium ( dry/moist air)

## Friis Transmission Equation
The power density of a plane wave at distance $r$ is given by
$$ P_d = \frac{P_t}{4\pi r^2}$$
If the transmitting antenna has a gain $G_t$, then;
$$P_d = \frac{P_t G_t}{4\pi r^2}$$
If the receiving antenna has an effective aperture $A_e$:
$$P_r = P_d \times A_e$$
$$P_r = \frac{P_tP_R}{4\pi r^2}\cdot A_e$$
Effective aperture of receiving antenna is given by
$$A_e = \frac{\lambda^2 G_r}{4\pi}$$
Substituting into the previous equation
$$P_r = \frac{P_t G_t}{4\pi r^2} \cdot \frac{\lambda^2 G_r}{4\pi}$$
The **Friis Transmission Equation** is therefore given by
$$ P_r = P_t G_t G_r (\frac{\lambda}{4\pi r}^2)$$ 
or using frequency:
$$ P_r = P_t G_t G_r (\frac{c}{4\pi rf})^2$$
 Path Loss
 $$L = (\frac{4\pi rf}{c})^2$$
In **decibels (dB form)**
$$ L_{dB} = 20\log F + 20\log R - 147.56$$
So
$$P_L = \frac{P_t G_t G_r}{L}$$
