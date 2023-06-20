#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node*& head, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

bool equal_check(Node* head1, Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->val != temp2->val) {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (temp1 == NULL && temp2 == NULL) {
        return true;
    }

    return false;
}

int main() {
    int val;
    Node* head1 = NULL;
    Node* head2 = NULL;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head1, val);
    }
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head2, val);
    }
    if (equal_check(head1, head2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
