## Course content
1. Introduction to Computational Methods and Errors
2. Handling Errors and Elementary Series
3. Trigonometry and Fourier Series Basics 
4. Linear Algebra Fundamentals
5. Numerical Solutions of Non-linear Equations
6. Numerical Solutions of Differential Equations
7. Interpolation and Polynomial Approximation
8. Numerical Integration
9. Advanced Transforms and Computational Tools
**Definition:** Computational methods are techniques used to solve mathematical problems numerically using algorithms.

The goal of computational modelling, is to find or develop algorithms that solve mathematical problems computationally. Each algorithm must satisfy the following properties:
1. __Accuracy__ An accurate algorithm is able to return a result that is numerically very close to the correct, or analytical results
2. __Efficiency__. An efficient algorithm is able to quickly solve the mathematical problem with reasonable computational resources.
3. __Robustness__ A robust algorithm works for a wide variety of inputs $x$.
4. __Stability__ - A stable algorithm is not sensitive to small changes in the input $x$.

## Types of Errors
1. __Rounding errors__- error due to finite precision of computer arithmetic
2. __Blunder error__: Obtained through an incorrect procedure, to obtain the wrong answer to a calculation.
3. **Absolute error:** $$E_{a}= ||\text{True Value}-\text{Approximate Value}||$$ or
 $$\partial x= x_{0}- x$$
- this is the absolute value of the difference between the measured or inferred value and the actual value of the quantity.
Absolute is insufficient because it does not give as the details regarding the importance of the error.
4. **Relative error:** $$E_{r}= \frac{E_{a}}{\text {True Value}}=\frac{x_{0}-x}{x}$$ is defined as the ratio of the absolute error of the measurement to the actual measurement.
Using this method we can determine the magnitude of the absolute error in terms of the actual size of the measurement. If the true measurement of the object is not known, then the relative error can be found using the measured value.
## Mean Absolute Error(MAE)
This is the average of all absolute errors of
the data collected.
It is obtained by dividing the sum of all the absolute errors with the number of errors. The formula for MAE is
$$\text{MAE}=\frac{1}{n}\sum\limits_{i=1}^{n} x_{i}-x$$
## Applications
1. Engineering simulations
2. Physics models
3. Data analysis

## Sources of Errors
1. Measurement Limitations
2. Incomplete data
3. Approximate models
4. Finite precision arithmetic
Error propagation - errors can accumulate in a sequence of operations
Operations particularly subtraction of nearly equal numbers are particularly error prone via catastrophic cancellation.

## Strategies of Error Control
1. Use upper bounds on truncation errors to estimate worst-case deviation.