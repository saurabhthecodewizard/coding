#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value = 0, ListNode* nextNode = nullptr) : val(value), next(nextNode) {}
};

ListNode* deleteMiddle(ListNode* head) {
    if (!head || !head->next) {
        return nullptr;
    }

    ListNode* slow = head;
    ListNode* fast = head->next->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    slow->next = slow->next->next;
    return head;
}

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
    // Test Case 1: Odd number of nodes
    ListNode* head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
    printList("Test Case 1 (Before):", head1);
    ListNode* result1 = deleteMiddle(head1);
    printList("Test Case 1 (After):", result1);  // Output: 1 -> 2 -> 4 -> 5

    // Test Case 2: Even number of nodes
    ListNode* head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));
    printList("Test Case 2 (Before):", head2);
    ListNode* result2 = deleteMiddle(head2);
    printList("Test Case 2 (After):", result2);  // Output: 1 -> 2 -> 4

    // Test Case 3: Single node
    ListNode* head3 = new ListNode(1);
    printList("Test Case 3 (Before):", head3);
    ListNode* result3 = deleteMiddle(head3);
    printList("Test Case 3 (After):", result3);  // Output: nullptr

    // Remember to free allocated memory
    delete head1;
    delete head2;
    delete head3;

    return 0;
}
