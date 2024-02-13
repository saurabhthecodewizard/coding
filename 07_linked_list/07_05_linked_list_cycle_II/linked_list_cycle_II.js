class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

function detectCycle(head) {
    let slow = head;
    let fast = head;
    while (fast !== null && fast.next !== null) {
        slow = slow.next;
        fast = fast.next.next;
        if (slow === fast) {
            slow = head;
            while (slow !== fast) {
                slow = slow.next;
                fast = fast.next;
            }
            return slow;
        }
    }
    return null;
}

// Test Case 1: Cycle present
const head1 = new ListNode(1);
const node2 = new ListNode(2);
const node3 = new ListNode(3);
const node4 = new ListNode(4);
const node5 = new ListNode(5);
head1.next = node2;
node2.next = node3;
node3.next = node4;
node4.next = node5;
node5.next = node2;  // Creating a cycle
console.log("Test Case 1:", detectCycle(head1).val);  // Output: 2

// Test Case 2: No cycle
const head2 = new ListNode(1, new ListNode(2, new ListNode(3)));
console.log("Test Case 2:", detectCycle(head2));  // Output: null

// Test Case 3: Single node with a cycle
const head3 = new ListNode(1);
head3.next = head3;  // Creating a cycle
console.log("Test Case 3:", detectCycle(head3).val);  // Output: 1

// Test Case 4: Single node without a cycle
const head4 = new ListNode(1);
console.log("Test Case 4:", detectCycle(head4));  // Output: null

// Test Case 5: Empty list
const head5 = null;
console.log("Test Case 5:", detectCycle(head5));  // Output: null
