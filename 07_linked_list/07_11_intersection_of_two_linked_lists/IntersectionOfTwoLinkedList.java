public class IntersectionOfTwoLinkedList {
    public static void main(String[] args) {
        // Test Case 1: Intersecting at node with value 8
        ListNode commonNode = new ListNode(8, new ListNode(4, new ListNode(5)));
        ListNode headA1 = new ListNode(4, new ListNode(1, commonNode));
        ListNode headB1 = new ListNode(5, new ListNode(6, new ListNode(1, commonNode)));
        testIntersection("Test Case 1:", headA1, headB1, commonNode); // Output: 8 -> 4 -> 5

        // Test Case 2: No intersection
        ListNode headA2 = new ListNode(2, new ListNode(6, new ListNode(4)));
        ListNode headB2 = new ListNode(1, new ListNode(5));
        testIntersection("Test Case 2:", headA2, headB2, null); // Output: null

        // Test Case 3: Intersecting at node with value 2
        ListNode commonNode3 = new ListNode(2, new ListNode(4, new ListNode(5)));
        ListNode headA3 = new ListNode(1, new ListNode(9, new ListNode(1, commonNode3)));
        ListNode headB3 = new ListNode(3, commonNode3);
        testIntersection("Test Case 3:", headA3, headB3, commonNode3); // Output: 2 -> 4 -> 5
    }

    public static ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if (headA == null || headB == null) {
            return null;
        }
        ListNode a = headA;
        ListNode b = headB;
        while (a != b) {
            a = a == null ? headB : a.next;
            b = b == null ? headA : b.next;
        }
        return a;
    }

    private static void testIntersection(String label, ListNode headA, ListNode headB, ListNode expected) {
        System.out.print(label + " ");
        ListNode intersectionNode = getIntersectionNode(headA, headB);
        printList(intersectionNode);
        System.out.println(" (Expected: " + (expected != null ? expected.val : "null") + ")");
    }

    private static void printList(ListNode head) {
        ListNode current = head;
        while (current != null) {
            System.out.print(current.val + " -> ");
            current = current.next;
        }
        System.out.println("null");
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