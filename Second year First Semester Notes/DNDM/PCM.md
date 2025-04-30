Is used when we want to convert analog data to digital data
First, we convert the analog signal to a discrete signal through sampling.
Next, we use the quantization to convert the discrete signal to a digital signal.
Finally we encode the digital signal.

## Stages
1. Low Pass Filter
2. Sampler
3. Quantitizer
4. Encoder
5. Regenerative Repeater
6. Decoder
7. Reconstruction function
8. Destination

### 1. Low Pass Filter
The signal x(t) is passed through a LPF of cut of freqency $f_m\text{Hz}$
This low pass filter block all the frequency components above $f_m$
This means the new signal is bandlimited to $f_m$Hz.

### 2. Sampling
The sample and the hold circuit sample the signal at the rate $f_s$. In order to avoid __aliasing__ the sampling frequency is selected to be above the Nyquist rate.
i.e 
$$f_{s} >= 2f_{m}$$
The output sample and hold circuit are now denoted by $x(nT_s)$. This signal is said to be discrete in time and continuous in amplitude.


### 3. Quantization
A q-level quantitizer compares input $x(nT_s)$ with fixed interval digital levles. It then assigns any one of digital level to $x(nT_s)$ which results in minimal distortion/error. This error is called __quantization error__. The output quantization is a digital level $x_q(nT_s)$/

### 4. Encoding
The quantitized signal is now addressed to a binary encoder called a digitizer. This encoder converts the signal to 'v' digits binary word. 