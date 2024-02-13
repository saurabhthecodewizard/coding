class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class SortList:
    def sortList(self, head):
        if not head or not head.next:
            return head

        # Find the middle of the list
        slow = head
        fast = head.next
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        # Split the list into two halves
        second_half = slow.next
        slow.next = None

        # Recursively sort the two halves
        first_half = self.sortList(head)
        second_half = self.sortList(second_half)

        # Merge the sorted halves
        return self.merge(first_half, second_half)

    def merge(self, first, second):
        union = ListNode(0)
        trav = union

        while first and second:
            if first.val < second.val:
                trav.next = first
                first = first.next
            else:
                trav.next = second
                second = second.next
            trav = trav.next

        if first:
            trav.next = first
        if second:
            trav.next = second

        return union.next

def print_list(label, head):
    print(f"{label} ", end="")
    current = head
    while current:
        print(current.val, end=" ")
        current = current.next
    print()

# Test Case 1: Random unsorted list
head1 = ListNode(4, ListNode(2, ListNode(1, ListNode(3))))
print_list("Test Case 1 (Before):", head1)
sorter = SortList()
result1 = sorter.sortList(head1)
print_list("Test Case 1 (After):", result1)  # Output: 1 -> 2 -> 3 -> 4

# Test Case 2: Already sorted list
head2 = ListNode(1, ListNode(2, ListNode(8, ListNode(4))))
print_list("Test Case 2 (Before):", head2)
result2 = sorter.sortList(head2)
print_list("Test Case 2 (After):", result2)  # Output: 1 -> 2 -> 4 -> 8

# Test Case 3: Single node
head3 = ListNode(5)
print_list("Test Case 3 (Before):", head3)
result3 = sorter.sortList(head3)
print_list("Test Case 3 (After):", result3)  # Output: 5
