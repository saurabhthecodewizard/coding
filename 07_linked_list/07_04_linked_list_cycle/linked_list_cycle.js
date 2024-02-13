class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

function hasCycle(head) {
    let slow = head;
    let fast = head;
    while (fast !== null && fast.next !== null) {
        slow = slow.next;
        fast = fast.next.next;
        if (slow === fast) {
            return true;
        }
    }
    return false;
}

// Test Case 1: Cycle present
const head1 = new ListNode(1);
const node2 = new ListNode(2);
const node3 = new ListNode(3);
head1.next = node2;
node2.next = node3;
node3.next = node2;  // Creating a cycle
console.log("Test Case 1:", hasCycle(head1));  // Output: true

// Test Case 2: No cycle
const head2 = new ListNode(1, new ListNode(2, new ListNode(3)));
console.log("Test Case 2:", hasCycle(head2));  // Output: false

// Test Case 3: Single node with a cycle
const head3 = new ListNode(1);
head3.next = head3;  // Creating a cycle
console.log("Test Case 3:", hasCycle(head3));  // Output: true

// Test Case 4: Single node without a cycle
const head4 = new ListNode(1);
console.log("Test Case 4:", hasCycle(head4));  // Output: false

// Test Case 5: Empty list
const head5 = null;
console.log("Test Case 5:", hasCycle(head5));  // Output: false
