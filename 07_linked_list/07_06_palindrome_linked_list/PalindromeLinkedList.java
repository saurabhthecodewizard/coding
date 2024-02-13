public class PalindromeLinkedList {
    public static void main(String[] args) {
        // Test Case 1: Palindrome with even number of nodes
        ListNode head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(3, new ListNode(2, new ListNode(1))))));
        System.out.println("Test Case 1: " + isPalindrome(head1));  // Output: true

        // Test Case 2: Palindrome with odd number of nodes
        ListNode head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(2, new ListNode(1)))));
        System.out.println("Test Case 2: " + isPalindrome(head2));  // Output: true

        // Test Case 3: Not a palindrome
        ListNode head3 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
        System.out.println("Test Case 3: " + isPalindrome(head3));  // Output: false

        // Test Case 4: Single node
        ListNode head4 = new ListNode(1);
        System.out.println("Test Case 4: " + isPalindrome(head4));  // Output: true

        // Test Case 5: Empty list
        ListNode head5 = null;
        System.out.println("Test Case 5: " + isPalindrome(head5));  // Output: true
    }

    public static boolean isPalindrome(ListNode head) {
        if (head == null || head.next == null) {
            return true;
        }
        ListNode slow = head;
        ListNode fast = head;
        while (fast.next != null && fast.next.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode reversedHead = reverse(slow.next);
        ListNode first = head;
        ListNode second = reversedHead;
        while (second != null) {
            if (first.val != second.val) {
                reverse(reversedHead);
                return false;
            }
            first = first.next;
            second = second.next;
        }
        reverse(reversedHead);
        return true;
    }

    public static ListNode reverse(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }
        ListNode prev = null;
        ListNode curr = head;
        ListNode next = head;
        while (next != null) {
            next = next.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
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