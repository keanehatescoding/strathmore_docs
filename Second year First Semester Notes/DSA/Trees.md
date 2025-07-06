__Binary trees__ is either empty or consists of a root node and max of two sub trees(left and right) which are themselves binary trees.
The __depth__ of a node is the length of the path from the root to the node.
The __height__ of a node is the length of the longest path from the that node to the furthest external node(leaf node).

```python
Class Tree:
	def new_entry(val:VALUE_TYPE):ENTRY_TYPE
	def new_nil_entry():ENTRY_TYPE
	def put_root(x:ENTRY_TYPE)
 ```

 All operations can be done in __O(1)__.
 21 -> 3 -> 5 -> 4 -> 6 -> 7 -> 8 -> 9 -> 10 -> 11 
 ->12

Binary trees can be traverse through 4 ways namely:
1. Pre-order Traversal
2. In-order Traversal
3. Post-Order Traversal
4. Level-Order Traversal
### 1. Pre-order Traversal
 1. Visit the root
 2. Traverse the left sub-tree
 3. Traverse the right sub-tree

 ### 2. In order traversal
 
 4. Traverse the left sub-tree
 5. Visit the root
 6. Traverse the right sub-tree
 g -> d -> h -> b -> e -> i -> a -> j -> c -> c

4 -> 5 -> 6 -> 3 -> 21 -> 8 -> 7 -> 9 -> 11 -> 10 
  -> 12

###  Post-order Traversal
1. Traverse the left sub-tree
2. Traverse the right sub-tree
3. Visit the root node
4 -> 6 -> 5 -> 3 -> 8 -> 8 -> 11 -> 12 -> 10 -> 9
-> 9 -> 7 -> 21
