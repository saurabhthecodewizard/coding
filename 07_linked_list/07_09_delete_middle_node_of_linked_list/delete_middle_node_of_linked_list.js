class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

function deleteMiddle(head) {
    if (!head || !head.next) {
        return null;
    }

    let slow = head;
    let fast = head.next.next;

    while (fast && fast.next) {
        slow = slow.next;
        fast = fast.next.next;
    }

    slow.next = slow.next.next;
    return head;
}

// Helper function to print the linked list
function printList(label, head) {
    process.stdout.write(`${label} `);
    let current = head;
    while (current) {
        process.stdout.write(`${current.val} `);
        current = current.next;
    }
    console.log();
}

// Test Case 1: Odd number of nodes
const head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
printList("Test Case 1 (Before):", head1);
const result1 = deleteMiddle(head1);
printList("Test Case 1 (After):", result1);  // Output: 1 -> 2 -> 4 -> 5

// Test Case 2: Even number of nodes
const head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));
printList("Test Case 2 (Before):", head2);
const result2 = deleteMiddle(head2);
printList("Test Case 2 (After):", result2);  // Output: 1 -> 2 -> 4

// Test Case 3: Single node
const head3 = new ListNode(1);
printList("Test Case 3 (Before):", head3);
const result3 = deleteMiddle(head3);
printList("Test Case 3 (After):", result3);  // Output: null
