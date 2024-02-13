class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

function addTwoNumbers(l1, l2) {
    const head = new ListNode();
    let trav = head;

    let carryOver = 0;

    while (l1 || l2 || carryOver === 1) {
        let sumVal = 0;

        if (l1) {
            sumVal += l1.val;
            l1 = l1.next;
        }

        if (l2) {
            sumVal += l2.val;
            l2 = l2.next;
        }

        sumVal += carryOver;
        carryOver = Math.floor(sumVal / 10);

        trav.next = new ListNode(sumVal % 10);
        trav = trav.next;
    }

    return head.next;
}

function testAddition(label, l1, l2) {
    process.stdout.write(`${label} `);
    printList(addTwoNumbers(l1, l2));
    console.log();
}

function printList(head) {
    let current = head;
    while (current) {
        process.stdout.write(`${current.val} -> `);
        current = current.next;
    }
    console.log("null");
}

// Test Case 1: Normal addition
const l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
const l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
testAddition("Test Case 1:", l1, l2);  // Output: 7 -> 0 -> 8

// Test Case 2: Unequal lengths with carry-over
const l3 = new ListNode(9, new ListNode(9, new ListNode(9)));
const l4 = new ListNode(1);
testAddition("Test Case 2:", l3, l4);  // Output: 0 -> 0 -> 0 -> 1

// Test Case 3: One list is empty
const l5 = new ListNode(1, new ListNode(8, new ListNode(2)));
const l6 = null;
testAddition("Test Case 3:", l5, l6);  // Output: 1 -> 8 -> 2

// Test Case 4: Both lists are empty
const l7 = null;
const l8 = null;
testAddition("Test Case 4:", l7, l8);  // Output: null
