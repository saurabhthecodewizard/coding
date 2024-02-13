class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def odd_even_list(head):
    if not head or not head.next:
        return head

    odd = head
    even = head.next
    even_head = head.next
    while even and even.next:
        odd.next = odd.next.next
        even.next = even.next.next
        odd = odd.next
        even = even.next

    odd.next = even_head
    return head

# Helper function to print the linked list
def print_list(label, head):
    print(label, end=" ")
    current = head
    while current:
        print(current.val, end=" ")
        current = current.next
    print()

# Test Case 1: Odd and even number of nodes
head1 = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5, ListNode(6))))))
print_list("Test Case 1 (Before):", head1)
result1 = odd_even_list(head1)
print_list("Test Case 1 (After):", result1)  # Output: 1 -> 3 -> 5 -> 2 -> 4 -> 6

# Test Case 2: Odd number of nodes
head2 = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
print_list("Test Case 2 (Before):", head2)
result2 = odd_even_list(head2)
print_list("Test Case 2 (After):", result2)  # Output: 1 -> 3 -> 5 -> 2 -> 4

# Test Case 3: Even number of nodes
head3 = ListNode(1, ListNode(2, ListNode(3, ListNode(4))))
print_list("Test Case 3 (Before):", head3)
result3 = odd_even_list(head3)
print_list("Test Case 3 (After):", result3)  # Output: 1 -> 3 -> 2 -> 4

# Test Case 4: Single node
head4 = ListNode(1)
print_list("Test Case 4 (Before):", head4)
result4 = odd_even_list(head4)
print_list("Test Case 4 (After):", result4)  # Output: 1

# Test Case 5: Empty list
head5 = None
print_list("Test Case 5 (Before):", head5)
result5 = odd_even_list(head5)
print_list("Test Case 5 (After):", result5)  # Output: None
