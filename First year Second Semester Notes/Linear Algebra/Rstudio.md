# Defining a matrix

To define a matrix in Rstudio type the following

```R
A <- matrix(c(3,2,-1,
     0,4,6,
     8,5,6), nrow = 3 , byrow = TRUE)
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

Result
$$\begin{bmatrix} 6 & 6 & 3  \\  0 & 12 & 16  \\  16 & 15 & 25 \end{bmatrix}$$

## To find the inverse of two matrices

```R
solve(B)
```

## Find the determinant of a matrix

```R
det(A)
det(B)
```

```R
110
12
```

## To find the transpose of two matrices

```R
t(A)
t(B)
```

Transpose of A
$$\begin{bmatrix} 3 & 0 & 8 \\ 2 & 4 & 5 \\ -1 & 6 & 6 \end{bmatrix}$$

transpose of B

$$\begin{bmatrix} 2  & 0 & 0 \\ 0 & 3 & 0 \\ 1 & 1 & 2 \end{bmatrix}$$
