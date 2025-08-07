---
id: Linear Least Square Regression
aliases: []
tags: []
---

Linear Least square regression is finding the (straight)line of best fit for a set of points.
The difference between a given point in a set of points and the corresponding point in the line of best fit is called the residual or the error.
$$\begin{align}e_{1}=(y_{1}-f(x_{1})\\e_{2}=(y_{2}-f(x_{2})\\...\\e_{n}=(y_{n}-f(x_{n})\end{align}$$
We square this difference to give us only positive values.
$$(e_{1})^{2},(e_{2})^{2},...,(e_{n})^{2}$$
Next we add the sum of the square of the residuals to get the sum of square error.
$$SSE=(y_{1}-f(x_{1}))^2+(y_{2}-f(x_{2}))^2+...+(y_{n}-f(x_{n})^2$$
Using our points $(x_{1},y_{1}),(x_{2},y_{2}),...(x_{n},y_{n})$ we would have the following system of linear equations
$$\begin{align}
y_{1} = (b+mx_{1)}+e_{1} \\
y_{2} = (b+mx_{2)}+e_{2} \\
... \\
y_{n} = (b+mx_{n})+e_{n} \\

\end{align}$$
Now let's set up a matrix equation. Let
$$\matrix{Y}=\begin{bmatrix}y_{1} \\ y_{2} \\ .. \\ y_{n-1} \\ y_{n}\end{bmatrix},\matrix X= \begin{bmatrix}1 & x_{1}  \\ 1  & x_{2} \\ .. & .. \\ 1  & x_{n-1}  \\ 1 & x_{n}\end{bmatrix},\matrix A=\begin{bmatrix}b  \\ m \end{bmatrix},\matrix E = \begin{bmatrix} e_{1} \\  e_{2} \\ ...  \\ e_{n-1} \\ e_{n}\end{bmatrix}$$
This gives us the matrix equation: __Y=AX+E__.
We know just need to solve for __A__.
The solution to the least squares regression equation __Y=AX+E__ is given by:
$$\vec {A}=(X^{T}X)^{-1}X^{T}Y$$
where $A^T$ is the transpose of matrix $X$ above.
The sum of squared errors is:
$$ SSE = E^{T}E$$
