#Computer-Programming the process of designing, writing, testing, debugging and maintaining the source code of computer programs.
#Machine-Langugage is the lowest level of programming language(except computers that utilize programmable microcode) and consists entirely of numbers.
#Assembly-Language contains the same instructions as machine language, but the instructions as machine language, but the instructions and variables have names instead of being just numbers.
#Compilers translate high-level languages into assembly language or machine language/ A program that translates source code to object code.
#Interpreters analyze and execute each line of source code in succession without looking at the entire program.
The advantage of interpreters is that they can execute a program immediately. Compilers require some time before an executable program emerges. However, programs produced by compilers run much faster than the same programs executed by an interpreter.
#Assemblers are programs that translate assembly language to machine language.
Each type of CPU has it's own assembly language written for its CPU thus an assembly language written for one CPU won't work for a different CPU architecture.
## Key Features of C
1. Efficiency - It allows for direct memory manipulation and Low level access to hardware resources.
2. Portability- C programs can be compiled and executed on different platforms with minimal modifications.
3. Extensive Libraries: Chas a rich set of libraries that provide pre-written functions and modules for common tasks e.g. file handling, string manipulation, and mathematical operations(math.h).
4. Procedural Language -  programs can be broken down into smaller, modular functions which promote reusability, maintainability and readability. 
5. Legacy Code - has been around for several decades as a result many existing systems and library are written in C, making it necessary to use C for maintaining and integrating with legacy code.
6. Learning and Understanding- Learning C helps in understanding fundamental programming concepts, memory management and the inner workings of a computer.
#Procedural-Programming is a programming paradigm that focuses on organizing code into a series of procedures or functions. In this paradigm, a program is composed of collection of procedures or subroutines that perform specific tasks.
## Key Features of Procedural Programming
1. Procedures - These are self-contained blocks of code that encapsulate a specific set of instruction. They can be reused and called multiple times from different parts of the program.
2. Sequential Execution- Procedural programming follows a linear execution flow, where instructions are executed in the order they appear in the code.
3. Modularity - Procedural programming breaks down a program into smaller procedures allows for easier maintenance, debugging and testing.
4. Data and Procedure Separation =  Procedural programming separates data and procedures. Data is typically stored into variables while procedures operate on this data by passing it as arguments or returning values.
5. Limited Coder Reuse - Procedural programming lacks some of the code reuse mechanisms found in other paradigms, such OOP/
6. Global Data - In procedural programming, data can be shared globally across procedures for communication and data exchange between different parts of the program.
## Comparison with imperative programming
The focus of procedural programming is to break down a programming task into collection of variables, data structures and subroutines, whereas in OOP is to break down a programming task into classes with each "class" encapsulating its own methods (subroutines).
```dataview
Procedural Object-Oriented
procedure method
record object
module class
procedural call message
```

## Comparison with functional programming
The principles of modularity and code reuse in practical functional languages are fundamentally the same as in procedural languages, since they both stem from structured programming.
1. Procedures correspond to functions - both allow the reuse of the same code in various parts of the programs and at various points of execution.
2. By the same token procedures also correspond to function application.
3. Functions and their invocations are modularly separated from each other in the same manner, by the use of functions arguments, return values and variable scopes.
The main difference between the styles is that functional programming languages remove or at least deemphasize the the imperative elements of procedural programming. Other differences are:
1. Procedural languages model execution of the program as a sequence of imperative commands that may implicitly alter shared states, functional programming languages model execution as the evaluation of complex expressions that only depend on each other in terms of arguments and return values.
2. Functional programming languages support (and heavily use) first class functions, anonymous functions and closures.
3. Functional programming languages tend to rely on tail call optimization and higher-order functions instead of imperative looping constructs.

## Comparison with logic programming
In Logic-programming a program is a set of premises, and computation is performed by attempting to prove candidate theorems.
Logic programs are declarative, focusing on what the problem is, rather than how to solve it, but this is not always the case e.g. in backward reasoning technique, implemented by SLD resolution, such as Prolog treats programs as goal-reduction procedures.
Experienced logic use the procedural interpretation to write programs that are effective and efficient, and they use the declarative interpretation to help ensure that programs are correct.

## What is structured programming

Structured programming is a programming that links control flow blocks (a function, an if statement's blocks, etc) to the scopes of the variables.
A variable declared inside such a block is invisible outside it which in turn leads to programs written with only the following code structures.
1. Sequence of sequentially executed statements.
2. Conditional execution of statements e.g. if statements.
3. Looping
4. Structured subroutines (e.g. 'gosub' and 'goto').
5. Stepwise Refinement
## SUMMARY OF THE STEPS OF PRODUCING STRUCTURED PROGRAMS
### 1. Analyze the Problem
Identify the program's output, input, variables, constants and general steps(tasks) to transform the inputs into the outputs.

## 2. Design the Program using a Design Tool
A program's design is a step-by-step description of how the above steps should be carried out so as to solve the problem. The design is also known as the algorithm.

### Qualities of a Good Algorithm
1. Should be clear, precise and easy to follow to avoid errors and make it modifiable by future programmers.
2. A program's design should also show the exact logic of the program i.e show the appropriate sequence of formulae.
3. It should be general and not specific so that in can be converted into a program using any programming language.
Two most used tools for designing a program are pseudo codes and flowcharts.
(a) Pseudo Codes - English-like statements that look similar to many procedural programming languages.
e.g. 
		Input x
		area = length * width
(b) Flowchart Symbols - are symbols used to diagrammatic represent the program logic.

## 3. Code the Program

The algorithm produced in step (2.) above is then converted into actual program (code) using an appropriate programming language.
The actual statements of the program are also known as the code of the program.

## 4. Compile (or convert it into a machine language program), Test and run

## 5.  Maintain the program

This involves making changes to improve the functionality of the program(improve it), remove possible previously undetected errors(bugs.), to cater for newly discovered user needs, or to cater for changed technology.

