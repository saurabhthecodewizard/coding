#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value = 0, ListNode* nextNode = nullptr) : val(value), next(nextNode) {}
};

ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {
    // Test Case 1: Odd number of nodes
    ListNode* head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
    std::cout << "Middle Node Test Case 1: " << middleNode(head1)->val << std::endl;  // Output: 3

    // Test Case 2: Even number of nodes
    ListNode* head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));
    std::cout << "Middle Node Test Case 2: " << middleNode(head2)->val << std::endl;  // Output: 3

    // Test Case 3: Single node
    ListNode* head3 = new ListNode(1);
    std::cout << "Middle Node Test Case 3: " << middleNode(head3)->val << std::endl;  // Output: 1

    // Test Case 4: Empty list
    ListNode* head4 = nullptr;
    std::cout << "Middle Node Test Case 4: " << (middleNode(head4) ? middleNode(head4)->val : -1) << std::endl;  // Output: -1 (or any indicator of empty list)

    // Remember to free allocated memory
    delete head1;
    delete head2;
    delete head3;

    return 0;
}
