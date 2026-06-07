Any periodic function with a period $2\pi$ can be expressed as a sum of $\sin$ and $\cos$ 
$$f(x) = \frac{a_0}{2}+\sum\limits_{n=1}^{\infty}{a_{n}\cos(nx)+b_n\cos(nx)}$$
Fourier Coefficients
$$a_{0}=\frac{1}{\pi}\int_{-\pi}^{\pi}f(x)dx$$
$$a_{n}= \frac{1}{\pi}\int_{-\pi}^{\pi}f(x)\cos(nx)dx$$
$$b_n=\frac{1}{\pi}\int_{-\pi}^{\pi}f(x)\sin(nx)dx$$
When a function is defined from $0\le x\le L$ it is called __half range__. But when it is defined on $-L\le x\le L$ it is called **full range**.
Cosine series = 
$$f(x)= \frac{a_o}{2}+\sum\limits_{n=1}^{\infty}a_n\cos(\frac{n\times \pi}{L})$$
Sine series = 
$$f(x)= \sum\limits_{n=1}^{\infty}b_n\sin(\frac{n\times \pi}{L})$$
## Applications
1. Signal processing and communications
2. Heat conduction
3. Vibration analysis
4. Solving <abbr title="Partial diffrential Equations">PDEs</abbr> i.e heat and wave equations.
5. Function approximation for periodic problems
6. Compression (basis for mp3, JPEG etc).

A trigonometric polynomial of degree $n$ is
$$T_n(x)=a_0+\sum\limits_{k=1}^{n}(a_{k}\cos(kx)+b_k\sin(kx))$$
This is said to be a finite Fourier Series because it limits the infinite series to $n$ terms.
Increasing $n$ improves accuracy (convergence depends on smoothness of $f(x)$.
Any piece wise smooth function can be approximated by $T_n(x)$.
Error reduces as $n$ increases(except at discontinuities $\implies$ Gibbs phenomenon). 
This forms the basis of spectral methods in numerical analysis. 