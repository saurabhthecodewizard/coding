#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value = 0, ListNode* nextNode = nullptr) : val(value), next(nextNode) {}
};

bool hasCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true;
        }
    }
    return false;
}

int main() {
    // Test Case 1: Cycle present
    ListNode* head1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    head1->next = node2;
    node2->next = node3;
    node3->next = node2;  // Creating a cycle
    std::cout << "Test Case 1: " << (hasCycle(head1) ? "true" : "false") << std::endl;  // Output: true

    // Test Case 2: No cycle
    ListNode* head2 = new ListNode(1, new ListNode(2, new ListNode(3)));
    std::cout << "Test Case 2: " << (hasCycle(head2) ? "true" : "false") << std::endl;  // Output: false

    // Test Case 3: Single node with a cycle
    ListNode* head3 = new ListNode(1);
    head3->next = head3;  // Creating a cycle
    std::cout << "Test Case 3: " << (hasCycle(head3) ? "true" : "false") << std::endl;  // Output: true

    // Test Case 4: Single node without a cycle
    ListNode* head4 = new ListNode(1);
    std::cout << "Test Case 4: " << (hasCycle(head4) ? "true" : "false") << std::endl;  // Output: false

    // Test Case 5: Empty list
    ListNode* head5 = nullptr;
    std::cout << "Test Case 5: " << (hasCycle(head5) ? "true" : "false") << std::endl;  // Output: false

    // Remember to free allocated memory
    delete head1;
    delete head2;
    delete head3;
    delete head4;

    return 0;
}
