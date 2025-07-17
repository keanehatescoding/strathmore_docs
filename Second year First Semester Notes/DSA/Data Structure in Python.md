## Lists
[]
Essentially an array but it's called a list in python.
Index-able
Duplicate elements are permitted.
Can have elements of different data types.
The elements of a list are mutable.
It is ordered

## Methods

[].insert( index , value)
[].append(value)
[].extend(name_of_another_iterable)
[].remove()
[].pop(index="default is last element")
del list_name[index]
[].clear()
[].sort() // works for both numbers and words
[].sort(reverse=True) # descending order
[].reverse() # reverses the current order of the list
a = list(b)
[].copy
a = b[:]
[].index(value)
[].count(value) -> returns the number of elements with the specified value
## Types of Lists

## Sets 
{}
Unordered
Immutable
They are un-indexed
No duplicate members are allowed

### Methods
{}.add("value")
{}.update(iterable)
{}.union(iterable) or |
{}.union(set1,set2,..)
 the union and update methods exclude duplicates
{}.intersection(set) # keeps only duplicates or & 
{}.difference(set) # set difference or -
{}.difference_update(set)
{}.symmetric_difference(set) # xor or ^
{}.symmetric_difference_update(set)
{}.remove("value")
{}.discard("value")
{}.pop() # though this removes a random item
{}.clear()
del name_of_set

## Tuples
()
indexable
Duplicates are allowed
They are ordered
They are immutable meaning you cannot append/remove or change an element(s) of a tuple. If you want to change an element of a tuple then you have to change it to another mutable abstract data type then do something and then convert it back to a tuple.
### Methods

del thisTuple
().count('value')
().index('value')


## Dictionaries 
{}
They are key:value pairs therefore they are hashmaps
These are hashmaps
Ordered
Mutable

## method
1. dict( key = "value", key1 = "value2" )
2. {}.get("key")
3. {}.keys()
4. {}.values()
5. {}.items()
6. {}.update({"key": "value"})
7. {}.pop("key")
8. {}.popitem()
9. del my_dict\["key"\]
10. {}.clear()
11. {}.copy()
12. {}.fromkeys()
13. {}.setdefault()
## Hash sets
```python
set()
```