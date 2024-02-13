class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def getIntersectionNode(headA, headB):
    if not headA or not headB:
        return None
    a, b = headA, headB
    while a != b:
        a = headB if a is None else a.next
        b = headA if b is None else b.next
    return a

def test_intersection(label, headA, headB, expected):
    print(label, end=" ")
    intersection_node = getIntersectionNode(headA, headB)
    print_list(intersection_node)
    print(f" (Expected: {expected.val if expected else 'None'})")

def print_list(head):
    current = head
    while current:
        print(current.val, "-> ", end="")
        current = current.next
    print("None")

# Test Case 1: Intersecting at node with value 8
common_node1 = ListNode(8, ListNode(4, ListNode(5)))
headA1 = ListNode(4, ListNode(1, common_node1))
headB1 = ListNode(5, ListNode(6, ListNode(1, common_node1)))
test_intersection("Test Case 1:", headA1, headB1, common_node1)  # Output: 8 -> 4 -> 5

# Test Case 2: No intersection
headA2 = ListNode(2, ListNode(6, ListNode(4)))
headB2 = ListNode(1, ListNode(5))
test_intersection("Test Case 2:", headA2, headB2, None)  # Output: None

# Test Case 3: Intersecting at node with value 2
common_node3 = ListNode(2, ListNode(4, ListNode(5)))
headA3 = ListNode(1, ListNode(9, ListNode(1, common_node3)))
headB3 = ListNode(3, common_node3)
test_intersection("Test Case 3:", headA3, headB3, common_node3)  # Output: 2 -> 4 -> 5
