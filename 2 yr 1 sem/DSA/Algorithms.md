An algorithm is a __finite list of well defined instructions__ for __solving__ a task that __given an initial state__ will __terminate in a defined end-state__.
An algorithm is said to be correct if and only if for any __legal input it terminates__ and __produces the desired output__.
A __logical error__ is an error whereby our program compiles and runs successfully(without errors) but __produces wrong__ or __no output__.

## Problem Solving Procedure
1. Analysis
Specification, Input(Pre-conditions), Output(Post-conditions)
2. Design
Algorithms & Data-Structures
3. Implementation
Programs in a real programming language

## Criteria for Algorithms
1. Correctness
2. Efficiency/ Complexity - memory, time

## Types of Asymptotic Notations
We use three types of asymptotic notations to represent the growth of any algorithm, as input increases:
1. Big Theta $(\Theta)$
2. Big O $(O)$
3. Big Omega $(\Omega)$

### 1. Tight Bounds: Big Theta $(\Theta)$ Notation
When we say tight bounds we say the time complexity represented by Big Theta $(\Theta)$ notation is like the __average value or range__ within which the actual time of execution of algorithm.
If for some algorithm the time complexity is represented by the expression $3n^{2} + 5n$,
and we use the Big Theta $(\Theta)$ notation to represent this, then the time complexity would be $\Theta(n^2)$.
Here, in the example above, complexity of $\Theta(n^2)$ means, that the average time for any input n will
remain in between, $k1 \times n2$ and $k2 \times n2$, where $k1$, $k2$ are two constants thereby tightly binding the expression representing the growth of the algorithm.
![[Pasted image 20250719140246.png]]

### 2. Upper Bound: Big-O $(O)$ Notation
This notation is known as the __worst case__ of an algorithm.
The upper bound tells us a given function $f(n)$, will never exceed a specified time for any value of input $n$.
Defining the upper bound is usefully because it tells us the given function will take n or less steps for any given input i.e for linear search or n! or less steps for bogosort or big o of the given function or less steps for any input of the given function.
The above reason is why you will see Big O is used to represent the time complexity of any algorithm, because it makes more sense.

### 3. Lower Bound: Big Omega $(\Omega)$ Notation
This is known as the __best case__ of an algorithm.
This always indicates the minimum time required for any algorithm for all input values, therefore
the best case of any algorithm.

## Space Complexity
__Auxiliary space__ is the __temporary extra space__ used by an algorithm during execution.
Space complexity = Input space + Auxiliary Space

### Memory Usage while Execution
1. __Instruction space__ - the amount of memory used to save the compiled version of instructions.
2. __Environment stack__ - a program may have a function which calls a another function inside. This leads to variables of the caller function being pushed temporarily to system stack while the callee functions runs.
3. __Data space__ - amount of space used by variables and constants.
NB: When we discuss the space complexity of a function we usually consider only the __data space__ of the program and we ignore the __instruction space__ and __environment stack__.

## Time Complexity
It is defined as the total time required by the program to run till it's completion.
It is usually represented using __big O $(O)$ notation__.

### Types of Notation for Time Complexity
1. Big O $(O)$ - denotes "__fewer than or the same as__" n iterations 
2. Big Omega $(\Omega)$- denotes "__more than or the same as__" n iterations.
3. Big Theta $(\Theta)$- denotes "__the same as__" n iterations
4. Small O $(o)$- denotes "__has fewer than__" n iterations
5. Little Omega $(\omega)$- denotes "__more than__" n iterations