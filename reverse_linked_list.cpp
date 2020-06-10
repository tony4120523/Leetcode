// Source : https://leetcode.com/problems/reverse-linked-list/
/* Date   : 2019-10-02  r
            2020-06-11  r
 */

/********************************************************************************** 
 * 
 * Reverse a singly linked list.
 * 
 * click to show more hints.
 * 
 * Hint:
 * A linked list can be reversed either iteratively or recursively. Could you implement both?
 *           
 **********************************************************************************/


#include <iostream>
using namespace std;

struct Node {
    int n;
    Node *pNext;
    Node(int input) : n(input), pNext(NULL) {}
};

Node* initList(Node **pHead) {
    for (int i = 5; i >= 1; i--) {
        Node *newNode = new Node(i);
        newNode->pNext = *pHead;
        *pHead = newNode;
    }
    return *pHead;
}

void printList(Node *pHead) {
    while (pHead) {
        cout << pHead->n << endl;
        pHead = pHead->pNext;
    }
}

void deleteList(Node *pHead) {
    while (pHead) {
        Node *tmp = pHead->pNext;
        delete pHead;
        pHead = tmp;
    }
}

Node* reverse(Node **pHead) {
    Node *prev = NULL, *curr = *pHead;
    while (curr) {
        Node *preceding = curr->pNext;
        curr->pNext = prev;
        prev = curr;
        curr = preceding;
    }
    *pHead = prev;
    return *pHead;
}

int main() {
    // It's better to have a picture
    cout << "init List" << endl;
    Node *pHead = NULL;
    initList(&pHead);
    printList(pHead);
    cout << "- - - - - - - - - -" << endl;

    // to reverse list
    cout << "reversed List" << endl;
    reverse(&pHead);
    printList(pHead);

    deleteList(pHead);
	return 0;
}

