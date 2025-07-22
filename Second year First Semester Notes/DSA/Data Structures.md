These are the various ways(structures) of how data is stored in computers.
## Types of data structures

1. Primitive data structures
2. Abstract data structures

### 1. Primitive Data Structures

These are basic data structures which are usually provided by the programming languages by default and usually represent single values e.g.
1. Integers
2. Floats
3. Doubles
4. Booleans
5. Characters

### 2. Abstract Data Structures

These are higher-level data structures that are built using primitive data types and provide more complex and specialized operations.
Linear Data Structures
1. Arrays
2. List
3. Stack
4. Queues
Non-linear Data Structures
5. Linked lists
6. Graphs
7. Trees
8. Heap
9. Hashmaps
10. Hashsets
11. Binary search Trees
## 1. Arrays

They are two types of arrays:
1. Static arrays
2. Dynamic arrays
To inspect any element of an array it takes - $O(1)$
To update any element of an array it takes - $O(1)$
To insert elements into an array it takes $O(n)$
To delete an element it also takes $O(n)$
### Advantages
1. Faster access time over linked lists
### Disadvantages

## 2. Lists
A list is a sequence of entries in which __order matters__.
If an __entry does not exist__ then it takes the value __NIL__.
### Advantages
1. Efficient __insertion__ and __deletion___ of elements anywhere in the container (__constant time__).
2. Efficient __moving elements__ and __block of elements__ within the container or even between different containers (__constant time__).
3. Iterating over the elements in forward or reverse order (linear time).
### Disadvantage
1. The biggest drawback of lists is that they lack direct access to the elements by their position i.e you cannot know the n'th element of the list unless you iterate to it.
2. They __consume extra memory__ to keep the linking information associated with each element.2
## 3. Stack
The stack is a special array whereby the the last element to be pushed(appended) is the first out element to be pop(removed) from the stack.

### Time Complexity

1. __Insertion__ - takes __\*O(1)__ since you just add the element to the top of the stack.
2. __Deletion__ - likewise deletion takes __O(1)__ since you just pop(remove) the element at the top of the stack.
3. __Searching__ - takes __O(n)__ since if the element is at the bottom of the stack you have to pop every element until you reach the bottom of the stack.

### Methods 
1. append()/push() - Usually *O(1)
2. pop() - 

### Applications
1. Arithmetic expression valuation
2. Syntax parsing
3. Convert recursive algorithms to non-recursive algorithms
4. Reverse order of words

## 4. Queue 
The queue is a __first in first out__ data structure.
### Types of Queues
1. Circular Queues / Ring Buffers
2. Deque - double ended queue 
3. Priority Queues
#### Deque (Double ended Queue)
In a double ended queue(__deque__) we can insert or delete elements from either ends of the queue.
#### Priority Queues
In a priority queue items are ordered according by __key value__ so that the item with the __lowest key__ or __highest priority__ is __always at the front__.
Items are __inserted in proper position__ to maintain order.
A heap is a priority queue
Used in __multitasking os__ making it complex.
```python
from collections import deque
q = deque()
q.append(1)
q.append(2)

q.popleft() # retruns 1
```

### Time Complexity

1. __Insertion__ - takes __O(1)__ since you just add the element to the back of the queue. 
2. __Deletion__ - takes __O(1)__ since you just remove the element at the front of the queue.
3. __Searching__ - takes __O(n)__ since you have to remove all the elements in the front until you reach your target.

### Applications
1. Multitasking in operating systems
2. Round-robin scheduling
3. Printer queue
4. Keystroke queue
5. Lining up in real life
## 2. Linked Lists
A linked list is a non contiguous array where each node(element) stores a value and the memory address of the next node.
It can also be defined as a __chain of records/structs__ called nodes.
Each node contains at least two members i.e the value of that node and a member which point to the next node or run.
Types of linked lists:
1. Singly linked list
2. Doubly linked list
3. Circular linked list
A __doubly linked list__ is a special type of linked list where instead of each node only having a pointer to the next node it also has a pointer to the node coming before it.
```python
class linkedListNode:
	def __init__(self,value, next=None):
		self.value = value
		self.next = next
def print_linkedList(head):
	while head:
		print(head,end=" -> ")
		head = head.next
	print("None")
def reverse(node):
	if not node:
		return
	reverse(node.next)
	print(node)
```

### Time Complexity
1. __Accessing__ a node take __O(n)__.
2. __Inserting__ a node takes __O(1)__ if you already know where you want to insert the node otherwise __O(n)__ since you have to search for it.
3. Likewise __deleting__ a node takes __O(1)__ if you already know where you want insert the node otherwise __O(n)__ since you have to search for the node first. 
### Advantages of a linked list
1. Saves memory especially when adding a new element to the list as you don't have to realloc an entire block of memory.
2. Each record/structure can be located anywhere in memory therefore saving on space.1

### Disadvantage
1. A record can must be an instance of the same structure i.e a char cannot point to a short, long etc.
2. $O(n)$ access time is slower than arrays or sets.
3. It is more complex to implement compared to a array or list especially when doing simple functions like adding/deleting a node.
4. 
## 5. Graphs
Critical path is the most expensive path from start to stop
```python
Class Node:
	def __init__(self,value):
		self.value = value
		self.neighbor = []
	def __str__(self)
		return f'Node(self.value)'
	def display(self)
		connections = [node.value for node in self.neighbors]
		return f'{self.value} is connected to {connections}'

A = Node('A')
B = Node('B')
C = Node('C')
D = Node('D')

A.neigbors.append(B)
B.neigbors.append(A)

C.neighbors.append(D)
D.neighbors.append(A)
```
For an adjacency list it's time complexity is $O(V+E)$
An adjacency matrix is A $V\times V$ matrix that lists all the neighbors of a vertex $V$
The code for converting an array of edges to an adjacency matrix:
```python
n = # number of vertices
M = []
for i in range(n):
	M.append([0] * n)
# for a directed graph
for u,v in A:
	M[u][v] = 1
# for a undirected graph uncomment the next line
#	M[v][u] = 1
```
To convert a array of edges to a 
```python
from collections import defaultdict
D = defaultdict(list)
for u,v in D:
	D[u].append(v)
	## uncomment if it's undirected
	D[v].append(u)
```
For a recursive dfs
```python
def dfs_recursive(node):
	print(node)
	while nei_node in D[node]:
		if nei_node not in seen:
			seen.add(nei_node)
			dfs_recursive(nei_node)

source = 0
seen = set()
seen.add(source)
dfs_recursive(source)
```
For dfs an iterative approach 
```python
source = 0
seen = set()
seen.add(source)
stack = [source]

while stack:
	node = stack.pop()
	print(node)
	for nei_node in D[node]:
		if nei_node not in seen:
			seen.add(nei_node)
			stack.append(nei_node)
```
For a bfs approach
```python
from collections import deque
source = 0
seen = set()
seen.add(source)

q = deque()
q.append(source)
while q:
	node = q.popleft()
	print(node)
	for nei_node in D[q]:
		if nei_node not in q:
			seen.add(nei_node)
			q.append(nei_node)
	

```
### Applications
1. Traffic networks
2. Mining close friends in facebook
3. 
## 5. Trees
A non-linear data structure where nodes are organized in a hierarchy
A formal definition is a __connected acyclic graph__.
A mathematical property for all trees is a the __number of edges__ is always __one less__ that the __number of vertices__ i.e $V=E+1$
The node at the top of the tree is known as the root node and lack incoming edges.
The nodes at the bottom of the tree are known as leafs and have lack outgoing edges.
Branch edges are nodes in the middle which have both outgoing and incoming edges.
The size of a tree is the number of nodes a tree has.
The depth of a tree is the length of the path from the root node to the node.
The height of a tree is the length of the longest path from the node to the furthest external node(leaf node)z
Types of trees:
1. Binary Trees

Binary Trees can be traversed through 3 ways using DFS.
1. Pre-order Traversal: node, left, right
2. In-order Traversal: left, node, right 
3. Post-order Traversal: left, right, node
DFS utilizes stacks
Binary Trees may also be traversed using BFS which implement Queues
### Applications
1. Database indexes
2. 

#### 4. Binary Trees
This is a tree which where each node has no more than 2 children.
Time Complexity: $O(n)$
Space Complexity: $O(n)$
Theta Complexity: $O(H)$ where $H$ is the height of the binary tree.
```python
class TreeNode:
	def __init__(self,val,left=None,right=None):
		self.val = val
		self.left = left
		self.right = right

	def __str__(self):
		return str(self.val)

A = TreeNode(5)
B = TreeNode(1)
C = TreeNode(7)
D = TreeNode(-1)
E = TreeNode(3)
F = TreeNode(6)
G = TreeNode(9)
A.left = B
A.right = C
B.left = D
B.right = E
C.left = F
C.right = G

## Recursive preorder traversal
def pre_order(node: TreeNode)->None:
	if not node:
		return

	print(node)
	pre_order(node.left)
	pre_order(node.right)

def in_order(node: TreeNode)->None:
	if not node:
		return

	pre_order(node.left)
	print(node)
	pre_order(node.right)

def post_order(node: TreeNode)->None:
	if not node:
		return

	post_order(node.left)
	post_order(node.right)
	print(node)

	# iterative approach
def pre_order(node: TreeNode)-> None:
	# add the root node to the stack
	stack = [node]

	while stack:
		node = stack.pop()
		print(node)
		if node.right: stack.push(node.right)
		if node.left: stack.push(node.left)
# You can't do post order or in order using the iterative approach

# using BFS
from collections import deque
def level_order(node: TreeNode)->None:
	Q = deque()
	Q.append(node)
	while Q:
		node = Q.popleft()
		print(node)
		if node.left: Q.append(node.left)
		if node.right: Q.append(node.right)

def exists(node: TreeNode, target):
	if not node:
		return False
	if node.val == target: return True

	return exists(node.left , target) or exists(node.right, target)
	```
#### 5. Binary Search Tree
A binary search Tree is a special binary tree where for every non-leaf node the child node to the left is less than the parent node and the child node to the right is less than the parent node.
Time complexity: $O(log_2{n})$
```python
class BSTNode:
	def __init__(self, val, left, right):
		self.val = val
		self.left = left
		self.right = right

	def __str__(self):
		return str(self.val)

def search(node: BSTNode, v: int)-> Bool:
	if not none:
		return False

	if node.val == target: return
	if node.val < target: return search(node.right, v)
	else: return search(node.left, v)
```
## 6. Heap
This is a special type of binary tree.
A heap is exactly the same as priority queue.
There are two types of heaps
1. __Max heap__ -where every parent element is larger than it's immediate children. 
2. __Min heap__ -where every parent element is smaller than it's immediate children.

### Time Complexity
1. __Peeking__(assessing) the element at the top of the heap is always an __O(1)__ operation either if it's a max or mean heap but for any other element it is a __O(n)__ operation.
2. __Insertion__ operations have __O(log n)__ because you first add it to the bottom of the heap and depending on whether it is smaller or larger than it's parent then it is ranked until the heap is fully organized.
3. __Deletion__ operations likewise take a __O(log n)__ because it removes the element then bubbles down to restore the property of the heap.
## 6. Hash maps
A hashmap is a data structure that stores data in __key-value pairs__.

### Time Complexity
1. __Insertion__ operations are generally a __O(1)__ operation but may increase to __O(n)__ if there is a hash collisions.
2. __Accessing__ an element are generally a __O(1)__ operation but may increase to __O(n)__ if the hashing function used creates a lot of hashing collisions.
3. __Deletion__ operations are generally a __O(1)__ operation but may increase to __O(n)__ if there is an element being deleted is also part of a linked list.
## 7. Hashsets
```python
hashset = set() # used to create a hashset
## Applications
hashset.add(1) # adds 1 to your hashset
```


## 8. Binary Search Trees

In this data structure the child node to the left is always less than the parent node while the child node to the right is always greater than the parent node.

### Time Complexity

1. __Accessing,Insertion and Deletion__ operations generally are a __O(log n)__ operation if the Binary Search Tree is a __balanced__ because of the property the child to the left/right always being less than or greater then the parent so you can always remove have of the list. If it __unbalanced__ then it becomes an __O(n)__ because you have to traverse every other element till you reach your target element.