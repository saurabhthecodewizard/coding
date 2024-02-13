#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value = 0, ListNode* nextNode = nullptr) : val(value), next(nextNode) {}
};

ListNode* reverse(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    ListNode* nextNode = head;
    while (nextNode) {
        nextNode = nextNode->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    return prev;
}

bool isPalindrome(ListNode* head) {
    if (!head || !head->next) {
        return true;
    }

    ListNode* slow = head;
    ListNode* fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* reversedHead = reverse(slow->next);
    ListNode* first = head;
    ListNode* second = reversedHead;
    while (second) {
        if (first->val != second->val) {
            reverse(reversedHead);
            return false;
        }
        first = first->next;
        second = second->next;
    }

    reverse(reversedHead);
    return true;
}

int main() {
    // Test Case 1: Palindrome with even number of nodes
    ListNode* head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(3, new ListNode(2, new ListNode(1))))));
    std::cout << "Test Case 1: " << std::boolalpha << isPalindrome(head1) << std::endl;  // Output: true

    // Test Case 2: Palindrome with odd number of nodes
    ListNode* head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(2, new ListNode(1)))));
    std::cout << "Test Case 2: " << std::boolalpha << isPalindrome(head2) << std::endl;  // Output: true

    // Test Case 3: Not a palindrome
    ListNode* head3 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
    std::cout << "Test Case 3: " << std::boolalpha << isPalindrome(head3) << std::endl;  // Output: false

    // Test Case 4: Single node
    ListNode* head4 = new ListNode(1);
    std::cout << "Test Case 4: " << std::boolalpha << isPalindrome(head4) << std::endl;  // Output: true

    // Test Case 5: Empty list
    ListNode* head5 = nullptr;
    std::cout << "Test Case 5: " << std::boolalpha << isPalindrome(head5) << std::endl;  // Output: true

    // Remember to free allocated memory
    delete head1;
    delete head2;
    delete head3;
    delete head4;

    return 0;
}
