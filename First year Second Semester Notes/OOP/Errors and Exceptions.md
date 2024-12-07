__Exceptions__  are for your applications while __Errors__ are for telling you something went horribly wrong when compiling your program in the JVM and usually cannot be recovered.
## 1. Syntax error
Violation against Java language 
Misspelled keywords/ unmatched brackets  or termination without ';'
## 2. Semantic error
Errors occur during execution of the program(crashes midway)
Class Loading Error:
- ClassFormatError
- NoSuchMethodError
- AbstractMethodError
- ClassCircularityError

Memory Errors
- StackOverFlowError
- OutOfMemoryError
- UnkownError

## 3. Exceptions
__Execption__:errors that occurs occasionally before or during runtime which involves are caused by an unhandled edge case in the program. I.e when we try to pass a string in a Interger.parseInt() method.
Exceptions are handled using try catch or throwing them. The try block tries running a block of code suceptible to an exception while the catch block handles the exception that occured. i.e 
```java
public class Main {
	public static void Main(String[] args){
		try {
			int a = Integer.parseInt("adfd");
			}
		catch (Exception e) {
			System.out.println("You cannot parse that as a number)
		}
	}
}
```
The "Exception" is a general class which can hold any Exception from the different exception classes.
There are two types of Exceptions __"Unchecked exceptions"__ or runtime exceptions and __"Checked exceptions"__ which are any other exceptions that is a subset of the Exceptions class but not a part of the RuntimeException class.
Unchecked(Runtime) Exceptions allow you to compile you program but when running the show you the exception occured while Checked Exceptions do not even allow you javac to compile your program.
A better approach would be to use the specific exception class that would probably come out of the try block. I.e for this it would be NumberformatException and use its abbreviations when entering the variable i.e nfe.
It is also possible to get exceptions coming from two classes using as your argument. 
```java
public class Main {
	public static void main (String[] args){
		try {
			int a = Integer.parseInt("asds");
			}
		catch (NumberFormatException | NullPointerException e) {
			System.out.println("That's not a number);
		}
	}
}
```

__finally__ marks a block after a try block that is __ALWAYS__ executed after the try block exits. Even with the try block calling a return, continue, break or exception
You should always use __try with resources__ to automatically closes resources which are auto closable.
For resources which are not auto closable then you should use the finally to close this resource.
Try and catch blocks are usually good for database connections via the JDBC(Java DataBase Connector) because:
1. DB connections are prone to sql exceptions i.e when db is down, network connections fail etc. So they provide exception handing in the aforementioned cases and logging to the debug information to the StackTrace and prevent the program from crashing.
2. They can automatically close the resources after the try block. This eliminates the need of a finally block and makes your programs avoid memory leaks and effieciently use connection pools.