class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

function middleNode(head) {
    let slow = head;
    let fast = head;
    while (fast && fast.next) {
        slow = slow.next;
        fast = fast.next.next;
    }
    return slow;
}

// Test Case 1: Odd number of nodes
const head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
console.log("Middle Node Test Case 1:", middleNode(head1).val);  // Output: 3

// Test Case 2: Even number of nodes
const head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));
console.log("Middle Node Test Case 2:", middleNode(head2).val);  // Output: 3

// Test Case 3: Single node
const head3 = new ListNode(1);
console.log("Middle Node Test Case 3:", middleNode(head3).val);  // Output: 1

// Test Case 4: Empty list
const head4 = null;
console.log("Middle Node Test Case 4:", middleNode(head4));  // Output: null

