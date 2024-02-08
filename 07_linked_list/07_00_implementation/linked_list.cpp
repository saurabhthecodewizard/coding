#include <bits/stdc++.h>

class SinglyLinkedList {
private:
    class Node {
    public:
        int data;
        Node* next;

        Node(int data) : data(data), next(nullptr) {}
    };

    Node* head;
    int count;

public:
    SinglyLinkedList() : head(nullptr), count(0) {}

    bool isEmpty() const {
        return head == nullptr;
    }

    void addFirst(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        count++;
    }

    void removeFirst() {
        if (isEmpty()) {
            throw std::out_of_range("List is empty!");
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        count--;
    }

    void addLast(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            head = newNode;
        } else {
            Node* trav = head;
            while (trav->next != nullptr) {
                trav = trav->next;
            }
            trav->next = newNode;
        }
        count++;
    }

    void removeLast() {
        if (isEmpty()) {
            throw std::out_of_range("List is empty!");
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
        } else {
            Node* trav = head;
            while (trav->next->next != nullptr) {
                trav = trav->next;
            }
            delete trav->next;
            trav->next = nullptr;
        }
        count--;
    }

    void addAt(int index, int data) {
        if (index < 1 || index > count + 1) {
            throw std::out_of_range("Invalid index");
        }
        if (index == 1) {
            addFirst(data);
        } else {
            Node* newNode = new Node(data);
            Node* trav = head;
            for (int i = 1; i < index - 1; i++) {
                trav = trav->next;
            }
            newNode->next = trav->next;
            trav->next = newNode;
            count++;
        }
    }

    void removeAt(int index) {
        if (index < 1 || index > count) {
            throw std::out_of_range("Invalid index");
        }
        if (index == 1) {
            removeFirst();
        } else {
            Node* trav = head;
            for (int i = 1; i < index - 1; i++) {
                trav = trav->next;
            }
            Node* temp = trav->next;
            trav->next = temp->next;
            delete temp;
            count--;
        }
    }

    void reverse() {
        if (isEmpty() || head->next == nullptr) {
            return;
        }
        Node* prev = nullptr;
        Node* current = head;
        Node* nextNode = head;
        while (nextNode != nullptr) {
            nextNode = nextNode->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;
    }

    void display() {
        std::cout << "No of nodes: " << count << std::endl;
        std::cout << "Singly Linked List: head";
        Node* trav = head;
        while (trav != nullptr) {
            std::cout << " -> " << trav->data;
            trav = trav->next;
        }
        std::cout << " -> tail" << std::endl;
    }
};

class DoublyLinkedList {
private:
    class Node {
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int value) : data(value), next(nullptr), prev(nullptr) {}
    };

    Node* head;
    int count;

public:
    DoublyLinkedList() : head(nullptr), count(0) {}

    bool isEmpty() {
        return head == nullptr;
    }

    void addFirst(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        count++;
    }

    void removeFirst() {
        if (isEmpty()) {
            throw std::out_of_range("List is empty!");
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }
        count--;
    }

    void addLast(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            head = newNode;
        } else {
            Node* trav = head;
            while (trav->next != nullptr) {
                trav = trav->next;
            }
            newNode->prev = trav;
            trav->next = newNode;
        }
        count++;
    }

    void removeLast() {
        if (isEmpty()) {
            throw std::out_of_range("List is empty!");
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
        } else {
            Node* trav = head;
            while (trav->next != nullptr) {
                trav = trav->next;
            }
            trav->prev->next = nullptr;
            delete trav;
        }
        count--;
    }

    void addAt(int index, int data) {
        if (index < 1 || index > count + 1) {
            throw std::out_of_range("Invalid index");
        }
        if (index == 1) {
            addFirst(data);
        } else {
            Node* newNode = new Node(data);
            Node* trav = head;
            int i = 1;
            while (i < index - 1) {
                trav = trav->next;
                i++;
            }
            newNode->prev = trav;
            newNode->next = trav->next;
            trav->next = newNode;
            if (newNode->next != nullptr) {
                newNode->next->prev = newNode;
            }
            count++;
        }
    }

    void removeAt(int index) {
        if (index < 1 || index > count) {
            throw std::out_of_range("Invalid index");
        }
        if (index == 1) {
            removeFirst();
        } else {
            Node* trav = head;
            int i = 1;
            while (i < index) {
                trav = trav->next;
                i++;
            }
            trav->prev->next = trav->next;
            if (trav->next != nullptr) {
                trav->next->prev = trav->prev;
            }
            delete trav;
            count--;
        }
    }

    void reverse() {
        if (head == nullptr || head->next == nullptr) {
            return;
        }
        Node* prev = nullptr;
        Node* current = head;
        while (current != nullptr) {
            prev = current->prev;
            current->prev = current->next;
            current->next = prev;
            current = current->prev;
        }
        head = prev->prev;
    }

    void display() {
        std::cout << "No of nodes: " << count << std::endl;
        std::cout << "Doubly Linked List: head";
        Node* trav = head;
        while (trav != nullptr) {
            std::cout << " -> " << trav->data;
            trav = trav->next;
        }
        std::cout << " -> tail" << std::endl;
    }

    ~DoublyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;
        count = 0;
    }
};

int main() {
    // Creating an instance of the DoublyLinkedList
    SinglyLinkedList linkedList;

    // Test Case 1: Insertion at the Beginning
    linkedList.addFirst(10);
    linkedList.display();  // Output: Doubly Linked List: head -> 10 -> tail

    // Test Case 2: Insertion at a Specific Position (1-based index)
    linkedList.addAt(1, 20);
    linkedList.display();  // Output: Doubly Linked List: head -> 20 -> 10 -> tail

    // Test Case 3: Insertion at the End
    linkedList.addLast(30);
    linkedList.display();  // Output: Doubly Linked List: head -> 20 -> 10 -> 30 -> tail

    // Test Case 4: Deletion from the Beginning
    linkedList.removeFirst();
    linkedList.display();  // Output: Doubly Linked List: head -> 10 -> 30 -> tail

    // Test Case 5: Deletion from a Specific Position (1-based index)
    linkedList.removeAt(2);
    linkedList.display();  // Output: Doubly Linked List: head -> 10 -> tail

    // Test Case 6: Deletion from the End
    linkedList.removeLast();
    linkedList.display();  // Output: Doubly Linked List: head -> tail

    // Test Case 7: Insertion at the Beginning after Deletion
    linkedList.addFirst(5);
    linkedList.display();  // Output: Doubly Linked List: head -> 5 -> tail

    // Test Case 8: Insertion at the Beginning with multiple elements
    linkedList.addFirst(15);
    linkedList.addFirst(25);
    linkedList.display();  // Output: Doubly Linked List: head -> 25 -> 15 -> 5 -> tail

    // Test Case 9: Insertion at a Specific Position beyond the list size
    linkedList.addAt(4, 50);
    linkedList.display();  // Output: Doubly Linked List: head -> 25 -> 15 -> 5 -> 50 -> tail

    // Test Case 10: Reverse the list
    linkedList.reverse();
    linkedList.display();  // Output: Doubly Linked List: head -> 50 -> 5 -> 15 -> 25 -> tail

    // Test Case 11: Deletion from a Specific Position beyond the list size
    linkedList.removeAt(2);
    linkedList.display();  // Output: Doubly Linked List: head -> 50 -> 15 -> 25 -> tail

    // Test Case 12: Display an empty list
    linkedList.removeAt(1);
    linkedList.removeLast();
    linkedList.removeFirst();
    linkedList.display();
}