The differences are small: echo has no return value while print has a return value of 1 so it can be used in expressions. echo can take multiple parameters (although such usage is rare) while print can take one argument. echo is marginally faster than print.
The difference between using strings that are surrounded by single quotes and double is when using single quotes you must use the following syntax
```php
echo 'Hello from ' . $name '. how do you do?';
```
while when using double quotes you can do the same thing and also use format strings.
```php
echo "Hello from the $name. How do you do";
```
When using the echo keyword it is not a must you put the brackets
```php
echo("Hello");
# Same as
echo "Hello";
```
You can use many html tags in PHP i.e.
```php
echo "<h1> My First Sentence </h1>";
echo "<br> This will be on a seprate line<br>";
```
To separate different strings arguments use __,__
i.e 
```php
echo "My"," name", " is", " none", " of" " ...";
```