class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
}

class SortList {
    sortList(head) {
        if (!head || !head.next) {
            return head;
        }

        // Find the middle of the list
        let slow = head;
        let fast = head.next;
        while (fast && fast.next) {
            slow = slow.next;
            fast = fast.next.next;
        }

        // Split the list into two halves
        let secondHalf = slow.next;
        slow.next = null;

        // Recursively sort the two halves
        let firstHalf = this.sortList(head);
        let secondHalfSorted = this.sortList(secondHalf);

        // Merge the sorted halves
        return this.merge(firstHalf, secondHalfSorted);
    }

    merge(first, second) {
        const union = new ListNode(0);
        let trav = union;

        while (first && second) {
            if (first.val < second.val) {
                trav.next = first;
                first = first.next;
            } else {
                trav.next = second;
                second = second.next;
            }
            trav = trav.next;
        }

        if (first) {
            trav.next = first;
        }
        if (second) {
            trav.next = second;
        }

        return union.next;
    }
}

function printList(label, head) {
    process.stdout.write(`${label} `);
    let current = head;
    while (current) {
        process.stdout.write(`${current.val} `);
        current = current.next;
    }
    console.log();
}

// Test Case 1: Random unsorted list
const head1 = new ListNode(4, new ListNode(2, new ListNode(1, new ListNode(3))));
printList("Test Case 1 (Before):", head1);
const sorter = new SortList();
const result1 = sorter.sortList(head1);
printList("Test Case 1 (After):", result1);  // Output: 1 -> 2 -> 3 -> 4

// Test Case 2: Already sorted list
const head2 = new ListNode(1, new ListNode(2, new ListNode(8, new ListNode(4))));
printList("Test Case 2 (Before):", head2);
const result2 = sorter.sortList(head2);
printList("Test Case 2 (After):", result2);  // Output: 1 -> 2 -> 4 -> 8

// Test Case 3: Single node
const head3 = new ListNode(5);
printList("Test Case 3 (Before):", head3);
const result3 = sorter.sortList(head3);
printList("Test Case 3 (After):", result3);  // Output: 5
