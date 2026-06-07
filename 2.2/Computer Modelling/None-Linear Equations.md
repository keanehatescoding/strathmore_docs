A non linear equation can take the form $f(x)=0$
## Examples
1. Kepler’s equation in orbital mechanics
2. Chemical reaction equilibrium
## Bisection method
Requires an interval $[a,b]$ where $f(a)f(b)<0$
It iteratively bisects the interval until solution converges
Guaranteed convergence but slow rate (linear rate).

### Steps
1. Check the signs at the endpoints
2. Compute the midpoint
3. Evaluate $f(x_m)$
4. Determine the new interval


Newton's method
$$x_{n+1}=\frac{x_n^2+2}{2x_n}$$
## Newton-Raphson Method
Uses tangent line at current guess
Method finds successive better approximations to a root of $f(x)=0$
At each iteration it uses the tangent line to the curve $y=f(x)$ at the current guess $x_n$ to estimate where that line crosses the $x$-axis.
Mathematically
$$x_{n+1}=x_{n}-\frac{f(x_n)}{f'(x_n)}$$
Quadratic convergence if initial guess is close.
May still diverge if guess is poor.

## Secant Method
Avoids computing derivative
Faster than bisection method but slower than Newton-Raphson Method

$$x_{n+1}=x_n-f(x_n)\frac{x_{n}-x_{n-1}}{f(x_n)-f(x_{n-1})}$$
## Numerical Differentation
For $f(x)$ expanded around $x_0$
$$f(x+h)= f(x)+hf'(x)+\frac{h^2}{2}f''(x)+\frac{h^3}{6}f'''(x)+\frac{h^4}{24}f''''(4)+...$$
$$f(x-h)= f(x)-hf'(x)+\frac{h^2}{2}f''(x)-\frac{h^3}{6}f'''(x)+\frac{h^4}{24}f''''(x)$$
Forward difference
$$f'(x)\approx\frac{f(x+h)-f(x)}{h}$$
Backward difference
$$f'(x)\approx\frac{f(x)-f(x-h)}{h}$$
Central difference
$$f('x)\approx\frac{f(x+h)-f(x-h)}{2h}$$
### Euler's method
The first order ODE can be written as
$$\frac{dy}{dx}=f(x,y),y(x_0)=y_0$$
It is important to compute $y(x)$ at discrete points $x_1,x_2,x_3,...,x_n$ separated by the size $h$:
$$x_{i+1}=x_{i}+h$$
*Euler's method for ODEs*
$$y_{n+1}=y_{n}+hf(x_n,y_n)$$
*Modified Euler's method(Heun's method*
$$y_{n+1}=y_{n}+\frac{h}{2}[f(x_n,y_n)+f(x_{n+1},y_{n}+hf(x_n,y_n)]$$
### Runge-Kutta Methods(RK2 and RK4)
RK2(Second-order Runge-Kutta)
$$k_{1}= f(x_{i}, y_i)$$
$$k_{2}=f(x_{i}+h, y_{i}+hk_1)$$
$$y_{i+1}=y_{i}+\frac{h}{2}(k_{1}+k_2)$$
RK4(Fourth-order Runge-Kutta)
$$k_{1}= f(x_i,y_i)$$
$$k_2=f(x_i+\frac{h}{2},y_{i}+\frac{h}{2}k_1)$$
$$k_{3}=f(x_i+\frac{h}{2},y_i+\frac{h}{2}k_2)$$
$$k_{4}=f(x_{i}+h,y_i+hk_3)$$
where $y_{i+1}=y_i+\frac{h}{6}(k_{1}+2k_{2}+2k_3+k_4)$