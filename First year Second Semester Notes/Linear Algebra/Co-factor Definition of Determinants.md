## Minor of $a_{ij}$

If $A$ is a square matrix, then the minor of the entry $a_{ij}$ is denoted by $M_{ij}$ and is defined to be the determinant of the sub-matrix that remains after row $i$ and column $j$ are deleted from matrix $A$. 
i.e $$\matrix B=\begin{bmatrix}5 & 6  \\  4 & 8 \end{bmatrix}$$
$M_{11}$  is $$M_{11}\matrix =\begin{vmatrix} \cancel{5} & \cancel 6 \\ \cancel 4 & 8 \end{vmatrix}=|8|$$
The $|8|$ is 8. Hence Minor$_{11}$ of $B$ is 8.

## Co-factor of $a_{ij}$

$(-1)^{i+j}M_{ij}$ denoted as $C_{ij}$ is the co-factor of entry $a_{ij}$.
In the previous example the co-factor of $a_{11}$ is 
$$(-1)^{1+1}8=(-1)^{2}8=1\times 8=8$$

## Co-factor Definition of Determinant

If $A$ is a square matrix then the number obtained by multiplying the entries in any row or column by their corresponding co-factors and adding the resulting products is called the determinant of A, denoted as $\det A$
$$|A|= a_{11}c_{11}+a_{12}c_{12}+...+a_{1,n}c_{1,n}$$
alternatively
$$|A|=a_{11}c_{11}+a_{21}c_{21}+...+a_{n,1}c_{n,1}$$