class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

function oddEvenList(head) {
    if (!head || !head.next) {
        return head;
    }

    let odd = head;
    let even = head.next;
    let evenHead = head.next;
    while (even && even.next) {
        odd.next = odd.next.next;
        even.next = even.next.next;
        odd = odd.next;
        even = even.next;
    }

    odd.next = evenHead;
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

// Test Case 1: Odd and even number of nodes
const head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(6))))));
printList("Test Case 1 (Before):", head1);
const result1 = oddEvenList(head1);
printList("Test Case 1 (After):", result1);  // Output: 1 -> 3 -> 5 -> 2 -> 4 -> 6

// Test Case 2: Odd number of nodes
const head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
printList("Test Case 2 (Before):", head2);
const result2 = oddEvenList(head2);
printList("Test Case 2 (After):", result2);  // Output: 1 -> 3 -> 5 -> 2 -> 4

// Test Case 3: Even number of nodes
const head3 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));
printList("Test Case 3 (Before):", head3);
const result3 = oddEvenList(head3);
printList("Test Case 3 (After):", result3);  // Output: 1 -> 3 -> 2 -> 4

// Test Case 4: Single node
const head4 = new ListNode(1);
printList("Test Case 4 (Before):", head4);
const result4 = oddEvenList(head4);
printList("Test Case 4 (After):", result4);  // Output: 1

// Test Case 5: Empty list
const head5 = null;
printList("Test Case 5 (Before):", head5);
const result5 = oddEvenList(head5);
printList("Test Case 5 (After):", result5);  // Output: null
