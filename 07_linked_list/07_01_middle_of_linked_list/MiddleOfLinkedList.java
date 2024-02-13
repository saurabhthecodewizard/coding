public class MiddleOfLinkedList {
    public static void main(String[] args) {
        // Test Case 1: Odd number of nodes
        ListNode head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
        System.out.println("Middle Node Test Case 1: " + middleNode(head1).val); // Output: 3

        // Test Case 2: Even number of nodes
        ListNode head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));
        System.out.println("Middle Node Test Case 2: " + middleNode(head2).val); // Output: 3

        // Test Case 3: Single node
        ListNode head3 = new ListNode(1);
        System.out.println("Middle Node Test Case 3: " + middleNode(head3).val); // Output: 1

        // Test Case 4: Empty list
        ListNode head4 = null;
        System.out.println("Middle Node Test Case 4: " + middleNode(head4)); // Output: null
    }

    public static ListNode middleNode(ListNode head) {
        ListNode fast = head;
        ListNode slow = head;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
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