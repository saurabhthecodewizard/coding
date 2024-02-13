public class LinkedListCycle {
    public static void main(String[] args) {
        // Test Case 1: Cycle present
        ListNode head1 = new ListNode(1);
        ListNode node2 = new ListNode(2);
        ListNode node3 = new ListNode(3);
        head1.next = node2;
        node2.next = node3;
        node3.next = node2; // Creating a cycle
        System.out.println("Test Case 1: " + hasCycle(head1)); // Output: true

        // Test Case 2: No cycle
        ListNode head2 = new ListNode(1, new ListNode(2, new ListNode(3)));
        System.out.println("Test Case 2: " + hasCycle(head2)); // Output: false

        // Test Case 3: Single node with a cycle
        ListNode head3 = new ListNode(1);
        head3.next = head3; // Creating a cycle
        System.out.println("Test Case 3: " + hasCycle(head3)); // Output: true

        // Test Case 4: Single node without a cycle
        ListNode head4 = new ListNode(1);
        System.out.println("Test Case 4: " + hasCycle(head4)); // Output: false

        // Test Case 5: Empty list
        ListNode head5 = null;
        System.out.println("Test Case 5: " + hasCycle(head5)); // Output: false
    }

    public static Boolean hasCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
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