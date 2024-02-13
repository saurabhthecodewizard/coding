#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value = 0, ListNode* nextNode = nullptr) : val(value), next(nextNode) {}
};

ListNode* detectCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return nullptr;
}

int main() {
    // Test Case 1: Cycle present
    ListNode* head1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    ListNode* node5 = new ListNode(5);
    head1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node2;  // Creating a cycle
    std::cout << "Test Case 1: " << detectCycle(head1)->val << std::endl;  // Output: 2

    // Test Case 2: No cycle
    ListNode* head2 = new ListNode(1, new ListNode(2, new ListNode(3)));
    std::cout << "Test Case 2: " << detectCycle(head2) << std::endl;  // Output: nullptr

    // Test Case 3: Single node with a cycle
    ListNode* head3 = new ListNode(1);
    head3->next = head3;  // Creating a cycle
    std::cout << "Test Case 3: " << detectCycle(head3)->val << std::endl;  // Output: 1

    // Test Case 4: Single node without a cycle
    ListNode* head4 = new ListNode(1);
    std::cout << "Test Case 4: " << detectCycle(head4) << std::endl;  // Output: nullptr

    // Test Case 5: Empty list
    ListNode* head5 = nullptr;
    std::cout << "Test Case 5: " << detectCycle(head5) << std::endl;  // Output: nullptr

    // Remember to free allocated memory
    delete head1;
    delete head2;
    delete head3;
    delete head4;

    return 0;
}
