#include <iostream>

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int value = 0, ListNode *nextNode = nullptr) : val(value), next(nextNode) {}
};

ListNode *reverseList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *current = head;
    while (current != nullptr)
    {
        ListNode *nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    return prev;
}

int main()
{
    // Example usage
    ListNode *head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));
    std::cout << "Before reverse: ";
    ListNode *trav = head;
    while (trav != nullptr)
    {
        std::cout << trav->val << " ";
        trav = trav->next;
    }
    std::cout << std::endl;

    ListNode *reversedHead = reverseList(head);

    // Print the reversed list for verification
    std::cout << "After reverse: ";
    ListNode *reversedTrav = reversedHead;
    while (reversedTrav != nullptr)
    {
        std::cout << reversedTrav->val << " ";
        reversedTrav = reversedTrav->next;
    }
    std::cout << std::endl;

    // Remember to free allocated memory
    delete head;
    delete reversedHead;

    return 0;
}
