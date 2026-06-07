---
id: Eigenvectors and Eigenvalues
aliases: []
tags: []
---

When multiplying a vector by a matrix, it usually can change the direction of the matrix and magnitude. However, an eigenvector has the interesting property that only it's magnitude is changing with the possibility it can flip direction i.e when the eigenvalue is negative.
If $\matrix A$ is a $nxn$ matrix then there exists a non zero vector $\vec x \in \mathbb{R}^{n},\vec x\ne0$ such that $\matrix A$ is a scalar multiple of x that is: $\matrix A\vec x =\lambda\vec x$ for some scalar $\lambda$.
The scalar $\lambda$ is the eigenvalue of $\matrix A$ and $\vec x$ is said to be the eigenvector of $\matrix A$ corresponding to $\lambda$.
$$\matrix {A}\vec x=\lambda\vec x$$
$$\matrix A\vec x = \lambda \mathbb{I}\vec x$$
$$\lambda\mathbb{I}\vec x-\matrix A\vec x  = 0$$
$$(\lambda\mathbb{I}-\matrix A)\vec x= 0$$
Since $\vec x$ must be a non zero vector from our definition then:
$$\lambda\mathbb{I}-\matrix A=0$$
If the product of $\lambda\mathbb{I}-\matrix{A}$ and the eigenvector $\vec x$ is zero then it means it implies that $\lambda\mathbb{I}-\matrix A$ is an not invertible. This is because a non invertible matrix is a singular matrix. We know a singular matrix(a matrix with a determinant of zero) maps any vector to a lower dimension or zero.
If $\det \begin{vmatrix}\lambda\mathbb{I}-\matrix{A}\end{vmatrix}=0$ then there exist a value $\lambda$ such that it is the eigenvalue of $\matrix{A}$ and corresponding vector $\vec x$ such that it is the corresponding eigenvector of $\matrix A$.
$$\det \begin{vmatrix}\lambda\mathbb{I}-\matrix A\end{vmatrix} = \begin{vmatrix}\lambda-a_{1,1} & -a_{1,2} & ... & -a_{1,n} \\ -a_{2,1} & \lambda -a_{2,2} & ... & -a_{2,n}  \\  ...  & ... & ... & ... \\ -a_{n,1} & -a_{n,2} & ... & \lambda-a_{n,n}  \\  \end{vmatrix} = 0$$
when expanded it leads to $\lambda^{n}+c_{1}\lambda^{n-1}+...+c_{n-1}\lambda+c_{n}=0$
For $2x2$ matrices $(\lambda-a_{11})(\lambda-a_{22})-(-a_{12})(-a_{21})=0$

$$\lambda^{2}-a_{11}\lambda-a_{22}\lambda + a_{11}a_{22}+a_{12}a_{21}= 0$$
$$\lambda = \frac {a_{11}a_{22}\pm\sqrt{(a_{11}a_{22})^{2}-4a_{11}a_{12}a_{21}a_{22}}}{2}$$
After solving for $\lambda$ we get the matrix has 2 eigenvalues.
In general for a matrix of order n then it has at most n distinct eigenvalues.
$$\begin{vmatrix}\lambda\mathbb{I}-\matrix A\end{vmatrix}\vec x = 0 $$$$\begin{bmatrix}\lambda-a_{1,1} & -a_{1,2} & ... & -a_{1,n} \\ -a_{2,1} & \lambda -a_{2,2} & ... & -a_{2,n}  \\  ...  & ... & ... & ... \\ -a_{n,1} & -a_{n,2} & ... & \lambda-a_{n,n}  \\  \end{bmatrix}\begin{bmatrix}x_{1}  \\ x_{2} \\ x_3 \\ x_4\end{bmatrix} = 0$$
When you solve for the variables in vector $\vec x$ then the values of $x_{1}, x_{2},...x_n$ are the values of the eigenvector of A.

__NB__:
It is possible you will get 0=0 (no leading entry) for the the most right column in the leading diagonal .
If this happens you should make write all the variables in terms of a variable i.e $x_{3}=2x_{1},x_2=5x_{1}$.
Then make one variable free and the other dependant on the other i.e
$x_{1}=t, \space x_{2}=5t , \space x_{3}=2t$
your eigenvector will be $$\vec x = \begin{pmatrix} t  \\ 5t \\ 2t \end{pmatrix}$$ where $t\ne 0$
