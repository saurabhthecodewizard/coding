#include <iostream>

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int value = 0, ListNode *nextNode = nullptr) : val(value), next(nextNode) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *head = new ListNode();
    ListNode *trav = head;

    int carryOver = 0;

    while (l1 || l2 || carryOver == 1)
    {
        int sumVal = 0;

        if (l1)
        {
            sumVal += l1->val;
            l1 = l1->next;
        }

        if (l2)
        {
            sumVal += l2->val;
            l2 = l2->next;
        }

        sumVal += carryOver;
        carryOver = sumVal / 10;

        trav->next = new ListNode(sumVal % 10);
        trav = trav->next;
    }

    return head->next;
}

void printList(ListNode *head)
{
    ListNode *current = head;
    while (current)
    {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "null";
}

void testAddition(const std::string &label, ListNode *l1, ListNode *l2)
{
    std::cout << label;
    printList(addTwoNumbers(l1, l2));
    std::cout << std::endl;
}

int main()
{
    // Test Case 1: Normal addition
    ListNode *l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode *l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    testAddition("Test Case 1:", l1, l2); // Output: 7 -> 0 -> 8

    // Test Case 2: Unequal lengths with carry-over
    ListNode *l3 = new ListNode(9, new ListNode(9, new ListNode(9)));
    ListNode *l4 = new ListNode(1);
    testAddition("Test Case 2:", l3, l4); // Output: 0 -> 0 -> 0 -> 1

    // Test Case 3: One list is empty
    ListNode *l5 = new ListNode(1, new ListNode(8, new ListNode(2)));
    ListNode *l6 = nullptr;
    testAddition("Test Case 3:", l5, l6); // Output: 1 -> 8 -> 2

    // Test Case 4: Both lists are empty
    ListNode *l7 = nullptr;
    ListNode *l8 = nullptr;
    testAddition("Test Case 4:", l7, l8); // Output: null

    // Remember to free allocated memory
    delete l1;
    delete l2;
    delete l3;
    delete l4;
    delete l5;

    return 0;
}
