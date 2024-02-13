class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

function getIntersectionNode(headA, headB) {
    if (!headA || !headB) {
        return null;
    }
    let a = headA;
    let b = headB;
    while (a !== b) {
        a = a === null ? headB : a.next;
        b = b === null ? headA : b.next;
    }
    return a;
}

function testIntersection(label, headA, headB, expected) {
    process.stdout.write(`${label} `);
    printList(getIntersectionNode(headA, headB));
    console.log(`(Expected: ${expected ? expected.val : 'null'})`);
}

function printList(head) {
    let current = head;
    while (current) {
        process.stdout.write(`${current.val} -> `);
        current = current.next;
    }
    console.log("null");
}

// Test Case 1: Intersecting at node with value 8
const commonNode1 = new ListNode(8, new ListNode(4, new ListNode(5)));
const headA1 = new ListNode(4, new ListNode(1, commonNode1));
const headB1 = new ListNode(5, new ListNode(6, new ListNode(1, commonNode1)));
testIntersection("Test Case 1:", headA1, headB1, commonNode1);  // Output: 8 -> 4 -> 5

// Test Case 2: No intersection
const headA2 = new ListNode(2, new ListNode(6, new ListNode(4)));
const headB2 = new ListNode(1, new ListNode(5));
testIntersection("Test Case 2:", headA2, headB2, null);  // Output: null

// Test Case 3: Intersecting at node with value 2
const commonNode3 = new ListNode(2, new ListNode(4, new ListNode(5)));
const headA3 = new ListNode(1, new ListNode(9, new ListNode(1, commonNode3)));
const headB3 = new ListNode(3, commonNode3);
testIntersection("Test Case 3:", headA3, headB3, commonNode3);  // Output: 2 -> 4 -> 5
