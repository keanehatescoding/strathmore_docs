class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class CircularLinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            new_node.next = self.head
        else:
            current = self.head
            while current.next != self.head:  # Traverse to the last node
                current = current.next
            current.next = new_node  # Link the last node to the new node
            new_node.next = self.head  # Complete the circular link

    def display(self):
        if not self.head:
            print("The list is empty.")
            return
        current = self.head
        while True:
            print(current.data, end=" -> ")
            current = current.next
            if current == self.head:
                break
        print("(back to head)")


# Create a circular linked list and append elements A, B, C, D, E, F, G, H
circular_list = CircularLinkedList()
elements = ["A", "B", "C", "D", "E", "F", "G", "H"]

for element in elements:
    circular_list.append(element)

# Display the circular linked list
circular_list.display()
