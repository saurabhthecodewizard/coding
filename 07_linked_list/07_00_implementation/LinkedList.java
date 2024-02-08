public class LinkedList {
    public static void main(String[] args) {
        DoublyLinkedList linkedList = new DoublyLinkedList();

        // Test Case 1: Insertion at the Beginning
        linkedList.addFirst(10);
        linkedList.display(); // Output: Singly Linked List -> 10

        // Test Case 2: Insertion at a Specific Position (0-based index)
        linkedList.addAt(1, 20);
        linkedList.display(); // Output: Singly Linked List -> 20 -> 10

        // Test Case 3: Insertion at the End
        linkedList.addLast(30);
        linkedList.display(); // Output: Singly Linked List -> 20 -> 10 -> 30

        // Test Case 4: Deletion from the Beginning
        linkedList.removeFirst();
        linkedList.display(); // Output: Singly Linked List -> 10 -> 30

        // Test Case 5: Deletion from a Specific Position (0-based index)
        linkedList.removeAt(2);
        linkedList.display(); // Output: Singly Linked List -> 10

        // Test Case 6: Deletion from the End
        linkedList.removeLast();
        linkedList.display(); // Output: Singly Linked List (empty)

        // Test Case 7: Insertion at the Beginning after Deletion
        linkedList.addFirst(5);
        linkedList.display(); // Output: Singly Linked List -> 5

        // Test Case 8: Insertion at the Beginning with multiple elements
        linkedList.addFirst(15);
        linkedList.addFirst(25);
        linkedList.display(); // Output: Singly Linked List -> 25 -> 15 -> 5

        // Test Case 9: Insertion at a Specific Position beyond the list size
        linkedList.addAt(4, 50);
        linkedList.display(); // Output: Singly Linked List -> 25 -> 15 -> 5 -> 50

        // Test Case 10: Reverse the list
        linkedList.reverse();
        linkedList.display(); // Output: Singly Linked List -> 50 -> 5 -> 15 -> 50

        // Test Case 11: Deletion from a Specific Position beyond the list size
        linkedList.removeAt(2);
        linkedList.display(); // Output: Singly Linked List -> 50 -> 5 -> 25

        // Test Case 12: Display an empty list
        linkedList.removeAt(1);
        linkedList.removeLast();
        linkedList.removeFirst();
        linkedList.display(); // Output: Singly Linked List (empty)
    }
}

class SinglyLinkedList {
    static class Node {
        int data;
        Node next;

        public Node() {
            this.data = 0;
            this.next = null;
        }

        public Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    private Node head;
    private int count;

    public SinglyLinkedList() {
        this.head = null;
        this.count = 0;
    }

    public boolean isEmpty() {
        return this.head == null;
    }

    public void addAt(int position, int data) {
        if (position < 1 || position > this.count + 1) {
            throw new RuntimeException("Invalid position: " + position);
        }
        if (position == 1) {
            addFirst(data);
            return;
        }
        Node newNode = new Node(data);
        Node trav = head;
        for (int i = 1; i < position - 1; i++) {
            trav = trav.next;
        }
        newNode.next = trav.next;
        trav.next = newNode;
        this.count++;
    }

    public void removeAt(int position) {
        if (position < 1 || position > this.count) {
            throw new RuntimeException("Invalid position: " + position);
        }
        if (position == 1) {
            removeFirst();
            return;
        }
        Node trav = head;
        for (int i = 1; i < position - 1; i++) {
            trav = trav.next;
        }
        if (trav.next == null) {
            return;
        }
        trav.next = trav.next.next;
        this.count--;
    }

    public void addFirst(int data) {
        Node newNode = new Node(data);
        if (this.head == null) {
            head = newNode;
        } else {
            newNode.next = this.head;
            this.head = newNode;
        }
        this.count++;
    }

    public void removeFirst() {
        this.head = this.head.next;
        this.count--;
    }

    public void addLast(int data) {
        Node newNode = new Node(data);
        Node trav = head;
        while (trav.next != null) {
            trav = trav.next;
        }
        trav.next = newNode;
        this.count++;
    }

    public void removeLast() {
        if (isEmpty()) {
            throw new RuntimeException("List is empty!");
        }
        if (this.head.next == null) {
            head = null;
        } else {
            Node trav = head;
            while (trav.next.next != null) {
                trav = trav.next;
            }
            trav.next = null;
        }
        this.count--;
    }

    public void reverse() {
        if (isEmpty()) {
            throw new RuntimeException("List is empty!");
        }
        Node previous = null;
        Node current = head;
        Node next = head;
        while (next != null) {
            next = next.next;
            current.next = previous;
            previous = current;
            current = next;
        }
        this.head = previous;
    }

    public void display() {
        System.out.println("No of nodes: " + this.count);
        System.out.print("Singly Linked List: head");
        for (Node trav = head; trav != null; trav = trav.next) {
            System.out.print(" -> " + trav.data);
        }
        System.out.print(" -> tail");
        System.out.println();
    }
}

class DoublyLinkedList {
    static class Node {
        private int data;
        private Node prev;
        private Node next;

        public Node(int data) {
            this.data = data;
            this.prev = null;
            this.next = null;
        }

    }

    private Node head;
    private int count;

    public DoublyLinkedList() {
        head = null;
    }

    public boolean isEmpty() {
        return head == null;
    }

    public void display() {
        System.out.println("No. of nodes: " + this.count);
        System.out.print("Doubly Linked List: head");
        Node trav = head;
        while (trav != null) {
            System.out.print(" -> " + trav.data);
            trav = trav.next;
        }
        System.out.print(" -> tail");
        System.out.println();
    }

    public void addFirst(int data) {
        Node newNode = new Node(data);
        if (isEmpty()) {
            this.head = newNode;
        } else {
            this.head.prev = newNode;
            newNode.next = this.head;
            this.head = newNode;
        }
        this.count++;
    }

    public void removeFirst() {
        if (isEmpty()) {
            throw new RuntimeException("List is empty!");
        }
        if (this.head.next == null) {
            this.head = null;
        } else {
            this.head.next.prev = null;
            this.head = this.head.next;
        }
        this.count--;
    }

    public void addLast(int data) {
        Node newNode = new Node(data);
        if (isEmpty()) {
            this.head = newNode;
        } else {
            Node trav = head;
            while (trav.next != null) {
                trav = trav.next;
            }
            newNode.prev = trav;
            trav.next = newNode;
        }
        this.count++;
    }

    public void removeLast() {
        if (isEmpty()) {
            throw new RuntimeException("List is empty!");
        }
        if (this.head.next == null) {
            head = null;
        } else {
            Node trav = head;
            while (trav.next != null) {
                trav = trav.next;
            }
            trav.prev.next = null;
        }
        this.count--;
    }

    public void addAt(int index, int data) {
        if (index < 1 || index > this.count + 1) {
            throw new RuntimeException("Invalid index: " + index);
        }
        if (index == 1) {
            addFirst(data);
            return;
        }
        Node newNode = new Node(data);
        Node trav = this.head;
        for (int i = 1; i < index - 1; i++) {
            trav = trav.next;
        }
        newNode.prev = trav;
        newNode.next = trav.next;
        if (trav.next != null) {
            trav.next.prev = newNode;
        }
        trav.next = newNode;
        this.count++;
    }

    public void removeAt(int index) {
        if (index < 1 || index > this.count) {
            throw new RuntimeException("Invalid index: " + index);
        }
        if (index == 1) {
            removeFirst();
            return;
        }
        Node trav = head;
        for (int i = 1; i < index; i++) {
            trav = trav.next;
        }
        trav.prev.next = trav.next;
        if (trav.next != null) {
            trav.next.prev = trav.prev;
        }
        this.count--;
    }

    public void reverse() {
        if (head.next == null) {
            return;
        }
        Node current = head;
        Node prev = null;

        while (current != null) {
            prev = current.prev;
            current.prev = current.next;
            current.next = prev;
            current = current.prev;
        }

        this.head = prev.prev;
    }
}
