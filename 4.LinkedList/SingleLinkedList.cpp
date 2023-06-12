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
int main(){
   Node *head=new Node(12);
   Node *a=new Node(24);
   Node *b=new Node(45);
   Node *c=new Node(54);
   Node *d=new Node(78);
   head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;
   Node *temp=head;
   while (temp !=NULL){ 
    cout << temp->val << endl;
    temp=temp->next;
   
   }
   return 0;
}