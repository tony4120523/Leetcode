#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
 
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    // 1 -> 2 -> 3 (0xffff) -> 4 (0xaaaa)
    // 1 -> 2 -> 4 (0xffff) -> NULL (0xaaaa is freed)
    // this method requires the node which is not the tail
    void deleteNode(ListNode* node) {
        ListNode *tmp = node->next;
        *node = *node->next;
        delete tmp;

    }
    void initNode(ListNode **head) {
        for (int i = 4; i > 0; i--) {
            ListNode *newnode = new ListNode(i);
            newnode->next = *head;
            *head = newnode;
        }
    }
    void printNode(ListNode *head) {
        while (head != NULL) {
            cout << head->val << "\n";
            head = head->next;
        }
        
    }
};

int main() {
    ListNode *head = NULL;

    Solution s;
    s.initNode(&head);
    s.printNode(head);

    // delete node 3
    cout << "delete node 3" << "\n";
    //
    ListNode *node3 = head->next->next;
    s.deleteNode(node3);
    s.printNode(head);
    return 0;
}

