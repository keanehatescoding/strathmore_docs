PHP is a loosely/dynamically typed language
```php
// Strings
$variable = "String"
// Integer
$number = 1
// float
$float = 3.14
// boolean
$boolean = true
// null type
$x = null
// Arrays
$newArray = array(1,2,3,4)
$letters = array('a','b','c')
```
Rules for when declaring variables are:
1. They name of the variable must start with __$__.
2. After the dollar sign they must continue with a letter or a underscore i.e it cannot start cannot contain a number.
3. A variable name can only contain alpha-numeric character or underscores i.e A-Z,a-z,0-9 and _.
4. Variables are case-sensitive.
The __var_dump()__ function is used to get the type of a variable.

The supported data types in PHP are:
1. String - note there is a big difference between single and double quoted strings in PHP.
2. Integer - can only range __-2,147,483,648__ to __2,147,483,647__
3. Float/Double
4. Array
5. Object
6. NULL
7. Resource - is not an actual data type. It is the storing of a reference of functions and resources external to PHP. A common example of using resource data type is a database call.
Double quoted strings can execute special characters while single quoted strings cannot i.e.
```php
$x = 21;
print "I am $x years old";
// prints "I am 21 years old"
$x =21;
print 'I am $x years old';
// prints "I am $x years old"
```
PHP variable scope is similar to python meaning the following code will create a error
```php
$x = 21;
function add21($number){
	return $number+$x;
}
add21(21);
```
To include a global variable to a local variable type
```php
$x = 21;
function add21($number){
	global $x;
	return $number+$x;
}
add21(21);
```
PHP stores all global variables in array called __$GLOBAL\[index]__. The __\[index]__ holds the name of the variable. This array is accessible from within functions and can be used to update global variables directly i.e
```php
$x = 21;
$y = 50;
$y = 213;
function foo(){
	return $GLOBAL['x'] = $GLOBAL['x'] + $GLOBAL['z'];
}
foo();
```
When a function is completed all it's variables are deleted. However sometimes we want a local variable NOT to be deleted. To save it we can use the static keyword when you first declare the variable.
```php
function foo(){
	static $color = 0;
	echo $x;
	x++;
}
foo(); // prints out 0
foo(); # prints out 1
foo(); // prints out 2
```
Every time the function is executed the variable will still have information it contained from the last time it was executed.

## Typecasting
This was introduced in PHP 7 and allows you typecast a value type as follows:
```php
$number = 5
$number = (string) $number
var_dump($x)
// prints out string(1) "5"
$number = (Integer) $number
var_dump($x)
// printds out int(5)
```

