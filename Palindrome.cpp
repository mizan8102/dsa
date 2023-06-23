#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(ListNode*& head, ListNode*& tail, int val) {
    ListNode* newNode = new ListNode(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void reverse(ListNode*& head, ListNode* cur) {
    if (cur->next == NULL) {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
bool isPalindrome(ListNode* head) {
    ListNode* newHead = NULL;
    ListNode* newTail = NULL;
    ListNode* tmp = head;
    while (tmp != NULL) {
        insert_tail(newHead, newTail, tmp->val);
        tmp = tmp->next;
    }
    reverse(newHead, newHead);
    tmp = head;
    ListNode* tmp2 = newHead;
    while (tmp != NULL) {
        if (tmp->val != tmp2->val) {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return true;
}

int main() {
    ListNode* head = NULL;
    ListNode* tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_tail(head, tail, val);
    }
    bool flag = isPalindrome(head);
    flag ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
