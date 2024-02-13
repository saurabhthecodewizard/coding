class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def reverse_list(head):
    prev = None
    current = head
    while current is not None:
        next_node = current.next
        current.next = prev
        prev = current
        current = next_node
    return prev

# Example usage
head = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
print("Before reverse:", end=" ")
trav = head
while trav is not None:
    print(trav.val, end=" ")
    trav = trav.next
print()

reversed_head = reverse_list(head)

# Print the reversed list for verification
print("After reverse:", end=" ")
while reversed_head is not None:
    print(reversed_head.val, end=" ")
    reversed_head = reversed_head.next
