class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def is_palindrome(head):
    if not head or not head.next:
        return True

    slow = head
    fast = head
    while fast.next and fast.next.next:
        slow = slow.next
        fast = fast.next.next

    reversed_head = reverse(slow.next)
    first = head
    second = reversed_head
    while second:
        if first.val != second.val:
            reverse(reversed_head)
            return False
        first = first.next
        second = second.next

    reverse(reversed_head)
    return True

def reverse(head):
    prev = None
    current = head
    next_node = head
    while next_node:
        next_node = next_node.next
        current.next = prev
        prev = current
        current = next_node
    return prev

# Test Case 1: Palindrome with even number of nodes
head1 = ListNode(1, ListNode(2, ListNode(3, ListNode(3, ListNode(2, ListNode(1))))))
print("Test Case 1:", is_palindrome(head1))  # Output: True

# Test Case 2: Palindrome with odd number of nodes
head2 = ListNode(1, ListNode(2, ListNode(3, ListNode(2, ListNode(1)))))
print("Test Case 2:", is_palindrome(head2))  # Output: True

# Test Case 3: Not a palindrome
head3 = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
print("Test Case 3:", is_palindrome(head3))  # Output: False

# Test Case 4: Single node
head4 = ListNode(1)
print("Test Case 4:", is_palindrome(head4))  # Output: True

# Test Case 5: Empty list
head5 = None
print("Test Case 5:", is_palindrome(head5))  # Output: True
