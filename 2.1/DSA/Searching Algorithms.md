1. Linear Search $O(n)$
2. Binary Search $O(\log{n})$
3. Interpolation Search $O(\log\log{n})$

## 1. Linear Search
In this algorithm we check if every element is the target element of the array from the beginning till the end or vice versa.
### Time Complexity
__Average case__ - $O(\frac{n}{2})$
__Best case__ - $O(1)$ if and only if the first element is the target element.
__Worst case__ - $O(n)$ if and only if the target element is the last element of the list.

### Space Complexity
$O(1)$ 

```python
def linear_search(arr: list[int], target: int):
	for i in range(len(arr)):
		if arr[i] == target:
			return i
	return -1
```

A better version is:
```python
def linear_search(arr: list[int], target: int):
	for index, element in enumerate(my_list):
		if element == target:
			print(f"{index} : {element}")
	return None
```

### Advantages
1. Works correctly on an unsorted list
2. Uses very little space(constant) i.e O(1) space.
3. Works fine on a smaller arrays

### Disadvantages
1. Grows proportionally slower as the size of the array increases linearly.

## Binary Search
This is a __divide and conquer algorithm__ that divides an array repeatedly by half and checks if the target is in either half until it finds the target if it's in the array.
### Complexity
__Best case__ - $O(1)$ if and only if the target is the middle element.
__Worst case__ - $O(log_2{n})$
__Average case__ - $O(log_2{n})$
 
### Disadvantages
1. Unpredictable in a unsorted or partially sorted array.
```python
def binary_search(arr: list[int], target: int)-> int:
	# Sorts the array to make sure it's sorted
	arr = sorted(arr)
	left: int = 0;
	right: int = len(arr) - 1
	while left<right:
		middle = (left+right) // 2
		if target == arr[midkdle]:
			return middle
		elif target > middle:
			left = middle + 1
		else:
			right = middle - 1
	return -1	
```
