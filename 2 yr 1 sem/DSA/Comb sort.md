Best case - O(n)
On average - O($\frac{n^{2}}{2^p})$ where _p_ is **the number of passes or iterations** the algorithm makes — each time the **gap** shrinks. 
Worst case - O($n^2$)
It is an improvement on bubble sort by using a gap of more than 1
```python

def combsort(arr: list[int])-> list[int]:
	n = len(arr)
	gap = n
	
	swapped: bool = True
	
	# recursively run until gap is 1 or swapped is false
	while gap != 1 or swapped == True:
		
		# find next gap	
		gap = int(gap/1.3)

		# initialize swapped to false so we can see if a swap happened or not
		swapped = False
		
		for i in range(n-gap):
			if arr[i] > arr[i+gap]:
				arr[i],arr[i+gap] = arr[i+gap],arr[i]
				swapped = True
	return arr
```