A matrix is a rectangular array of numbers arranged in rows and columns.
$$
A = \begin{bmatrix}
a_{11} &a_{12} &a_{13}\\
a_{21} &a_{22} &a_{23}\\
a_{31} & a_{32} &a_{33}
\end{bmatrix}
,B = \begin{bmatrix}
b_{11} &b_{12} &b_{13}\\
b_{21} &b_{22} &b_{23} \\
b_{31} & b_{32} &b_{33}
\end{bmatrix} 
$$
Common operations
1. Addition/Subtration - element wise
$$A+B=\begin{bmatrix} a_{11}+b_{11} & a_{12}+b_{12} & a{13}+b_{13} \\ a_{21}+b_{21} & a_{22}+b_{22} & a{23}+b_{23} \\a_{31}+b_{31} & a_{32}+b_{32} & a{33}+b_{33} \\\end{bmatrix}$$
2. Multiplication 
$$(AB)_{i,k}=\sum\limits_{k=1}^{n}a_{ik}b_{kj}$$
$$A\cdot B=
\begin{bmatrix}
a_{11}b_{11}+a_{12}b_{21}+a_{13}b_{31} &a_{11}b_{12} +a_{12}b_{22} +a_{13}b_{32} &a_{11}b_{13}+a_{12}b_{23}+a_{13}b_{33}\\
a_{21}b_{11}+a_{22}b_{21}+a_{23}b_{31} &a_{21}b_{12}+a_{22}b_{22}+a_{23}b_{32}\\
a_{32}b_{11}+a_{32}b_{31}+a_{33}b_{31}
\end{bmatrix}$$
3. Transpose $A^T$
4. Determinant, a scalar value that determines invertibility
Determinant of a $2\times 2$ matrix
$$A= \begin{bmatrix}a & b \\ c & d \end{bmatrix}$$ then $\det(A)=ad-bc$ where $\det(A)\ne 0$ 
5. Inverse $A^{-1}$ that satisfy $A^{-1}A = 1$
$\det(A)=ad-bc \ne 0$ 
$$A^{-1} = \frac{1}{\det(A)}\begin{bmatrix}
d & -b\\ -c & a
\end{bmatrix}$$
## Gaussian Elimination
Method to solve $AX = b$ by row reducing to row echelon form (REF)
1. Form an augmented matrix $[A|b]$
2. Use elementary row operations to create zeros below pivots
3. Back-substitution to solve

## Eigenvectors and Eigenvalues
For a square matrix $A$:
$$Av=\lambda v$$
where $v$ is a non-zero eigenvector and $\lambda$ is the corresponding eigenvalues.
Subtracting $\lambda v$ from both sides
$Av -\lambda v=0$
$(A-\lambda I)v=0$
when $A - \lambda I$ is zero then their determinant must be zero, therefore, the eigenvalue $\lambda$ is given by the $\det(A-\lambda I)=0$ where
$$\lambda I=\lambda\begin{bmatrix}  
1 & 0 \\ 0  & 1
\end{bmatrix}$$
## Stability of Numeric Solutions
Systems may be ill-conditioned when small changes in coefficients causes large errors in solutions
Stability depends on condition number of $A$
$$K(A)=||A||\cdot||A^{-1}||$$
Frobenius norm is given by  
$$||A||_F=\sqrt{\sum\limits_{i=1}^{m}\sum\limits_{j=1}^{m}|a_{ij}|^2}$$
Large $K(A)$ means the system is unstable
If $A$ has a positive real eigenvalue then it is said to be unstable if all eigenvalues are negative real numbers then it is said to be stable. If all eigenvalues are zero then it is said to be neutral. 
## Applications
1. Dimensionality reduction
2. Image compression
3. Spectral clustering
4. Control theory