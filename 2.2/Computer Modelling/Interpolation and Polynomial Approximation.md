**Interpolation** is the process of estimating unknown values of function $f(x)$ between the data points e.g. if $f(1)=1$ and $f(3)=10$ what is $f(2)$
To perform interpolation numerically we use finite differences- discrete analogs of derivatives.
Let data points be $x_0,x_1,x_{2},...,x_n$ with equal spacing $h=x_{i+1}-x_i$ 

| Type of difference  | Defintion                                                 | Symbol      |
| ------------------- | --------------------------------------------------------- | ----------- |
| Forward difference  | $\Delta f(x_i)=f (x_{i+1})-f(x_i)$                        | $\Delta$    |
| Backward difference | $\nabla f(x_i)=f(x_i)-f(x_{i-1})$                         | $\nabla$    |
| Central difference  | $\delta f(x_i)=f(x_{i+\frac{1}{2}})-f(x_{i-\frac{1}{2}})$ | $\delta$    |
| Divided difference  | $\|x_i,x_{i+x}\| =\frac{x_{i-1}-f(x)}{x_{i+1}-x_i}$       | $\frac{}{}$ |
## Forward difference table
To perform interpolation numerically, we use finite differences- discrete analog of derivatives.

| $x$   | $f(x)$ | $\Delta f(x)$          | $\Delta^{2}f(x)$                          | $\Delta^{3}f(x)$                                     |
| ----- | ------ | ---------------------- | ----------------------------------------- | ---------------------------------------------------- |
| $x_0$ | $f_0$  |                        |                                           |                                                      |
| $x_1$ | $f_1$  | $\Delta f_0=f_1-f_0$   |                                           |                                                      |
| $x_2$ | $f_2$  | $\Delta f_1=f_2-f_1$   | $\Delta^{2} f_{0}=\Delta f_1-\Delta f_0$  |                                                      |
| $x_3$ | $f_3$  | $\Delta f_2= f_3 -f_2$ | $\Delta^{2}f_{1}=\Delta f_{2}-\Delta f_1$ | $\Delta ^{3} f_{0}=\Delta^{2} f_{1}-\Delta^{2}f_{0}$ |
*Newton's Forward Interpolation Formula*
$$f(x)=f_{n}+p\nabla f_n+\frac{p(p+1)}{2!}\nabla^{2}f_{n}+\frac{p(p+1)(p+2)}{3!}\nabla^{3}f_n+...+$$
where $p=\frac{x-x_n}{h}$
Applicable when data points are near the end of the table.
## Lagrange Interpolation
Given $n+1$ data points
$$(x_0,y_0),(x_1,y_1),...,(x_n,y_n)$$
The **Lagrange interpolation polynomial** is
$$P_n(x)=\sum\limits_{i=0}^n{y_{i}L_{i}(x)}$$
where each $L_{i}(x)$ is the **Lagrange basis polynomial** defined as:
$$L_{i}(x)=\prod_{j=0,i\ne j}^{n} \frac{x-x_j}{x_i-x_j}$$
Each $L_i(x)$ equals 1 at $x-x_i$ and 0 at $x_j$
i.e
$$L_i(x)=\begin{cases}1 & x=x_{i}\\0 & x=x_{j},j\ne i\end{cases}$$
## Applications
1. Engineering data estimations ( stress-strain curves, temperature readings etc)
2. Computer graphics & image scaling
3. Numerical differentiation and integration

## Spline Interpolation
While polynomial interpolation uses a single high-degree polynomial, spline interpolation uses low-degree polynomials between each pair of data points, ensuring the overall curve is smooth.
A cubic spline is the most common and satisfies:
1. The curve passes through all data points.
2. First and second derivatives are continuous across intervals
3. Boundary conditions are applied at the endpoints
For each subinterval $[x_i,x_{i+1}]$, define
$$S_i(x)=a_i+b_i(x-x_i)+c_i(x-x_i)^2+d_i(x-x_i)^3$$
The coefficients $a_{i},b_i,c_i,d_i$ are determined by
$$S_i(x_i)=y_i$$
$$S_i(x_{i+1})=y_{i+1}$$
$$S'_{i}(x_{i+1})=S'_{i+1}(x_{i+1})$$
$$S_i''(x_{i+1})=S_{i+1}''(x_{i+1})$$
## Least Square Approximation
When data contain measurement noise or inconsistency, interpolation through every point can reduce unrealistic oscillations. Instead, we seek a best fit polynomial that minimizes the total squared error.
We minimize:
$$E=\sum\limits^n_{i=1}[y_i-P(x_i)]^2$$
where $P(x)$ is the polynomial approximation
Given the points $(x_i,y_i)$, the linear model is
$$y=a_0+a_1x$$
We solve the **normal equations**
$$
\begin{cases}
na_{0}+a_{1}\sum\limits x_{i}=\sum\limits y_{i}\\ \\
a_{0}\sum\limits x_{i}+a_{1}\sum\limits x^{2}_{i}=\sum\limits x_{i}y_i
\end{cases}
$$
