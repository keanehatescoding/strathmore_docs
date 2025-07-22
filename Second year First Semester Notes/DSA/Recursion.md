Recursion is when we use a function that calls itself repeatedly until it reaches a base case to solve a problem.
A __base case__ is terminating condition which prevents the function from creating stacks indefinitely and causing a stack overflow.
Time complexity is $O(2^{n})$
Space complexity for the complexity for a basic recursive algorithm is $O(n)$
Recursive data structures are:
1. Linked List
2. Trees
3. Graphs

Fibonacci sequence
$$f(0) = 0, f(1)= 1$$
$$f(n) =f(n-1)+f(n-2)$$

```python
def fibonacci(n: int)-> int:
	if n==0: return 0
	if n==1: return 1
	return fibonacci(n-1)+fibonacci(n-2)
```

Factorial using recursion
```python
def factorial(n: int)-> int:
	if n == 0:
		return 1
	return n * factorial(n-1)
```