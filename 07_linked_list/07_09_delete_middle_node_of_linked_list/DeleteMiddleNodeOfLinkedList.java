public class DeleteMiddleNodeOfLinkedList {
    public static void main(String[] args) {
        // Test Case 1: Odd number of nodes
        ListNode head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
        printList("Test Case 1 (Before):", head1);
        ListNode result1 = deleteMiddle(head1);
        printList("Test Case 1 (After):", result1); // Output: 1 -> 2 -> 4 -> 5

        // Test Case 2: Even number of nodes
        ListNode head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));
        printList("Test Case 2 (Before):", head2);
        ListNode result2 = deleteMiddle(head2);
        printList("Test Case 2 (After):", result2); // Output: 1 -> 2 -> 4

        // Test Case 3: Single node
        ListNode head3 = new ListNode(1);
        printList("Test Case 3 (Before):", head3);
        ListNode result3 = deleteMiddle(head3);
        printList("Test Case 3 (After):", result3); // Output: null
    }

    public static ListNode deleteMiddle(ListNode head) {
        if (head == null || head.next == null) {
            return null;
        }
        ListNode slow = head;
        ListNode fast = head.next.next;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
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