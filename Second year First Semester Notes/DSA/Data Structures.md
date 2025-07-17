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
1. Arrays
2. Linked lists
3. Stack
4. Queues
5. Graphs
6. Trees
7. Heap
8. Hashmaps
9. Hashsets
10. Binary search Trees
## 1. Arrays

They are two types of arrays:
1. Static arrays
2. Dynamic arrays
Static arrays 

## 2. Linked Lists
A linked list is a non contiguous array where each node(element) stores a value and the memory address of the next node.
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
## 3. Stack
The stack is a special array whereby the the last element to be pushed(appended) is the first out element to be pop(removed) from the stack.

### Time Complexity

1. __Insertion__ - takes __\*O(1)__ since you just add the element to the top of the stack.
2. __Deletion__ - likewise deletion takes __O(1)__ since you just pop(remove) the element at the top of the stack.
3. __Searching__ - takes __O(n)__ since if the element is at the bottom of the stack you have to pop every element until you reach the bottom of the stack.

### Methods 
1. append()/push() - Usually *O(1)
2. pop() - 

## 4. Queue 
The queue is a __first in first out__ data structure.

## Time Complexity

1. __Insertion__ - takes __O(1)__ since you just add the element to the back of the queue. 
2. __Deletion__ - takes __O(1)__ since you just remove the element at the front of the queue.
3. __Searching__ - takes __O(n)__ since you have to remove all the elements in the front until you reach your target.

## 5. Trees
A non-linear data structure where nodes are organized in a hierarchy
The node at the top of the tree is known as the root node and lack edges.
The nodes at the bottom of the tree are known as leafs and have lack outgoing edges.
Branch edges are nodes in the middle which have both outgoing and incoming edges.
The size of a tree is the number of nodes a tree has.
The depth of a tree is the number of edges below the root node.
The height of a tree is the number of edges above the furthest leaf node.
Types of trees:
1. Binary Trees

#### 4. Binary Trees
This is a tree which where each node has no more than 2 children.

## 6. Heap
There are two types of heaps
1. __Max heap__ -where every parent element is larger than it's child on 
2. __Min heap__ -where every parent element is smaller than it's child on 

### Time Complexity
1. __Accessing__ the element at the top of the heap is always an __O(1)__ operation either if it's a max or mean heap but for any other element it is a __O(n)__ operation.
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