class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def detect_cycle(head):
    slow = head
    fast = head
    while fast is not None and fast.next is not None:
        slow = slow.next
        fast = fast.next.next
        if slow == fast:
            slow = head
            while slow != fast:
                slow = slow.next
                fast = fast.next
            return slow
    return None

# Test Case 1: Cycle present
head1 = ListNode(1)
node2 = ListNode(2)
node3 = ListNode(3)
node4 = ListNode(4)
node5 = ListNode(5)
head1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5
node5.next = node2  # Creating a cycle
print("Test Case 1:", detect_cycle(head1).val)  # Output: 2

# Test Case 2: No cycle
head2 = ListNode(1, ListNode(2, ListNode(3)))
print("Test Case 2:", detect_cycle(head2))  # Output: None

# Test Case 3: Single node with a cycle
head3 = ListNode(1)
head3.next = head3  # Creating a cycle
print("Test Case 3:", detect_cycle(head3).val)  # Output: 1

# Test Case 4: Single node without a cycle
head4 = ListNode(1)
print("Test Case 4:", detect_cycle(head4))  # Output: None

# Test Case 5: Empty list
head5 = None
print("Test Case 5:", detect_cycle(head5))  # Output: None
