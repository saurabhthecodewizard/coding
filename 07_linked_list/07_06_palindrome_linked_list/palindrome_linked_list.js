class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

function isPalindrome(head) {
    if (!head || !head.next) {
        return true;
    }

    let slow = head;
    let fast = head;
    while (fast.next && fast.next.next) {
        slow = slow.next;
        fast = fast.next.next;
    }

    let reversedHead = reverse(slow.next);
    let first = head;
    let second = reversedHead;
    while (second) {
        if (first.val !== second.val) {
            reverse(reversedHead);
            return false;
        }
        first = first.next;
        second = second.next;
    }

    reverse(reversedHead);
    return true;
}

function reverse(head) {
    let prev = null;
    let current = head;
    let nextNode = head;
    while (nextNode) {
        nextNode = nextNode.next;
        current.next = prev;
        prev = current;
        current = nextNode;
    }
    return prev;
}

// Test Case 1: Palindrome with even number of nodes
const head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(3, new ListNode(2, new ListNode(1))))));
console.log("Test Case 1:", isPalindrome(head1));  // Output: true

// Test Case 2: Palindrome with odd number of nodes
const head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(2, new ListNode(1)))));
console.log("Test Case 2:", isPalindrome(head2));  // Output: true

// Test Case 3: Not a palindrome
const head3 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
console.log("Test Case 3:", isPalindrome(head3));  // Output: false

// Test Case 4: Single node
const head4 = new ListNode(1);
console.log("Test Case 4:", isPalindrome(head4));  // Output: true

// Test Case 5: Empty list
const head5 = null;
console.log("Test Case 5:", isPalindrome(head5));  // Output: true
