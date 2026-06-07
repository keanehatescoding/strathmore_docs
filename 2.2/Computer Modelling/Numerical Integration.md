**Numerical integration** (also known as **numerical quadrature**) is a technique to approximate the definite integral of a function when:
- The analytical (exact) integral is difficult or impossible to compute.
- The function is discrete, available only as data points.
- We desire a fast approximate solution.
General Goal:
$$I=\int_{a}^{b}f(x)dx$$
We approximate $f(x)$ over sub-intervals and sum up the area under the curve.
## Trapezoidal Rule
Approximate the area under $f(x)$ between $x_i$ and $x_{i+1}$ by trapezium
Area of a a trapezium $A=\frac{1}{2}(h)(y_{i}+y_{i+1})$
where $h$ is given by $x_{i+1}-x_i$
For a single interval
$$I\approx \frac{h}{2}[f(a)+f(b)]$$
For multiple intervals
If the interval $[a,b]$, is divided in $n$ equal parts $b=\frac{b-a}{n}$
$$I\approx\frac{h}{2}[f(x_{0})+2\sum\limits_{i=1}^{n=1} f(x_i)+f(x_n)]$$
## Simpson's 1/3 Rule
Approximate the curve using parabola over pairs of subintervals.
Formula
$$I=\frac{h}{3}[f(x_{0})+4\sum\limits_{i=1,3,5..}^{n-1}f(x_{i})+2\sum\limits_{i=2,4,6,...}^{n-2}f(x_{i})+f(x_{n})]$$

## Simpson's 3/8 Rule
Used when the number of subintervals $n$ is a <b>multiple of 3</b>
$$I=\frac{3h}{8}[f(x_0)+3\sum\limits_{i=1,3,5,...} f(x_i)+2\sum\limits_{i=2,4,6,...} f(x_i)+f(x_n)]$$

