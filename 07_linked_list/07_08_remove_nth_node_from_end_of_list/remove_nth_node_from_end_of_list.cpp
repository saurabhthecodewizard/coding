#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value = 0, ListNode* nextNode = nullptr) : val(value), next(nextNode) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* slow = head;
    ListNode* fast = head;

    // Move fast pointer n nodes ahead
    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }

    // If fast pointer becomes null, remove the first node
    if (!fast) {
        return head->next;
    }

    // Move both pointers until fast pointer reaches the end
    while (fast->next) {
        slow = slow->next;
        fast = fast->next;
    }

    // Remove the nth node from the end
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
    // Test Case 1: Remove the second node from the end
    ListNode* head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
    printList("Test Case 1 (Before):", head1);
    ListNode* result1 = removeNthFromEnd(head1, 2);
    printList("Test Case 1 (After):", result1);  // Output: 1 -> 2 -> 3 -> 5

    // Test Case 2: Remove the first node from the end
    ListNode* head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
    printList("Test Case 2 (Before):", head2);
    ListNode* result2 = removeNthFromEnd(head2, 5);
    printList("Test Case 2 (After):", result2);  // Output: 2 -> 3 -> 4 -> 5

    // Test Case 3: Remove the only node
    ListNode* head3 = new ListNode(1);
    printList("Test Case 3 (Before):", head3);
    ListNode* result3 = removeNthFromEnd(head3, 1);
    printList("Test Case 3 (After):", result3);  // Output: nullptr

    // Remember to free allocated memory
    delete head1;
    delete head2;
    delete head3;

    return 0;
}
