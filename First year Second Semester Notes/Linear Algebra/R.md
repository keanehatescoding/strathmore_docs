---
id: Rstudio
aliases: []
tags: []
---

# Defining a matrix

To define a matrix in R type the following

```R
# defines a 3x3 matrix called A with values from a column vector
A <- matrix(c(3,2,-1,
     0,4,6,
     8,5,6), nrow = 3 , byrow = TRUE)
# defines a 3x3 matrix called B with values from a column vector
B <- matrix(c(2,0,1,
     0,3,1,
     0,0,2), nrow = 3, byrow = TRUE)
```

nrow means the number of rows i.e. 3 in this case
When byrow is set to TRUE R arranges the column into a $n^{th}$ row matrix where n is the value of nrow in the previous argument.

## Finding the product of two matrices

```R
A%*%B
```
$$\matrix A \times \matrix B= \begin{bmatrix}3& 2& -1 \\ 0& 4 & 6 \\ 8 & 4 & 6\end{bmatrix}\begin{bmatrix}2 & 0 & 1  \\ 0 & 3 & 1  \\ 0 & 0 & 2\end{bmatrix}=\begin{bmatrix} 6 & 6 & 3  \\ 0 & 12 & 16  \\ 16 & 15 & 25 \end{bmatrix}$$


## To find the inverse of two matrices

```R
solve(B)
```
$$\matrix B^{-1}=\begin{bmatrix} 0.5 & 0.000000 & -0.250000 \\ 0.0 & 0.333333 & -0.166667 \\ 0.0 & 0.000000 & 0.500000 \end{bmatrix}$$

## Find the determinant of a matrix

```R
> det(A)
110
> det(B)
12
```

## To find the transpose of two matrices

```R
> t(A)
> t(B)
```

$$\matrix A^{T}=\begin{bmatrix} 3 & 0 & 8 \\ 2 & 4 & 5 \\ -1 & 6 & 6 \end{bmatrix}$$

$$\matrix B^{T}=\begin{bmatrix} 2  & 0 & 0 \\ 0 & 3 & 0 \\ 1 & 1 & 2 \end{bmatrix}$$