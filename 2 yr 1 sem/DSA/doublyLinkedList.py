class doublyNode:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None


node1 = doublyNode(3)
node2 = doublyNode(5)
node3 = doublyNode(13)
node4 = doublyNode(2)

node1.next = node2

node2.prev = node1
node2.next = node3

node3.prev = node2
node3.next = node4

node4.prev = node3

print("\n Traversing forward")
currentNode = node1
while currentNode:
    print(currentNode.data, end=" ->")
    currentNode = currentNode.next
print("null")

print("\n Traversing forward")
currentNode = node4
while currentNode:
    print(currentNode.data, end=" ->")
    currentNode = currentNode.prev
print("null")
