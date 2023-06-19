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
void insert_at_head(Node *&head, int val){
    Node *newNode= new Node(val);
    if(head == NULL){
        head=newNode;
        return;
    }
    newNode->next=head; 
    head->prev=newNode;
    head=newNode;
}

int size(Node *head){
    Node *tmp=head;
    int c=0;
    while (tmp !=NULL)
    {
        c++;
        tmp=tmp->next;
    }
    return c;
}

void insert_at_any_position(Node *head, int pos, int val){
    Node *newNode=new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        tmp= tmp->next;
    }
    newNode->next=tmp->next;
    newNode->prev=tmp;
    tmp->next=newNode;
}

void insert_at_tail(Node *head,int val){
    Node *tmp=head;
    Node *newNode=new Node(val);
    while (tmp->next !=NULL)
    {
        tmp=tmp->next;
    }
    newNode->prev=tmp;
    tmp->next=newNode;
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
   insert_at_head(head,43);
   cout << endl << "after insert " << endl;
    print_linked_list(head);

    cout << endl << endl << "enter index number for position =" << endl;
    int index;
    cin >> index;
    if(index>size(head)){
        cout << "Invalid position" << endl;
    }else{
         insert_at_any_position(head, index, 700);
    }
    insert_at_tail(head,4302);
    cout << endl << "after insert at "<< index <<" position add" << endl;
    print_linked_list(head);
    
   return 0;
}