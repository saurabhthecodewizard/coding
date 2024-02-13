class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def remove_nth_from_end(head, n):
    slow = fast = head
    for _ in range(n):
        fast = fast.next
    if not fast:
        return head.next
    while fast.next:
        slow = slow.next
        fast = fast.next
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

# Test Case 1: Remove the second node from the end
head1 = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
print_list("Test Case 1 (Before):", head1)
result1 = remove_nth_from_end(head1, 2)
print_list("Test Case 1 (After):", result1)  # Output: 1 -> 2 -> 3 -> 5

# Test Case 2: Remove the first node from the end
head2 = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
print_list("Test Case 2 (Before):", head2)
result2 = remove_nth_from_end(head2, 5)
print_list("Test Case 2 (After):", result2)  # Output: 2 -> 3 -> 4 -> 5

# Test Case 3: Remove the only node
head3 = ListNode(1)
print_list("Test Case 3 (Before):", head3)
result3 = remove_nth_from_end(head3, 1)
print_list("Test Case 3 (After):", result3)  # Output: None
