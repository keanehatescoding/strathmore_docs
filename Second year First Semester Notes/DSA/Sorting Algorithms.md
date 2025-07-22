These are algorithms that are used to sort an data structure usually an array.
## Types of sorting Algorithms

1. Bubblesort
2. Insertion sort
3. Selection sort
Divide and conquer algorithms
4. Merge sort
5. Quick Sort
6. Heap sort
7. Count sort
8. Radix sort
9. Bucket sort
10. Exchange sort
11. Combsort
12. Bogosort

## 1. Bubble Sort

The word '__Bubble__' comes from how this algorithm works, it makes the __highest values 'bubble up'__.

Time Complexity $O(n^2)$
Worst case- $O(n^2)$
Best case- $O(n)$
Space Complexity $O(1)$

```python
def buble_sort(arr: List[int])-> None:
	n = len(arr)
	for i in range(n-1):
		for j in range(n-i-1):
			if(arr[j-1]>arr[j]):
				arr[j-1],arr[j] = arr[j],arr[j-1]
```

This is an improvisation to the bubble sort algorithm. Bubble sorts may continue iterating through the array until we have reached $n^2$ steps. This is not efficient if we had already sorted the in $k$ steps where $k<n^2$. To ensure we don't continue iterating through our array we can put a swapped boolean as False at the before we iterate the array. If we do not see any $j+1$ element is less than the previous($j^{th}$) element then swapped remains False and we can exit our loop since the array is already sorted.
```python
def bubble_sort_improved(arr: List[int])->None:
	n = len(arr)
	for i in range(n-1):
		swapped = False
		for j in range(n-i-1):
			if(arr[j] > arr[j+1]):
				arr[j],arr[j+1] = arr[j+1], arr[j]
				swapped = True
		if !swapped:
			break
```

```Cpp
#include <iostream>
#include <algorithm>

using namespace std;

void bubblesort(signed long long* arr, size_t arr_len);

int main(){
	signed long long arr[] = { 21, 70, -1 , 12, 2 };
	size_t arr_len = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr);
	for(size_t i=0;i<arr_len;i++)
		cout<<arr[i]<<", ";
	return 0;
}

void bubblesort(signed long long* arr,size_t arr_len){
	for(size_t i=0; i<arr_len; i++){
		swapped = False
		for(size_t j=0; j<arr_len-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
				}
			}
		}
		if !swapped return;
	}
```

## 2. Selection Sort
Outer loops runs (n-1) times while the inner loop runs n/2 times.
Theta Complexity $\Theta(n-1)\times(\frac{n}{2})\approx\Theta( \frac{n^2}{2})$ therefore much better than bubble sort.
Time Complexity $O(n^2)$
Worst case - $O(n^2)$
Big Omega case - $\Omega(n^2)$
Space Complexity - $O(1)$
Insertion sort finds the lowest element in the array and puts it as the first element.
```python
def selection_sort(arr: list[int])-> None:
    n = len(arr)
    for i in range(n):
        min_index = i
        for j in range(i+1,n):
            if arr[j]<arr[min_index]:
                min_index = j
        arr[i],arr[min_index] = arr[min_index], arr[i]
```
## 3. Insertion Sort
Average time = __$O\left(\frac{n}{2}* n\right)= O(\frac{n^{2}}{2})$

Time complexity = __$O(n^2)$__
Space complexity = $O(1)$
```python
def insertion_sort(arr: list[int])->None:
    l = len(arr)
    for i in range(1,l):
        for j in range(i,0,-1):
            if arr[j]<arr[j-1]:
                arr[j],arr[j-1] = arr[j-1],arr[j]
            else:
                break
	
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

# Divide and Conquer Algorithms
## 4. Merge Sort

Time Complexity - $O(n\log n)$
Space Complexity - $O(n)$ but if coded properly can reach $O(\log n)$

```python
def merge_sort(arr: list[int])->None:
	# find the middle of the list
	n = len(arr)
	# base case
	if n == 1:
		return arr
	m = len(arr) // 2	
	# left array
	L = arr[:m]
	# left array
	R = arr[m:]

	L = merge_sort(L)
	R = merge_sort(R)
	l,r = 0,0
	L_len = len(L)
	R_len = len(R)
	
	sorted_arr = [0] * n
	i = 0

	while l < L_len && r < R_Len:
		if L[l] < R[r]:
			sorted_arr[i] = L[l]
			l +=1
		else:
			sorted_arr[i] = R[r]
			r +=1
		i++
	while l < L_len:
		sorted_arr[i] = L[l]
		l += 1
		i += 1
	while r < R_len:
		sorted_arr[i] = R[r]
		r += 1
		i += 1
	return sorted_arr
	
```

## 6. Quick Sort
Time Complexity $O(n\log n)$ if you get good pivots if you repeatedly bad pivots $O(n^2)$
Space Complexity: $O(n)$ because it sorts in place
```python
def quicksort(arr: list[int])->None:
if len(arr) <= 1:
	return arr
	# p is the pivot
	p = arr[-1]
	l = [ x for x in arr[:-1] if x <= p]
	r = [ x for x in arr[:-1] if x > p]

	L = quicksort(l);
	R = quicksort(r);


	return L + [p] + R;
```

## 5. Heap Sort
We first call heapify to make the binary tree a max or min heap.
For min heap we heapify the binary tree by shifting up the child node if and only if it is less than the parent and the its neighbor.
Heapify has a time complexity of $O(n)$ and a space complexity of $O(1)$.
For max heap we heapify the binary tree by shifting up the child node if and only if it is greater than the parent and its neigbor.
In heap sort we take the root node and repeatedly which is usually the max/min element depending on the type of heap(max/min heap) and we use this to build the sorted array.
Time Complexity $O(n\log n)$
Space Complexity $O(1)$ when using coded swapping which is complex but we will do this using heap without swapping which will have a $O(n)$ space.
```python
A = [1, 34 ,24 2340, 10, 203 ,34 52, 63 \
import heapq
# create a min heap
heapq.heapify(A)
```
Heap push
```python
heapq.heappush(A, 4)
```
Heap pop
```python
min_el = heapq.heappop(A)
```
Heap sort
```python
import heapq
def heapsort(arr: list[int])-> arr: list[int]:
	heapq.heapify(arr)
	n = len(arr)
	new_list = [0] * n
	for i in range(n):
		min_el = heapq.heappop(arr)
		new_list[i] = min_el	
	return new_list
```
Heap push pop
```python
heap.pushpop(A,21)
```
NB:
The heapq library does not support max heap
To create a max heap you need to negate the array
Max heap
```python
n = len(A)
for i in range(n):
	A[i] =  -A[i]

heapq.heapify(A)
```
For any other operations you need to negate the function or 2nd argument i.e
heappush
```python
heappush[A,-7]

```
## 6. Counting Sort
Time Complexity: $O(K+N)$ where K is the max(arr) + 1 if the arr has no negative elements
Space Complexity $O(K)$
```python
def counting_sort(arr: list[int])-> None:
	n = len(arr)
	maxx = max(arr)
	counts = [0] * (maxx + 1)
	for x in range(arr):
		counts[x] += 1

	i = 0
	for c in range(maxx+1):
		while counts[i] > 0:
			arr[i] = c
			i += 1
			counts[i] -= 1
```

## 7. Radix Sort
This algorithm sorts a list of numbers using the __most significant digits__.
Time Complexity: $O(d(N+r)$ where $d$ is the number of digits and 
Space Complexity: $O$
`
## Topological sort
### Applications
1. Package management- all dependencies of a dependency must be recursively installed before a package is installed.