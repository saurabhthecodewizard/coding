class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

function reverseList(head) {
    let prev = null;
    let current = head;
    while (current !== null) {
        const nextNode = current.next;
        current.next = prev;
        prev = current;
        current = nextNode;
    }
    return prev;
}

// Example usage
const head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
process.stdout.write("Before reverse: ");
let trav = head;
while (trav !== null) {
    process.stdout.write(trav.val + " ");
    trav = trav.next;
}
console.log();

const reversedHead = reverseList(head);

// Print the reversed list for verification
process.stdout.write("After reverse: ");
let reversedTrav = reversedHead;
while (reversedTrav !== null) {
    process.stdout.write(reversedTrav.val + " ");
    reversedTrav = reversedTrav.next;
}
console.log();
