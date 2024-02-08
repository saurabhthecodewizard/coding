class SlNode {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

class SinglyLinkedList {
    constructor() {
        this.head = null;
        this.count = 0;
    }

    isEmpty() {
        return this.head === null;
    }

    addFirst(data) {
        const newNode = new SlNode(data);
        if (this.head === null) {
            this.head = newNode;
        } else {
            newNode.next = this.head;
            this.head = newNode;
        }
        this.count++;
    }

    removeFirst() {
        if (this.isEmpty()) {
            throw new Error("List is empty!");
        }
        this.head = this.head.next;
        this.count--;
    }

    addLast(data) {
        const newNode = new SlNode(data);
        if (this.head === null) {
            this.head = newNode;
        } else {
            let trav = this.head;
            while (trav.next !== null) {
                trav = trav.next;
            }
            trav.next = newNode;
        }
        this.count++;
    }

    removeLast() {
        if (this.isEmpty()) {
            throw new Error("List is empty!");
        }
        if (this.head.next === null) {
            this.head = null;
        } else {
            let trav = this.head;
            while (trav.next.next !== null) {
                trav = trav.next;
            }
            trav.next = null;
        }
        this.count--;
    }

    addAt(index, data) {
        if (index < 1 || index > this.count + 1) {
            throw new Error("Invalid index");
        }
        if (index === 1) {
            this.addFirst(data);
        } else {
            const newNode = new SlNode(data);
            let trav = this.head;
            for (let i = 1; i < index - 1; i++) {
                trav = trav.next;
            }
            newNode.next = trav.next;
            trav.next = newNode;
            this.count++;
        }
    }

    removeAt(index) {
        if (index < 1 || index > this.count) {
            throw new Error("Invalid index");
        }
        if (index === 1) {
            this.removeFirst();
        } else {
            let trav = this.head;
            for (let i = 1; i < index - 1; i++) {
                trav = trav.next;
            }
            trav.next = trav.next.next;
            this.count--;
        }
    }

    reverse() {
        if (this.head === null || this.head.next === null) {
            return;
        }
        let prev = null;
        let current = this.head;
        let nextNode = this.head;
        while (nextNode !== null) {
            nextNode = nextNode.next;
            current.next = prev;
            prev = current;
            current = nextNode;
        }
        this.head = prev;
    }

    display() {
        console.log(`No of nodes: ${this.count}`);
        process.stdout.write("Singly Linked List: head");
        let trav = this.head;
        while (trav !== null) {
            process.stdout.write(` -> ${trav.data}`);
            trav = trav.next;
        }
        console.log(" -> tail");
    }
}

class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }
}

class DoublyLinkedList {
    constructor() {
        this.head = null;
        this.count = 0;
    }

    isEmpty() {
        return this.head === null;
    }

    addFirst(data) {
        const newNode = new Node(data);
        if (this.head === null) {
            this.head = newNode;
        } else {
            newNode.next = this.head;
            this.head.prev = newNode;
            this.head = newNode;
        }
        this.count++;
    }

    removeFirst() {
        if (this.head === null) {
            throw new Error("List is empty!");
        }
        if (this.head.next === null) {
            this.head = null;
        } else {
            this.head = this.head.next;
            this.head.prev = null;
        }
        this.count--;
    }

    addLast(data) {
        const newNode = new Node(data);
        if (this.head === null) {
            this.head = newNode;
        } else {
            let trav = this.head;
            while (trav.next !== null) {
                trav = trav.next;
            }
            newNode.prev = trav;
            trav.next = newNode;
        }
        this.count++;
    }

    removeLast() {
        if (this.head === null) {
            throw new Error("List is empty!");
        }
        if (this.head.next === null) {
            this.head = null;
        } else {
            let trav = this.head;
            while (trav.next !== null) {
                trav = trav.next;
            }
            trav.prev.next = null;
        }
        this.count--;
    }

    addAt(index, data) {
        if (index < 1 || index > this.count + 1) {
            throw new Error("Invalid index");
        }
        if (index === 1) {
            this.addFirst(data);
        } else {
            const newNode = new Node(data);
            let trav = this.head;
            let i = 1;
            while (i < index - 1) {
                trav = trav.next;
                i++;
            }
            newNode.prev = trav;
            newNode.next = trav.next;
            trav.next = newNode;
            if (newNode.next !== null) {
                newNode.next.prev = newNode;
            }
            this.count++;
        }
    }

    removeAt(index) {
        if (index < 1 || index > this.count) {
            throw new Error("Invalid index");
        }
        if (index === 1) {
            this.removeFirst();
        } else {
            let trav = this.head;
            let i = 1;
            while (i < index) {
                trav = trav.next;
                i++;
            }
            trav.prev.next = trav.next;
            if (trav.next !== null) {
                trav.next.prev = trav.prev;
            }
            this.count--;
        }
    }

    reverse() {
        if (this.head === null || this.head.next === null) {
            return;
        }
        let prev = null;
        let current = this.head;
        while (current !== null) {
            prev = current.prev;
            current.prev = current.next;
            current.next = prev;
            current = current.prev;
        }
        this.head = prev.prev;
    }

    display() {
        console.log(`No of nodes: ${this.count}`);
        process.stdout.write("Doubly Linked List: head");
        let trav = this.head;
        while (trav !== null) {
            process.stdout.write(` -> ${trav.data}`);
            trav = trav.next;
        }
        console.log(" -> tail");
    }
}


// Creating an instance of the SinglyLinkedList
const linkedList = new DoublyLinkedList();

// Test Case 1: Insertion at the Beginning
linkedList.addFirst(10);
linkedList.display();  // Output: Singly Linked List: head -> 10 -> tail

// Test Case 2: Insertion at a Specific Position (1-based index)
linkedList.addAt(1, 20);
linkedList.display();  // Output: Singly Linked List: head -> 20 -> 10 -> tail

// Test Case 3: Insertion at the End
linkedList.addLast(30);
linkedList.display();  // Output: Singly Linked List: head -> 20 -> 10 -> 30 -> tail

// Test Case 4: Deletion from the Beginning
linkedList.removeFirst();
linkedList.display();  // Output: Singly Linked List: head -> 10 -> 30 -> tail

// Test Case 5: Deletion from a Specific Position (1-based index)
linkedList.removeAt(2);
linkedList.display();  // Output: Singly Linked List: head -> 10 -> tail

// Test Case 6: Deletion from the End
linkedList.removeLast();
linkedList.display();  // Output: Singly Linked List: head -> tail

// Test Case 7: Insertion at the Beginning after Deletion
linkedList.addFirst(5);
linkedList.display();  // Output: Singly Linked List: head -> 5 -> tail

// Test Case 8: Insertion at the Beginning with multiple elements
linkedList.addFirst(15);
linkedList.addFirst(25);
linkedList.display();  // Output: Singly Linked List: head -> 25 -> 15 -> 5 -> tail

// Test Case 9: Insertion at a Specific Position beyond the list size
linkedList.addAt(4, 50);
linkedList.display();  // Output: Singly Linked List: head -> 25 -> 15 -> 5 -> 50 -> tail

// Test Case 10: Reverse the list
linkedList.reverse();
linkedList.display();  // Output: Singly Linked List: head -> 50 -> 5 -> 15 -> 25 -> tail

// Test Case 11: Deletion from a Specific Position beyond the list size
linkedList.removeAt(2);
linkedList.display();  // Output: Singly Linked List: head -> 50 -> 15 -> 25 -> tail

// Test Case 12: Display an empty list
linkedList.removeAt(1);
linkedList.removeLast();
linkedList.removeFirst();
linkedList.display();  // Output: Singly Linked List: head -> tail