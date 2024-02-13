class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def delete_middle(head):
    if not head or not head.next:
        return None

    slow = head
    fast = head.next.next

    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next

    slow.next = slow.next.next
    return head

# Helper function to print the linked list
def print_list(label, head):
    print(f"{label} ", end="")
    current = head
    while current:
        print(current.val, end=" ")
        current = current.next
    print()

# Test Case 1: Odd number of nodes
head1 = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
print_list("Test Case 1 (Before):", head1)
result1 = delete_middle(head1)
print_list("Test Case 1 (After):", result1)  # Output: 1 -> 2 -> 4 -> 5

# Test Case 2: Even number of nodes
head2 = ListNode(1, ListNode(2, ListNode(3, ListNode(4))))
print_list("Test Case 2 (Before):", head2)
result2 = delete_middle(head2)
print_list("Test Case 2 (After):", result2)  # Output: 1 -> 2 -> 4

# Test Case 3: Single node
head3 = ListNode(1)
print_list("Test Case 3 (Before):", head3)
result3 = delete_middle(head3)
print_list("Test Case 3 (After):", result3)  # Output: None
