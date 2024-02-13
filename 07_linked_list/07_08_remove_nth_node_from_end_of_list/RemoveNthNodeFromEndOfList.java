public class RemoveNthNodeFromEndOfList {
    public static void main(String[] args) {
        // Test Case 1: Remove the second node from the end
        ListNode head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
        printList("Test Case 1 (Before):", head1);
        ListNode result1 = removeNthFromEnd(head1, 2);
        printList("Test Case 1 (After):", result1); // Output: 1 -> 2 -> 3 -> 5

        // Test Case 2: Remove the first node from the end
        ListNode head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
        printList("Test Case 2 (Before):", head2);
        ListNode result2 = removeNthFromEnd(head2, 5);
        printList("Test Case 2 (After):", result2); // Output: 2 -> 3 -> 4 -> 5

        // Test Case 3: Remove the only node
        ListNode head3 = new ListNode(1);
        printList("Test Case 3 (Before):", head3);
        ListNode result3 = removeNthFromEnd(head3, 1);
        printList("Test Case 3 (After):", result3); // Output: null
    }

    public static ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode slow = head;
        ListNode fast = head;
        for (int i = 0; i < n; i++) {
            fast = fast.next;
        }
        if (fast == null) {
            return head.next;
        }
        while (fast.next != null) {
            slow = slow.next;
            fast = fast.next;
        }
        slow.next = slow.next.next;
        return head;
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