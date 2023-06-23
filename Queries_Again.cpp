#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insert_at_tail(Node*& head, Node*& tail, int x, int q) {
    Node* newNode = new Node(q);
    if (x < 0) {
        cout << "Invalid" << endl;
        return;
    }
    if (x == 0) {
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    } else {
        Node* curr = head;
        int count = 0;
        while (count < x - 1 && curr != NULL) {
            curr = curr->next;
            count++;
        }
        if (curr == NULL) {
            cout << "Invalid" << endl;
            return;
        }
        newNode->next = curr->next;
        newNode->prev = curr;
        if (curr->next != NULL) {
            curr->next->prev = newNode;
        } else {
            tail = newNode;
        }
        curr->next = newNode;
    }
    cout << "L -> ";
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
    cout << "R -> ";
    curr = tail;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int x, v;
        cin >> x >> v;
        insert_at_tail(head, tail, x, v);
    }
    return 0;
}
