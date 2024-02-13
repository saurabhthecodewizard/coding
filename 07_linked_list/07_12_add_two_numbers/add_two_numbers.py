class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def addTwoNumbers(l1, l2):
    head = ListNode()
    trav = head

    carry_over = 0

    while l1 or l2 or carry_over == 1:
        sum_val = 0

        if l1:
            sum_val += l1.val
            l1 = l1.next

        if l2:
            sum_val += l2.val
            l2 = l2.next

        sum_val += carry_over
        carry_over = sum_val // 10

        trav.next = ListNode(sum_val % 10)
        trav = trav.next

    return head.next

def test_addition(label, l1, l2):
    print(label, end=" ")
    print_list(addTwoNumbers(l1, l2))
    print()

def print_list(head):
    current = head
    while current:
        print(current.val, "-> ", end="")
        current = current.next
    print("None")

# Test Case 1: Normal addition
l1 = ListNode(2, ListNode(4, ListNode(3)))
l2 = ListNode(5, ListNode(6, ListNode(4)))
test_addition("Test Case 1:", l1, l2)  # Output: 7 -> 0 -> 8

# Test Case 2: Unequal lengths with carry-over
l3 = ListNode(9, ListNode(9, ListNode(9)))
l4 = ListNode(1)
test_addition("Test Case 2:", l3, l4)  # Output: 0 -> 0 -> 0 -> 1

# Test Case 3: One list is empty
l5 = ListNode(1, ListNode(8, ListNode(2)))
l6 = None
test_addition("Test Case 3:", l5, l6)  # Output: 1 -> 8 -> 2

# Test Case 4: Both lists are empty
l7 = None
l8 = None
test_addition("Test Case 4:", l7, l8)  # Output: None
