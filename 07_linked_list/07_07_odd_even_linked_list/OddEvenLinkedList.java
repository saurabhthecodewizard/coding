public class OddEvenLinkedList {
    public static void main(String[] args) {
        // Test Case 1: Odd and even number of nodes
        ListNode head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(6))))));
        printList("Test Case 1 (Before):", head1);
        ListNode result1 = oddEvenList(head1);
        printList("Test Case 1 (After):", result1);  // Output: 1 -> 3 -> 5 -> 2 -> 4 -> 6

        // Test Case 2: Odd number of nodes
        ListNode head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
        printList("Test Case 2 (Before):", head2);
        ListNode result2 = oddEvenList(head2);
        printList("Test Case 2 (After):", result2);  // Output: 1 -> 3 -> 5 -> 2 -> 4

        // Test Case 3: Even number of nodes
        ListNode head3 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));
        printList("Test Case 3 (Before):", head3);
        ListNode result3 = oddEvenList(head3);
        printList("Test Case 3 (After):", result3);  // Output: 1 -> 3 -> 2 -> 4

        // Test Case 4: Single node
        ListNode head4 = new ListNode(1);
        printList("Test Case 4 (Before):", head4);
        ListNode result4 = oddEvenList(head4);
        printList("Test Case 4 (After):", result4);  // Output: 1

        // Test Case 5: Empty list
        ListNode head5 = null;
        printList("Test Case 5 (Before):", head5);
        ListNode result5 = oddEvenList(head5);
        printList("Test Case 5 (After):", result5);  // Output: null
    }

    public static ListNode oddEvenList(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }
        ListNode odd = head;
        ListNode even = head.next;
        ListNode evenHead = head.next;
        while (even != null && even.next != null) {
            odd.next = odd.next.next;
            even.next = even.next.next;
            odd = odd.next;
            even = even.next;
        }
        odd.next = evenHead;
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