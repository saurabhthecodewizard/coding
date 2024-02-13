public class AddTwoNumbers {
    public static void main(String[] args) {
        // Test Case 1: Normal addition
        ListNode l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
        ListNode l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
        testAddition("Test Case 1:", l1, l2); // Output: 7 -> 0 -> 8

        // Test Case 2: Unequal lengths with carry-over
        ListNode l3 = new ListNode(9, new ListNode(9, new ListNode(9)));
        ListNode l4 = new ListNode(1);
        testAddition("Test Case 2:", l3, l4); // Output: 0 -> 0 -> 0 -> 1

        // Test Case 3: One list is empty
        ListNode l5 = new ListNode(1, new ListNode(8, new ListNode(2)));
        ListNode l6 = null;
        testAddition("Test Case 3:", l5, l6); // Output: 1 -> 8 -> 2

        // Test Case 4: Both lists are empty
        ListNode l7 = null;
        ListNode l8 = null;
        testAddition("Test Case 4:", l7, l8); // Output: null
    }

    public static ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode head = new ListNode();
        ListNode trav = head;

        int carryOver = 0;

        while (l1 != null || l2 != null || carryOver == 1) {
            int sum = 0;

            if (l1 != null) {
                sum += l1.val;
                l1 = l1.next;
            }

            if (l2 != null) {
                sum += l2.val;
                l2 = l2.next;
            }

            sum += carryOver;
            carryOver = sum / 10;

            trav.next = new ListNode(sum % 10);
            trav = trav.next;
        }

        return head.next;
    }

    private static void testAddition(String label, ListNode l1, ListNode l2) {
        System.out.print(label + " ");
        printList(addTwoNumbers(l1, l2));
        System.out.println();
    }

    private static void printList(ListNode head) {
        ListNode current = head;
        while (current != null) {
            System.out.print(current.val + " -> ");
            current = current.next;
        }
        System.out.print("null");
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