class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def middle_node(head):
    fast = slow = head
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
    return slow

# Test Case 1: Odd number of nodes
head1 = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
print("Middle Node Test Case 1:", middle_node(head1).val)  # Output: 3

# Test Case 2: Even number of nodes
head2 = ListNode(1, ListNode(2, ListNode(3, ListNode(4))))
print("Middle Node Test Case 2:", middle_node(head2).val)  # Output: 3

# Test Case 3: Single node
head3 = ListNode(1)
print("Middle Node Test Case 3:", middle_node(head3).val)  # Output: 1

# Test Case 4: Empty list
head4 = None
print("Middle Node Test Case 4:", middle_node(head4))  # Output: None
