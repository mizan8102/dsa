#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};

void insert_at_tail(Node *&head, int val){
    Node *newNode=new Node(val);
    Node *tmp=head;
    if(head == NULL){
        head = newNode;
        return ;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp = tmp->next =newNode;
    
}

void print_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        if (tmp->next != NULL && tmp->val == tmp->next->val) {
            tmp->next = tmp->next->next;
        }
        if (tmp->next == NULL) {
             cout << tmp->val << " ";
            break;
        }
        if(tmp->val != tmp->next->val){
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
    }
}

int main(){
   Node* head = NULL;
   while (true)
   {
     int val;
     cin >> val;
     if(val == -1) break;
     insert_at_tail(head, val);
   }
   
    for (Node* i = head; i != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->val > j->val) {
                swap(i->val, j->val);
            }
        }
    }
   print_list(head);
   return 0;
}