These are algorithms that are used to sort an data structure usually an array.
## Types of sorting Algorithms

1. Bubblesort
2. Quicksort
3. Insertion sort
4. Selection sort
5. Merge sort
6. Heap sort
7. Count sort
8. Radix sort
9. Bucket sort

## 1. Bubble Sort

The word '__Bubble__' comes from how this algorithm works, it makes the __highest values 'bubble up'__.

Time Complexity $O(n^2)$
Worst case- $O(n^2)$
Best case- $O(n)$
Space Complexity $O(1)$

```python
def buble_sort(arr: List[int])-> int:
	n = len(arr)
	for i in range(n-1):
		for j in range(n-i-1):
			if(arr[j-1]>arr[j]):
				arr[j-1],arr[j] = arr[j],arr[j-1]
```

This is an improvisation to the bubble sort algorithm. Bubble sorts may continue iterating through the array until we have reached $n^2$ steps. This is not efficient if we had already sorted the list is say k steps where $k<n^2$. To ensure we don't continue iterating through our array we can put a swapped boolean as False at the before we iterate the array. If we do not see any j+1 element is less than the previous(j'th) element then swapped remains False and we can exit our loop since the array is already sorted.
```python
def bubble_sort_improved(arr: List[int])-> int:
	n = len(arr)
	for i in range(n-1):
			if(arr[j] > arr[j+1]):
				arr[j],arr[j+1] = arr[j+1], arr[j]
				swapped = True
	if not swapped:
		break
```

```Cpp
#include <iostream>
#include <cstdlib>

using namespace std;

const double* bubblesort(double* arr);

int main(){
	std::cout << "Your bubble sorted array is %f: " << bubblesort() << endl;
	return 0;
}

const double* bubblesort(double* arr){
	arr_len = sizeof(*arr) / sizeof(*arr[0]);
	double temp;
	for(int i=0;i<arr_len - 1;i++){
		for(int j=0;j<arr_len-2:j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				}
			}
		}
	}
	return arr*;
}
```


## 2. Selection Sort

Time Complexity $O(n^2)$
Worst case - $O(n^2)$
Best case - $O(n^2)$
Insertion sort finds the lowest element in the array and puts it as the first element.
```python
def selection_sort(arr: List[int])-> List[int]:
	n = len(array)
	for i in range(n-1):
		min_index = i
		for j in range(i+1,n):
			if arr[j] > arr[j+1:
				arr[j],arr[j+1] = arr[j+1], arr[j]
				min_index = j
		min_value = arr.pop(min_index)
		arr.insert(i, min_value)
```
## 3. Insertion Sort
Average time = __$O\left(\frac{n}{2}* n\right)= O(\frac{n^2}{2})$__

Time complexity = __$O(n^2)$__
```python
def insertion_sort(arr: List[int])-> List[int]:
	n = len(arr)
	for i in range(1,n):
		insert_index = i
		current_value = arr.pop(i)
		for j in range(i-1,-1,-1):
			if(arr(j) > current_value):
				index_value = j
		arr.insert(index_value, current_value)
	
```


```python
def Insert_sort_improved(arr: List[int])-> List[int]:
	n = len(arr)
	for i in range(1,n):
		insert_index = i
		current_value = arr.pop(i)
		for j in range(i-1, -1, -1):
			if arr[j] > current_value:
				arr[j+1] = arr[j]
				insert_index = j
			else
				break
		arr.insert[index_value] = current_value

		
```

## 4. Merge Sort

Time Complexity - $O(n\log n)$


## 5. Heap Sort

