public class SortList {
    public static void main(String[] args) {
        // Test Case 1: Random unsorted list
        ListNode head1 = new ListNode(4, new ListNode(2, new ListNode(1, new ListNode(3))));
        printList("Test Case 1 (Before):", head1);
        SortList sorter = new SortList();
        ListNode result1 = sorter.sortList(head1);
        printList("Test Case 1 (After):", result1); // Output: 1 -> 2 -> 3 -> 4

        // Test Case 2: Already sorted list
        ListNode head2 = new ListNode(1, new ListNode(2, new ListNode(8, new ListNode(4))));
        printList("Test Case 2 (Before):", head2);
        ListNode result2 = sorter.sortList(head2);
        printList("Test Case 2 (After):", result2); // Output: 1 -> 2 -> 4 -> 8

        // Test Case 3: Single node
        ListNode head3 = new ListNode(5);
        printList("Test Case 3 (Before):", head3);
        ListNode result3 = sorter.sortList(head3);
        printList("Test Case 3 (After):", result3); // Output: 5
    }

    public ListNode sortList(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }
        ListNode prev = null;
        ListNode slow = head;
        ListNode fast = head;

        while (fast != null && fast.next != null) {
            prev = slow;
            slow = slow.next;
            fast = fast.next.next;
        }
        prev.next = null;
        ListNode first = sortList(head);
        ListNode second = sortList(slow);

        return merge(first, second);
    }

    private ListNode merge(ListNode first, ListNode second) {
        ListNode union = new ListNode(0);
        ListNode trav = union;

        while (first != null && second != null) {
            if (first.val < second.val) {
                trav.next = first;
                first = first.next;
            } else {
                trav.next = second;
                second = second.next;
            }
            trav = trav.next;
        }
        if (first != null) {
            trav.next = first;
        }
        if (second != null) {
            trav.next = second;
        }
        return union.next;
    }

    private static void printList(String label, ListNode head) {
        System.out.print(label + " ");
        ListNode current = head;
        while (current != null) {
            System.out.print(current.val + " ");
            current = current.next;
        }
        System.out.println();
    }
}

class ListNode {
    int val;
    ListNode next;

    ListNode() {
    }

    ListNode(int val) {
        this.val = val;
    }

    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}