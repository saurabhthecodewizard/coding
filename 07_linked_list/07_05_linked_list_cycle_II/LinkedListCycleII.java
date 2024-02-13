public class LinkedListCycleII {
    public static void main(String[] args) {
        // Test Case 1: Cycle present
        ListNode head1 = new ListNode(1);
        ListNode node2 = new ListNode(2);
        ListNode node3 = new ListNode(3);
        ListNode node4 = new ListNode(4);
        ListNode node5 = new ListNode(5);
        head1.next = node2;
        node2.next = node3;
        node3.next = node4;
        node4.next = node5;
        node5.next = node2; // Creating a cycle
        System.out.println("Test Case 1: " + detectCycle(head1).val); // Output: 2

        // Test Case 2: No cycle
        ListNode head2 = new ListNode(1, new ListNode(2, new ListNode(3)));
        System.out.println("Test Case 2: " + detectCycle(head2)); // Output: null

        // Test Case 3: Single node with a cycle
        ListNode head3 = new ListNode(1);
        head3.next = head3; // Creating a cycle
        System.out.println("Test Case 3: " + detectCycle(head3).val); // Output: 1

        // Test Case 4: Single node without a cycle
        ListNode head4 = new ListNode(1);
        System.out.println("Test Case 4: " + detectCycle(head4)); // Output: null

        // Test Case 5: Empty list
        ListNode head5 = null;
        System.out.println("Test Case 5: " + detectCycle(head5)); // Output: null
    }

    public static ListNode detectCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
            if (slow == fast) {
                slow = head;
                while (slow != fast) {
                    slow = slow.next;
                    fast = fast.next;
                }
                return slow;
            }
        }
        return null;
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