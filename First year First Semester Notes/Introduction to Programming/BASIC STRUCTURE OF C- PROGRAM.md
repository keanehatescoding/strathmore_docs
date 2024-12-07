A C program may include one or more sections as following:
1. __Documentation section__: consists of comment lines in // or /* .. */  format
2. __Link section__: provide instructions  to the computer during the linking state
3. __Definition section__: Defines all symbolic constants.
4. __Global declaration section__: these contains variables that can be used in more than one function.
5. __The main()__: 
* Declaration part - declares the variables used in the executable part.
* Executable part - contains at least one statement
6. __Subroutines Section__: contains all user defined function
C is a free form language.
## C-PROGRAM CHARACTER SET
The character in C language is grouped into the following categories:
1. Letters A-Z both upper and lower cases
2. Digits 0-9
3. White spaces: Blank space, Horizontal tab, carriage return, new line, form feed
4. Special Character
	Comma, period , semi colon, colon, ?, " " , \\, etc
## Reserved Words/keywords
They appear in lower case and have special meaning in a program and cannot be used for other purposes.
## STANDARD IDENTIFIERS
These are words having special meaning that a programmer may redefine e.g. printf, scanf
### User defined identifiers
Refers to the name of variables, functions and arrays.

### Syntax rules
1. An identifiers must consist only of letter, digits and underscores.
2. Cannot begin with digit.
3. C language reserved words cannot be used as an identifier
4. An identifier defined in a C standard library should not be redefined.
NB:
- Pick a meaningful name for user defined identifier.
- The use of uppercase and lowercase character must be taken into consideration. rate and RATE are viewed as different identifiers.
## Constants
These are fixed values that do not change during the execution of a program.
They consist of:
__1) Numeric constants__ - integer constant, real constant
__2) Character constant
	(a) Single character constant__ - consists of a single character enclosed of single character enclosed within a pair of single quote e.g. 'x'
	__(b) String Constant__
		A sequence of character enclosed in double quotes e.g. "Hello"
__Backslash Character constants__
Theses combinations of characters is known as __escape sequence__. They are used in output functions.
### Constant         Meaning
\\a                               Audible alert(bell)
\\n                               New line
\\r                               carrriage return
\\t                              horizontal tab
\\v                              vertical tab

