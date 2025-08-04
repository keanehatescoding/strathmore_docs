PCM consists of 4 main stages namely:
1. Filtering
2. Sampling
3. Quantization
4. Encoding
### 1. Filtering
This removes high frequency components(noise) present in the analog signal.
The signal x(t) is passed through a <abbr title="Low Pass Filter">LPF</abbr> of cut of frequency $f_m\text{Hz}$
This low pass filter block all the frequency components above $f_mHz$ making the new signal band-limited to $f_m$Hz.
Band limits are:
1. Voice - 4 kHz
2. Video - 5 MHz
### 2. Sampling
At this stage we sample the convert the band-limited analog signal to a time-discrete signal.
The analog is sampled after every $T_s$ interval.
Therefore, sample and the hold circuit sample the signal at the rate $f_s$ where $f_s=\frac{1}{T_s}$. In order to avoid [[Glossary|aliasing]] the sampling frequency is selected to be equal to or above the [[Nyquist-Shanon Sampling Theoerem||Nyquist rate]] i.e
$$f_{s} \geq 2f_{m}$$
where $f_{s}$ is given by $\frac {1}{T_s}$ and $f_m$ is the __maximum__ frequency of the analog signal.
The output sample and hold circuit are now denoted by $x(nT_s)$. This signal is said to be discrete in time and continuous in amplitude.
The sampling rate are as follows:
1. Telephony - 8 kHz
2. <abbr title="Voice overIP">VoIP</abbr> - 16 kHz
3. Audio CD/MP# - 44 kHz
4. Blu-ray Disc - ~1 MHz
Sampling can be done using [[Sampling|these 3]] techniques.
### 3. Quantizing
In this stage we convert the time-discrete signal to a digital signal.
The number of quantization levels $L$ should is twice the number of bits used to represent the signal i.e $L=2^n$.
A q-level quantitizer compares input $x(nT_s)$ with fixed interval digital levels. It then assigns any one of digital level to $x(nT_s)$ which results in minimal distortion or __quantization error__.
$\Delta = \frac{X_{\text {max}}- X_{\text{min}}}{L}$
The difference between the sampled output$(x)$ and quantized output$(x_q)$ is the quantization distortion i.e
$e_{q}=x_{q}-x$.
The sign of the error is does not matter we just want to focus if there is an error.
The quantization error can be decreased by increasing the quantization levels which corresponds to increasing the number of bits per sample.
However, increasing the number of bits increasing the signaling rate and therefore we need a larger transmission bandwidth.
Voltage difference between the samples = $\frac{\Delta V}{L}$.
There are 2 types of quantization namely:
1. Linear quantization
2. Non-linear quantization
### 4. Encoding
The quantitized signal is now addressed to a binary encoder called a __digitizer__. This encoder converts the signal to '_v_' digits binary word. 

In addition to these there is also an oscillator which generates the clocks for sample and hold circuit and parallel to serial converter.
In <abbr title="Pulse Code Modulation">PCM</abbr>, the quantitizer and encoder form an analog to digital converter (ADC).
The most important feature of <abbr title="Pulse Code Modulation">PCM</abbr> is it's ability to control the effects of distortion and noise when the <abbr title="Pulse Code Modulation">PCM</abbr> wave travels across the channel. This is done through a __chain of regenerative repeaters__ spaced closely to each other.
Functions of repeaters:
1. Quantization
2. Timing
3. Decision making
Hence, each repeaters actually reproduces the clean and noise free <abbr title="Pulse Code Modulation">PCM</abbr> signal. This improves the performance of <abbr title="Pulse Code Modulation">PCM</abbr> in presence of noise.

The are two main standards with <abbr title="Pulse Code Modulation">PCM</abbr> namely:
1. The European Standards
2. The American Standards
They slightly differ in details but working will remain the same.
### Bitrate and Bandwidth

$\text {Bitrate}=\text {sampling rate}(f_s) \times \text {bits per sample}(n)= f_{s}\times n$

Bandwidth is depending on the type of encoding used.
$f_{\text{max}} = \frac{\text {Bitrate}}{2}$
## Advantages of <abbr title="Pulse Code Modulation">PCM</abbr>
1. Multiplexing of various <abbr title="Pulse Code Modulation">PCM</abbr> signals is possible.
2. They offer high audio quality with minimal distortion i.e compared to AM analog signals.
3. Their are more resistant to noise compared to analog signals/good performance over transmission path since digital communication offers error detection and correction.
4. They are compatible with digital systems and storage systems allowing for easier manipulation and transmission of audio data.
5. Uniform transmission quality
## Disadvantages of <abbr title="Pulse Code Modulation">PCM</abbr>
2. It requires a higher bandwidth compared to analog signals which can be a limitation in some applications.
3. It is much more complex compared to analog communication.
4. When used with a limited number of quantization levels, quantization error can occur reducing pcm output quality.

## Applications of <abbr title="Pulse Code Modulation">PCM</abbr>
1. Digital Telephony i.e VoIP.
2. Audio Recording i.e <abbr title="Compact Disk">CD</abbr> and .wav files
3. Video Transmission i.e encode and decode blu-ray data

## Error Detection and Correction 
1. __Parity bits__
2. __Checksums__
3. __Forward Error Correction

## Noise reduction techniques
1. Using error correction codes
2. Signal condition i.e amplifying and filtering the received analog signal to improve quality before demodulation
3. Adaptive Quantization - adjusting the quantization levels dynamically based on the signal characteristics to minimize quantization errors.
A difference between <abbr title="Pulse Code Modulation">PCM</abbr> and <abbr title="Pulse Amplitude Modulation">PAM</abbr>, <abbr title="Pulse Wavelength Modulation">PWM</abbr> or <abbr title="Pulse Phase Modulation">PPM</abbr> is that these are analog pulse modulation systems while <abbr title="Pulse Code Modulation">PCM</abbr> is a digital pulse modulation system.
<abbr title="Pulse Code Modulation">PCM</abbr> is not modulation in the conventional sense i.e the carrier is varied in proportion to the modulating signal. Nothing of that kind happens in <abbr title="Pulse Code Modulation">PCM</abbr>.