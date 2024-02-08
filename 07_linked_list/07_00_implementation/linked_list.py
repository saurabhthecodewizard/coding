class SinglyLinkedList:
    class Node:
        def __init__(self, data: int) -> None:
            self.data = data
            self.next = None
    
    def __init__(self) -> None:
        self.head = None
        self.count = 0
    
    def is_empty(self) -> bool:
        return self.head is None
    
    def add_first(self, data: int):
        new_node = self.Node(data)
        if self.head is None:
            self.head = new_node
        else:
            new_node.next = self.head
            self.head = new_node
        self.count += 1
    
    def remove_first(self):
        if self.is_empty():
            raise IndexError("List is empty!")
        self.head = self.head.next
        self.count -= 1
    
    def add_last(self, data: int):
        new_node = self.Node(data)
        if self.head is None:
            self.head = new_node
        else:
            trav = self.head
            while trav.next is not None:
                trav = trav.next
            trav.next = new_node
        self.count += 1
    
    def remove_last(self):
        if self.is_empty():
            raise IndexError("List is empty!")
        if self.head.next is None:
            self.head = None
        else:
            trav = self.head
            while trav.next.next is not None:
                trav = trav.next
            trav.next = None
        self.count -= 1
    
    def add_at(self, index: int, data: int):
        if index < 1 or index > self.count + 1:
            raise IndexError("List is empty!")
        if index == 1:
            self.add_first(data)
        else:
            new_node = self.Node(data)
            trav = self.head
            for i in range(1, index - 1):
                trav = trav.next
            new_node.next = trav.next
            trav.next = new_node
            self.count += 1
    
    def remove_at(self, index: int):
        if index < 1 or index > self.count:
            raise IndexError("List is empty!")
        if index == 1:
            self.remove_first()
        else:
            trav = self.head
            for i in range(1, index - 1):
                trav = trav.next
            trav.next = trav.next.next
            self.count -= 1
    
    def reverse(self):
        if self.head is None or self.head.next is None:
            return
        prev, current, next_node = None, self.head, self.head
        while next_node is not None:
            next_node = next_node.next
            current.next = prev
            prev = current
            current = next_node
        self.head = prev
    
    def display(self):
        print(f"No of nodes: {self.count}")
        print("Singly Linked List: head", end="")
        trav = self.head
        while trav is not None:
            print(f" -> {trav.data}", end="")
            trav = trav.next
        print(" -> tail")




class DoublyLinkedList:
    class Node:
        def __init__(self, data: int) -> None:
            self.data = data
            self.next = None
            self.prev = None
    
    def __init__(self) -> None:
        self.head = None
        self.count = 0
    
    def is_empty(self):
        return self.head is None
    
    def add_first(self, data: int):
        new_node = self.Node(data)
        if self.head is None:
            self.head = new_node
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node
        self.count += 1
    
    def remove_first(self):
        if self.head is None:
            raise IndexError("List is empty!")
        if self.head.next is None:
            self.head = None
        else:
            self.head = self.head.next
            self.head.prev = None
        self.count -= 1
    
    def add_last(self, data: int):
        new_node = self.Node(data)
        if self.head is None:
            self.head = new_node
        else:
            trav = self.head
            while trav.next is not None:
                trav = trav.next
            new_node.prev = trav
            trav.next = new_node
        self.count += 1
    
    def remove_last(self):
        if self.head is None:
            raise IndexError("List is empty!")
        if self.head.next is None:
            self.head = None
        else:
            trav = self.head
            while trav.next is not None:
                trav = trav.next
            trav.prev.next = None
        self.count -= 1
    
    def add_at(self, index: int, data: int):
        if index < 1 or index > self.count + 1:
            raise IndexError("Invalid index")
        if index == 1:
            self.add_first(data)
        else:
            new_node = self.Node(data)
            trav = self.head
            i = 1
            while i < index - 1:
                trav = trav.next
                i += 1
            new_node.prev = trav
            new_node.next = trav.next
            trav.next = new_node
            if new_node.next is not None:
                new_node.next.prev = new_node
            self.count += 1
    
    def remove_at(self, index: int):
        if index < 1 or index > self.count:
            raise IndexError("Invalid index")
        if index == 1:
            self.remove_first()
        else:
            trav = self.head
            i = 1
            while i < index:
                trav = trav.next
                i += 1
            trav.prev.next = trav.next
            if trav.next is not None:
                trav.next.prev = trav.prev
            self.count -= 1
    
    def reverse(self):
        if self.head is None or self.head.next is None:
            return
        prev, current = None, self.head
        while current is not None:
            prev = current.prev
            current.prev = current.next
            current.next = prev
            current = current.prev
        self.head = prev.prev
    
    def display(self):
        print(f"No of nodes: {self.count}")
        print("Singly Linked List: head", end="")
        trav = self.head
        while trav is not None:
            print(f" -> {trav.data}", end="")
            trav = trav.next
        print(" -> tail")




# Creating an instance of the SinglyLinkedList
linked_list = DoublyLinkedList()

# Test Case 1: Insertion at the Beginning
linked_list.add_first(10)
linked_list.display()  # Output: Singly Linked List: head -> 10 -> tail

# Test Case 2: Insertion at a Specific Position (0-based index)
linked_list.add_at(1, 20)
linked_list.display()  # Output: Singly Linked List: head -> 20 -> 10 -> tail

# Test Case 3: Insertion at the End
linked_list.add_last(30)
linked_list.display()  # Output: Singly Linked List: head -> 20 -> 10 -> 30 -> tail

# Test Case 4: Deletion from the Beginning
linked_list.remove_first()
linked_list.display()  # Output: Singly Linked List: head -> 10 -> 30 -> tail

# Test Case 5: Deletion from a Specific Position (0-based index)
linked_list.remove_at(2)
linked_list.display()  # Output: Singly Linked List: head -> 10 -> tail

# Test Case 6: Deletion from the End
linked_list.remove_last()
linked_list.display()  # Output: Singly Linked List: head -> tail

# Test Case 7: Insertion at the Beginning after Deletion
linked_list.add_first(5)
linked_list.display()  # Output: Singly Linked List: head -> 5 -> tail

# Test Case 8: Insertion at the Beginning with multiple elements
linked_list.add_first(15)
linked_list.add_first(25)
linked_list.display()  # Output: Singly Linked List: head -> 25 -> 15 -> 5 -> tail

# Test Case 9: Insertion at a Specific Position beyond the list size
linked_list.add_at(4, 50)
linked_list.display()  # Output: Singly Linked List: head -> 25 -> 15 -> 5 -> 50 -> tail

# Test Case 10: Reverse the list
linked_list.reverse()
linked_list.display()  # Output: Singly Linked List: head -> 50 -> 5 -> 15 -> 25 -> tail

# Test Case 11: Deletion from a Specific Position beyond the list size
linked_list.remove_at(2)
linked_list.display()  # Output: Singly Linked List: head -> 50 -> 15 -> 25 -> tail

# Test Case 12: Display an empty list
linked_list.remove_at(1)
linked_list.remove_last()
linked_list.remove_first()
linked_list.display()  # Output: Singly Linked List: head -> tail
