This is a type of signal modulation whereby only the __amplitude carrier signal__ is varied to represent the data being added to the signals whereas the phase and the frequency remain constant.
The function of the carrier signal is given by:
$$s_c(t)=\space A_{c}\cos\omega_{c}t=\space A_{c}\cos 2\pi f_{c}t$$
While the function of the message signal is given by:
$$s_m=\space A_{m}\cos\omega_{m}t=\space A_{m}\cos 2\pi f_{m}t$$
The resultant Amplitude Modulated signal is given by:
$$C_m(t)=(A_c+s_m)\cos\omega_{c}t=(A_c+A_{m}\cos\omega_{m}t)\cos\omega_{c}t$$
therefore
$C_m(t)=A_{c}\cos\omega_{c}t + A_{m}\cos\omega_{m}t\cos\omega_{c}t$
Factoring by $A_c$ we get:
$$C_{m}(t)=A_c(1+\frac{A_m}{A_c}\cos\omega_{m}t)\cos\omega_{c}t=A_c(1+{\micro}\cos\omega_{m}t)\cos\omega_{c}t$$
where $\micro=\frac{A_m}{A_c}$ and is known as the __modulation index__.
When $\cos\omega_m(𝑡)$ is maximum, it will be $+1$ and when it is minimum it will be $-1$. Consequently by
denoting the maximum value and minimum value of $𝑋_{𝐴𝑀}(𝑡)$ by $𝑉_\text{max}$ and $𝑉_\text{min}$ respectively, we can
write
$𝑉_{\text{𝑚𝑎𝑥}} = (𝐴_𝑐 + 𝜇)\cos\omega_c(𝑡)$
$𝑉_\text{𝑚𝑖𝑛} = (𝐴_𝑐 − 𝜇)\cos \omega_𝑐(𝑡)$
Dividing these two quantities at the peak of the carrier, i.e when $\cos w(t) = 1$ we obtain the
expression
$𝜇 = \frac{𝐴_\text{𝑚𝑎𝑥} + 𝐴_\text{𝑚𝑖𝑛}}{𝐴_\text{𝑚𝑎𝑥} − 𝐴_\text{𝑚𝑖𝑛}}$
Thus it is possible to determine modulation index from the frequency measurements. Further more
from the figure:
$𝐴_𝑐 = \frac{𝐴_\text{𝑚𝑎𝑥} + 𝐴_\text{𝑚𝑖𝑛}}{2}$ and  $A_m=\frac{A_\text{max}-A_\text{min}}{2}$
When $\frac{A_m}{A_c}\lt1$ then our signal is said to be __under-modulated__ and we get reliable information but we might not fully utilize the available power leading to lower audio quality.
When $\frac{A_m}{A_c}=1$ then $m=1$ then __critical/exact modulation__ takes place but this never really happens.
When $\frac{A_m}{A_c}>1$ then $m>1$ then signal __over-modulation__ takes place and the modulated signal is said to be distorted.
The modulation index is can also be given by $m= \frac {E_m}{E_c}$ where $E$ is the voltage/electromotive force of the signal recorded by an oscilloscope.
From the above diagram we can deduce
![[Pasted image 20250516210524.png]]
$E_{m}= \frac{E_{\text max}-E_{\text min}}{2}$
Likewise $E_{c}= E_{\text max}-E_m$
Rewriting $E_c$ in terms of $E_{\text max}$ and $E_{\text min}$
then $E_{c}= E_{max}-\frac {E_{\text max}-E_{\text min}}{2}$ 
$E_{c}= \frac {E_{\text max} - E_{\text min}}{2}$ 
therefore 
Modulation index is given by:
$$m = \frac {E_m}{E_C}=\frac{V_{\text max}-V_{\text min}}{V_{\text max}+V_{\text min}}$$
__Bandwidth__ is given by $(f_{c}+ f_{m)}-(f_{c}-f_{m})$ which gives us 2$f_m$ where $f_m$ is the frequency of the modulating signal.

Using the trigonometric expansion of $\cos\alpha\cos\beta$ or the double angle formula we get:
$$C_m(t)=A_c\cos\omega_{c}t+\frac{A_{m}}{2}[\cos(\omega_{c}t+\omega_{m}t)+\cos(\omega_{c}t-\omega_{m}t)]$$
## Power
The power of the carrier is given by:
$P_{c}= (\frac{A_{c}}{\sqrt 2})^2=\frac{{A_c}^2}{2}$
The power of the modulating signal is given by:
$P_{m}= (\frac {A_m}{2\sqrt 2})^2=\frac{{A_c}^2}{4}$
Therefore the total power $P_T=P_m+P_c$ which is given by
$P_{T}= \frac {{A_c}^2}{2}+\frac{{A_m}^2}{4}=$
__Transmission Efficiency__ is the ratio of the transmitted power which contains information to the total transmitted power and is given by:
$$\eta = \frac {\mu^2}{2+\mu^{2}}*100\%$$

## Advantages
1. A few components are required to make an AM signal demodulater.
2. It is a cheaper way of modulation.
3. AM radio waves can be transmitted over very long distances at night because they are reflected by the ionosphere.
4. It is easier/more straightforward to implement AM modulation.

## Disadvantages
1. It is less power efficient i.e compared to FM modulation as when $\micro = 1$ the efficiency is $\frac{1}{3}$
2. It has high signal attenuation due to noise interference which is highly noticeable.
3. There is a requirement that for very high bandwidth is equal to the highest frequency.