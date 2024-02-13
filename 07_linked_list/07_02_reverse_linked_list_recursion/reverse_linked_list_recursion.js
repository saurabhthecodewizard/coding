class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

function reverseList(head) {
    if (head == null || head.next == null) {
        return head;
    }
    const reversed = reverseList(head.next);
    head.next.next = head;
    head.next = null;
    return reversed;
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
