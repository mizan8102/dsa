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
void print_linked_list(Node *head){
    Node *tmp=head;
    while (tmp !=NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
}

void print_reverse_list(Node *tail){
    Node *tmp=tail;
    while (tmp !=NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->prev;
    }
    
}
int main(){
   
   Node *head=new Node(10);
   Node *a=new Node(20);
   Node *b=new Node(30);
   Node *c=new Node(40);

   head->next=a;
   a->next=b;
   a->prev=head;

   b->next=c;
   b->prev=a;
   
   c->prev=b;

   print_linked_list(head);
   cout << endl;
   print_reverse_list(c);

   return 0;
}