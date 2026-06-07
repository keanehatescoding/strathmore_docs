## String methods
### 1. strlen()
Returns the length of a string
```php
echo strlen("Hello World<br>");
// 15
```

### 2. str_word_count()
Returns the number of words in a string
```php
echo str_word_count("My name is James");
// 4
```

### 3. strpos()
Searches for a specific text within a string.
If a match is found, the function returns the character position of the first match. If no match is found, it will return FALSE.
```php
echo strpos("This is a sentence", "sentence");
// 10
```

### 4. strtoupper()
Returns the string in upper case
```php
echo strtoupper("Oh my Gosh!");
// OH MY GOSH!
```
 
### 4. strtolower()
Returns the string in lower case
```php
echo strtoupper("BLOODY HELL");
// bloody hell
```

### 5. str_replace()
Replaces some characters with some other characters in a string.
```php
echo str_replace("cry","laugh","Did you cry?");
// Did you laugh?
```

### 6. strrev()
Reverse a string
```php
echo strrev("This string is in reverse");
// esrever ni si gnirts sihT
```

### 7. trim()
Removes white-space characters at the beginning or end of the string.
```php
echo trim(" There are spaces at the beginning");
// There are spaces at the beginning
```

### 8. explode()
This function splits a string into an array.
The first parameter of the this function represents the __"separator"__. The "separator" specifies where to split the string.
```php
$x = "This xsentence xhad xa xproblem";
$y = explode("x", $x);
print_r($y);
Array
(
    [0] => This 
    [1] => sentence 
    [2] => had 
    [3] => a 
    [4] => problem
)
```