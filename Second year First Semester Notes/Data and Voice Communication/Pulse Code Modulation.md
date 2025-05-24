### 1. Filtering
This removes high frequency components(noise) present in the analog signal.
The signal x(t) is passed through a LPF of cut of frequency $f_m\text{Hz}$
This low pass filter block all the frequency components above $f_m$
making the new signal bandlimited to $f_m$Hz.

### 2. Sampling
At this stage we sample the convert the analog signal to a discrete signal.
The sample and the hold circuit sample the signal at the rate $f_s$. In order to avoid __aliasing__ the sampling frequency is selected to be equal to or above the Nyquist rate.
i.e 
$$f_{s} >= 2f_{m}$$
where $f_{s}$ is given by $\frac {1}{T_s}$ and $f_m$ is the maximum frequency of the analog signal.
The output sample and hold circuit are now denoted by $x(nT_s)$. This signal is said to be discrete in time and continuous in amplitude.
Aliasing is when you take inadequate samples of the original signal so two signals with different frequencies becomes indistinguishable.

### 3. Quantization
In this stage we convert the discrete signal to a digital signal.
The number of levels $L$ should be equal to twice the number of bits used to represent the signal.
i.e $L=2^n$
A q-level quantitizer compares input $x(nT_s)$ with fixed interval digital levels. It then assigns any one of digital level to $x(nT_s)$ which results in minimal distortion/error. This error is called __quantization error__. The output quantization is a digital level $x_q(nT_s)$/

### 4. Encoding
The quantitized signal is now addressed to a binary encoder called a digitizer. This encoder converts the signal to 'v' digits binary word. 

$\text {Bitrate}=\text {sampling rate} \times \text bits$

$\text {Maximum frequency} = \frac{\text {Bitrate}}{2}$
## Advantages of PCM
1. They offer high audio quality with minimal distortion i.e compared to AM analog signals.
2. Their are more resistant to noise compared to analog signals
3. They are compatible with digital systems and storage systems allowing for easier manipulation and transmission of audio data.
## Disadvantages of PCM
1. It is much more complex compared to analog communication.
2. It requires a higher bandwidth compared to analog signals which can be a limitation in some applications.
3. When used with a limited number of quantization levels, quantization error can occur reducing pcm output quality.

## Applications of PCM
1. Digital Telephony i.e VoIP
2. Audio Recording i.e CD and WAV files
3. Video Transmission i.e encode and decode Bluray data
4. Data communication

## Error Detection and Correction 
1. __Parity bits__
2. __Checksums__
3. __Forward Error Correction

## Noise reduction techniques
1. Using error correction codes
2. Signal condition i.e amplifying and filtering the received analog signal to improve quality before demodulation
3. Adaptive Quantization - adjusting the quantization levels dynamically based on the signal characteristics to minimize quantization errors.