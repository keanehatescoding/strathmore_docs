---
id: Gaussian Elimination
aliases: []
tags: []
---

__Gaussian elimination__ is a series of elementary row operations done to transform a matrix into row echelon form.
__Gaussian-Jordan Elimination__ is series of elementary row operations done to transform a matrix into reduced row echelon form.

1. Locate the left most column of the matrix that does not consist entirely of zeros.
2. Interchange the top row with another row, if necessary, to bring a non zero entry to the top of the column found in the previous step.
3. If the entry that is now at top of the column is $a$, multiply the first row by $\frac {1}{a}$ in order to introduce a leading 1.
4. Add suitable multiples of the top row to the row below so all the entries below the leading zero become 0.
5. Now cover up the top row in the matrix and begin again with step 1 applied to the sub-matrix that remains. Continue this until the matrix is in row echelon form.
If you want to solve a system of linear equations. You can rewrite the system of linear equations as a single matrix without including the variable vector. Perform Gaussian elimination on this matrix. Use back substitution to get back the value of variables and you have successfully solved a system of linear equations using Gaussian-Jordan Elimination and back substitution.
Gaussian-Jordan Elimination can also be used to find the determinant of a matrix by adding the identity matrix beside the matrix and performing elementary row operations until it is in rref. i.e