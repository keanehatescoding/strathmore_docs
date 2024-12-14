---
id: Crammer's Rule
aliases: []
tags: []
---

If $\matrix A\vec x = \vec b$ is a system of $n$ linear equations in $n$ unknowns, such that $\det{\matrix{A}}\ne 0$, then the system has the unique solution:
$$x_{1}= \frac {\det A_1}{\det A}, x_{2}=\frac {\det A_{2}}{\det A},...,x_{n}=\frac {\det A_{n}}{\det A} $$
where $\matrix A_i$ is the matrix obtained by replacing the $i^{th}$ column of the matrix with the column $$\vec b = \begin{bmatrix} b_{1} \\ b_2 \\ ... \\ b_n \end{bmatrix}$$
To solve any system of linear equations using Crammer's rule perform the following steps

1. Find the determinant of coefficient matrix of the system of linear equations.
2. Replace the 1st column of the matrix with the with $\vec b$ to get a new matrix $A_{1}$.
3. Compute the determinant of the matrix $A_1$.
4. The value of $x_1$ is $\frac {\det A_1}{\det A}$
5. Repeat these steps for the other columns to get the value of their variables.