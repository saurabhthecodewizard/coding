#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value = 0, ListNode* nextNode = nullptr) : val(value), next(nextNode) {}
};

class SortList {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        // Find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Split the list into two halves
        ListNode* secondHalf = slow->next;
        slow->next = nullptr;

        // Recursively sort the two halves
        ListNode* firstHalf = sortList(head);
        ListNode* secondHalfSorted = sortList(secondHalf);

        // Merge the sorted halves
        return merge(firstHalf, secondHalfSorted);
    }

    ListNode* merge(ListNode* first, ListNode* second) {
        ListNode* unionList = new ListNode(0);
        ListNode* trav = unionList;

        while (first && second) {
            if (first->val < second->val) {
                trav->next = first;
                first = first->next;
            } else {
                trav->next = second;
                second = second->next;
            }
            trav = trav->next;
        }

        if (first) {
            trav->next = first;
        }
        if (second) {
            trav->next = second;
        }

        return unionList->next;
    }
};

// Helper function to print the linked list
void printList(const std::string& label, ListNode* head) {
    std::cout << label << " ";
    ListNode* current = head;
    while (current) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    // Test Case 1: Random unsorted list
    ListNode* head1 = new ListNode(4, new ListNode(2, new ListNode(1, new ListNode(3))));
    printList("Test Case 1 (Before):", head1);
    SortList sorter;
    ListNode* result1 = sorter.sortList(head1);
    printList("Test Case 1 (After):", result1);  // Output: 1 -> 2 -> 3 -> 4

    // Test Case 2: Already sorted list
    ListNode* head2 = new ListNode(1, new ListNode(2, new ListNode(8, new ListNode(4))));
    printList("Test Case 2 (Before):", head2);
    ListNode* result2 = sorter.sortList(head2);
    printList("Test Case 2 (After):", result2);  // Output: 1 -> 2 -> 4 -> 8

    // Test Case 3: Single node
    ListNode* head3 = new ListNode(5);
    printList("Test Case 3 (Before):", head3);
    ListNode* result3 = sorter.sortList(head3);
    printList("Test Case 3 (After):", result3);  // Output: 5

    // Remember to free allocated memory
    delete head1;
    delete result1;
    delete head2;
    delete result2;
    delete head3;
    delete result3;

    return 0;
}
