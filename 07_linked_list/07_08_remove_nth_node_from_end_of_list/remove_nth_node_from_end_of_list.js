class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

function removeNthFromEnd(head, n) {
    let slow = head;
    let fast = head;

    // Move fast pointer n nodes ahead
    for (let i = 0; i < n; i++) {
        fast = fast.next;
    }

    // If fast pointer becomes null, remove the first node
    if (!fast) {
        return head.next;
    }

    // Move both pointers until fast pointer reaches the end
    while (fast.next) {
        slow = slow.next;
        fast = fast.next;
    }

    // Remove the nth node from the end
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

// Test Case 1: Remove the second node from the end
const head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
printList("Test Case 1 (Before):", head1);
const result1 = removeNthFromEnd(head1, 2);
printList("Test Case 1 (After):", result1);  // Output: 1 -> 2 -> 3 -> 5

// Test Case 2: Remove the first node from the end
const head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
printList("Test Case 2 (Before):", head2);
const result2 = removeNthFromEnd(head2, 5);
printList("Test Case 2 (After):", result2);  // Output: 2 -> 3 -> 4 -> 5

// Test Case 3: Remove the only node
const head3 = new ListNode(1);
printList("Test Case 3 (Before):", head3);
const result3 = removeNthFromEnd(head3, 1);
printList("Test Case 3 (After):", result3);  // Output: null
