#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value = 0, ListNode* nextNode = nullptr) : val(value), next(nextNode) {}
};

ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    if (!headA || !headB) {
        return nullptr;
    }
    ListNode* a = headA;
    ListNode* b = headB;
    while (a != b) {
        a = a ? a->next : headB;
        b = b ? b->next : headA;
    }
    return a;
}

void printList(ListNode* head) {
    ListNode* current = head;
    while (current) {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "null";
}

void testIntersection(const std::string& label, ListNode* headA, ListNode* headB, ListNode* expected) {
    std::cout << label << " ";
    printList(getIntersectionNode(headA, headB));
    std::cout << "(Expected: " << (expected ? std::to_string(expected->val) : "null") << ")" << std::endl;
}

int main() {
    // Test Case 1: Intersecting at node with value 8
    ListNode* commonNode1 = new ListNode(8, new ListNode(4, new ListNode(5)));
    ListNode* headA1 = new ListNode(4, new ListNode(1, commonNode1));
    ListNode* headB1 = new ListNode(5, new ListNode(6, new ListNode(1, commonNode1)));
    testIntersection("Test Case 1:", headA1, headB1, commonNode1);  // Output: 8 -> 4 -> 5

    // Test Case 2: No intersection
    ListNode* headA2 = new ListNode(2, new ListNode(6, new ListNode(4)));
    ListNode* headB2 = new ListNode(1, new ListNode(5));
    testIntersection("Test Case 2:", headA2, headB2, nullptr);  // Output: null

    // Test Case 3: Intersecting at node with value 2
    ListNode* commonNode3 = new ListNode(2, new ListNode(4, new ListNode(5)));
    ListNode* headA3 = new ListNode(1, new ListNode(9, new ListNode(1, commonNode3)));
    ListNode* headB3 = new ListNode(3, commonNode3);
    testIntersection("Test Case 3:", headA3, headB3, commonNode3);  // Output: 2 -> 4 -> 5

    // Remember to free allocated memory
    delete commonNode1;
    delete headA1;
    delete headB1;
    delete headA2;
    delete headB2;
    delete commonNode3;
    delete headA3;
    delete headB3;

    return 0;
}
