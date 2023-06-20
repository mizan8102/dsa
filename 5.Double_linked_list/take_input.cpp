#include<bits/stdc++.h>

#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};

void insert_at_tail(Node *&head, Node* &tail, int val){
    Node *newNode=new Node(val);
    if(tail == NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->prev=tail;
    tail->next = newNode;
    tail=newNode;
}

void print_linked_list(Node *head){
    Node *tmp=head;
    while (tmp !=NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
    cout << endl;
}

void print_reverse_list(Node *tail){
    Node *tmp=tail;
    while (tmp !=NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->prev;
    }
    cout << endl;  
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;
     int val;
   while (true)
   {
       
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
   }

    print_linked_list(head);
   
   // print reverse
   print_reverse_list(tail);
   
   return 0;
}