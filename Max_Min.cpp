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
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void get_mini_max(Node* head, int *max, int *min) {
    if (head == NULL) {
        return;
    }
    *max = head->val;
    *min = head->val;
    Node* temp = head->next;

    while (temp != NULL) {
        if (temp->val > *max) {
            *max = temp->val;
        }
        if (temp->val < *min) {
            *min = temp->val;
        }
        temp = temp->next;
    }
}
int main() {
    int val;
    Node* head = NULL;

    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }

    int max, min;
    get_mini_max(head, &max, &min);
    cout << max << " " << min <<  endl;

    return 0;
}
