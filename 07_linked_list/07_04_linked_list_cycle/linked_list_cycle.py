class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def has_cycle(head):
    slow = head
    fast = head
    while fast is not None and fast.next is not None:
        slow = slow.next
        fast = fast.next.next
        if slow == fast:
            return True
    return False

# Test Case 1: Cycle present
head1 = ListNode(1)
node2 = ListNode(2)
node3 = ListNode(3)
head1.next = node2
node2.next = node3
node3.next = node2  # Creating a cycle
print("Test Case 1:", has_cycle(head1))  # Output: True

# Test Case 2: No cycle
head2 = ListNode(1, ListNode(2, ListNode(3)))
print("Test Case 2:", has_cycle(head2))  # Output: False

# Test Case 3: Single node with a cycle
head3 = ListNode(1)
head3.next = head3  # Creating a cycle
print("Test Case 3:", has_cycle(head3))  # Output: True

# Test Case 4: Single node without a cycle
head4 = ListNode(1)
print("Test Case 4:", has_cycle(head4))  # Output: False

# Test Case 5: Empty list
head5 = None
print("Test Case 5:", has_cycle(head5))  # Output: False
