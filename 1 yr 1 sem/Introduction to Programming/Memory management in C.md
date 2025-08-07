C is a low level language. One of the features C has as a low level language as opposed to higher level languages is it allows dynamic memory allocation.
If you don't know how much memory your program needs during program execution you can use dynamic memory management which can handle this for you.
This can make your program very fast as adequate memory is used and efficient programs as instead of using large chunks to generalize you are using only required memory.
Dynamic memory allocation is accomplish through functions that can allocate, de-allocate(free) and re-allocate variable memory chunks. The basic 4 functions are the most widely used functions to accomplish the above tasks.
## 1. malloc()

```C
malloc(/*size_in_bytes*/);
```
The malloc function takes a number of bytes and allocates it to a void pointer.

## 2. calloc()
```C
calloc();
```
The calloc() function allocates

## 3. realloc()
```C
realloc();
```
The realloc function 
## 4. free()
The free functions releases(frees) a chunk of memory so that the computer can use it.