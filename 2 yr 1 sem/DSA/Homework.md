# Searching algorithms

__Linear search__- your iterate through every element from one direction until you get your target element. 
Since you have to iterate through each element in a line if your element is at the opposite end then you have to iterate through all elements. This gives this program a __O(n)__
```python
def linear_searh(arr: list[int],target):
	for i in range(len(arr)):
		if arr[i] == target:
			return i
	return -1
```


__Breath first search__- In this type of search you search all paths simultaneously until you reach your target. Since you have to search all nodes simultaneously then the this algorithm has a __O(n)__
```python
from collections import defaultdict

class Graph:
	def __init__(self):
		self.graph = defaultdict(list)

		def addEdge(self, u, v):
			self.graph[u].append(v)

		def BFS(self, s):
			visited = [False] * (max(self.graph) + 1)
			queue = []
			queue.append(s)
			visited[s] = True


		while queue:


		s = queue.pop(0)
		print(s,end=" ")

		for i in self.graph[s]:
			if not visited[i]:
				queue.append(i)
				visited[i] = True

if __name__ == "__main__":
 g = Graph()
 g.addEdge(0,1)
 g.addEdge(0,2)
 g.addEdge(1,2)
 g.addEdge(2,0)
 g.addEdge(2,3)
 g.addEdge(3,3)
 g.BFS(2)
 
```

__Depth first search__. In this type of search you go as deep as possible in a singular path at a time until you find the target.
Suppose your are searching for a target which is at the end of the most right path, this gives your program a __O(n)__ since you will have to traverse through every path first.
```python
from collections import defaultdict

class Graph:

	def __init__(self):
		self.graph = defaultdict(list)

	def addEdge(self, u, v):
		self.graph[u].append(v)

	def DFSUtil(self, v, visited):

		visited.add(v)
		print(v,end=" ")

		for neighbour in self.graph[v]:
			if neigbour not in visited:
				self.DFSUtil(neighbour, visited)

		def DFS(self, v):
			visited = set()

			self.DFSUtil(v,visited)

if __name__ == "__main__":
	g = Graph()
	g.addEdge(0,1)
	g.addEdge(0,2)
	g.addEdge(1,2)
	g.addEdge(3,3)


	g.DFS(2)
```

__Binary search__ - this is used in an sorted array. It has a time complexity of __O(log n)__.
```python
def binary_search(arr: list[int], target: int)-> int:
	# check if the list is sorted and sorts if it is unsorted
	if !(all(arr[i] <= arr[i+1] for i in range(len(arr)-1):
		arr.sort()
	left = 0
	right = len(arr) - 1
	while True:
		mid = (left + right) // 2
		if arr[mid] == target:
			return mid
		# if target is less than mid then make left to be mid + 1
		if target < mid:
			left = mid + 1
		# if target is greater than mid then make right to be mid - 1
		else:
			right = mid - 1
	return -1
```

```python
fruits = ["apple", "banana", "mango", "banana", "orange" ]
print( f"The first fruit is {fruits[0]} while the last element is: {fruits[-1]}")
```